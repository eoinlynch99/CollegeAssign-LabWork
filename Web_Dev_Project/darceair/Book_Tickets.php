<?php
	session_start();

	$con = mysqli_connect("localhost","root","","darceair");

	// Check connection
	if (mysqli_connect_errno())
	{
		echo "Failed to connect to MySQL: " . mysqli_connect_error();
	}
 
	$query= "SELECT date.date FROM date WHERE Title='".$_SESSION["Selected"]."'AND date.date='".$_SESSION["DateSelected"]."' 
			AND (date.time1='".$_POST['Time']."' OR date.time2='".$_POST['Time']."' OR date.time3='".$_POST['Time']."' OR date.time4='".$_POST['Time']."')";
	  
	$sql = $con->query($query);
	 
	$n = $sql->num_rows;
	  
	if($n > 0)
	{
		
		$stmt2 = $con->prepare("INSERT INTO bookings (customer_name, destination, plane_time, plane_date, num_of_tickets, total_cost)) 
				VALUES 
			   ('$_SESSION[account]','$_SESSION[Selected]','$_POST[Time]','$_SESSION[DateSelected]',$_POST[Tickets], ($_POST[Tickets]*20))";

			   

		if ($con->query($sql2) === TRUE) 
		{
			unset($_SESSION["Selected"]);
			header("Location:Booking.php");
			return;
		} 
		else 
		{
			echo "Error: " . $sql . "<br>" . $con->error;
		}

		mysqli_close($con);
	}
	else
	{
		header("Location:flight_details.php");
		return;
	}
?>