<?php
 session_start();
 unset($_SESSION["DateSelected"]);
 unset($_SESSION["Selected"]);
 
 $con = mysqli_connect("localhost","root","","darceair");
 
 $query = "SELECT date.date FROM date WHERE Title='".$_POST['flight']."'";
  
 $sql = $con->query($query);
 
 $n = $sql->num_rows;
  
 if($n > 0)
 {
	$_SESSION["Selected"] = $_POST['flight'];
	header("Location:flight_times.php");
	return;
 }
 else
 {	
	header("Location:flight_times.php");
	return;
 }