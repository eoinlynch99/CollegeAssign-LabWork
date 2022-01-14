<?php	
	session_start();
	
	$con=mysqli_connect("localhost","root","","darceair");
	
	// Check connection
	if (mysqli_connect_errno())
	{
	echo "Failed to connect to MySQL: " . mysqli_connect_error();
	}

	mysqli_query($con,"DELETE FROM `users` WHERE `users`.`username` = '" . $_SESSION["account"] . "'");
	
	$_SESSION["error"] = "<span>**Your Account Has Been Deleted**</span>";
	unset($_SESSION["account"]);
	header("Location:login_register.php");
	return;
?>