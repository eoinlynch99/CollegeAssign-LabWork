<?php
	session_start();
    include_once 'dbconnect.php';
?>
<html>

<head>
    <title>Darceair</title>
    <link id="sheet" rel="stylesheet" href="./css/Main.css">
	<link rel="stylesheet" href="./css/Login.css">
</head>

<body>

	<div id="Whole">
		<div id="Empty">
		</div>
		<div id="Main">
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
			
			<?php
				echo '<div id= "Center">';
				echo '<h1 id="Heading">&nbsp&nbspSettings</h1>';


				
				// Check connection
				if (mysqli_connect_errno())
				{
					echo "Failed to connect to MySQL: " . mysqli_connect_error();
				}

				$result = mysqli_query($con,"SELECT * FROM users Where Username='".$_SESSION['account']."'");


				while($row = mysqli_fetch_array($result))
				{
					echo "<tr>";
						echo "<br>";
						echo "<span>Username:</span><br>"."<td>" . $row['username'] . " </td>";
						echo "<br><br>";
						echo "<span>Name:   </span><br>"."<td>" . $row['first_name'] . " </td>";
						echo "<td> " . $row['surname'] . "</td>";
						echo "<br><br>";
						echo "<span>Email Address:</span><br>"."<td>" . $row['email'] . "</td>";
						echo "<br><br>";
						echo "<span>Date of Birth:</span><br>"."<td>" . $row['date'] . "</td>";
						echo "<br><br>";
						echo "<span>Address:</span><br>". $row['address'];
					echo "</tr>";
				}
				mysqli_close($con);
				
				echo "<br><br><br>";
				echo "<a href=\"PassChange.php\" class=\"button\">Change Password</a>";
				echo "&nbsp&nbsp <a href=\"Delete.php\" class=\"button\">Delete Account</a>";
			?>
				
				<script>
					function Function() 
					{
						var txt;
						
						if(confirm("Your account will be permanently Deleted. Are you sure you want to wish to continue?"))
						{
							txt="delete";
							<?php
							if (isset($_POST['Delete'])) 
							{
								echo "<span>**You have deleted your account.**</span>";
								header("Location: Delete.php");
								exit;
							}
							?>
						}
						else
						{
							<?php
								echo "<span>**You have cancelled the delete operation.**</span>";
							?>
						}
					}
				</script>
			</div>
            <br>


		</div>
        <div id="footer">
			<p align = "left" id = "Darce">Darceair</p>
		</div>
		


</body>

</html>