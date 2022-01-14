<?php
	session_start();
    include_once 'dbconnect.php';
?>
<html>

	<head>
		<title>Darceair</title>
		<link rel="stylesheet" href="./css/Main.css">
		<link rel="stylesheet" href="./css/Login.css">
		<link rel="stylesheet" href="./css/Booking.css">
		
	</head>

	<body>

		<div id="Whole">
			<br><br>
			<div id="main1">
				<div id="Top">
					<div class="container">
						<img src="./images/airplane1.jpg" style="width:100%; height: 160px;">
					</div>
				</div>

				<ul id="Banner">
					<a id="Darce">Darceair</a>
					<?php
					if(isset($_SESSION["account"]))
					{
						echo "<li id= \"last\"><a class = \"active\" href=\"login_register.php\">My Account</a></li>";
					}
					else
					{
						echo "<li id= \"last\"><a class = \"active\" href=\"login_register.php\">Login/Register</a></li>";
					}
					?>
					<li><a href="contact_us.php">Contact Us</a></li>
					<li><a href="sale.php">Sale</a></li>
					<?php			
					if(isset($_SESSION["Selected"]) AND isset($_SESSION["DateSelected"]))
					{		
						echo "<li><a href=\"flight_details.php\">Flight Times</a></li>";
					}
					else
					{
						echo "<li><a href=\"flight_times.php\">Flight Times</a></li>";
					}
					?>
					<li id= "first"><a href="home.php">Home</a></li>
				</ul>

				
				<a href="login_register.php"><img id="Escape" src="./images/X.png" name="Back"></a>
				
				<div id="Body">
					<h1 id="Heading">&nbspMy Bookings</h1>
					
					<?php

						// Check connection
						if (mysqli_connect_errno())
						{
							echo "Failed to connect to MySQL: " . mysqli_connect_error();
						}
						
						$query = "SELECT * FROM bookings WHERE Customer_Name = \"". $_SESSION["account"] ."\"";
						  
						$result = $con->query($query);
						
						$n = $result->num_rows;
						
						if($n > 0)
						{
							echo "<table id=\"Booking_Table\">
								<tr>
									<th>Ref Num</th>
									<th>Username</th>
									<th>Destination</th>
									<th>Time</th>
									<th>Date</th>
									<th>Tickets</th>
									<th>Total Cost</th>
								</tr>";

								while($row = mysqli_fetch_array($result))
								{
									echo "<tr>";
										echo "<td>" . $row['booking_ref'] . "</td>";
										echo "<td>" . $row['customer_name'] . "</td>";
										echo "<td>" . $row['destination'] . "</td>";
										echo "<td>" . $row['plane_time'] . "</td>";
										echo "<td>" . $row['plane_date'] . "</td>";
										echo "<td>" . $row['num_of_tickets'] . "</td>";
										echo "<td>€" . $row['total_cost'] . "</td>";
									echo "</tr>";
								}
							echo "</table>";
							
							mysqli_close($con);
						}
						else
						{
							echo '<br><h2>You have no bookings.</h2>';
						}
					?>
					
					<br><br>
					<a href="flight_times.php" class="button">Browse Holidays</a>
					
				</div>
            </div>
			
			<br>
			<div id="footer">
				<p align = "left" id = "Darce">Darceair</p>
			</div>
		</div>
		
		
		
	</body>
</html>