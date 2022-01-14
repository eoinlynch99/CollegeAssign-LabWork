<?php 
 session_start();
 unset($_SESSION["DateSelected"]);
 
 $con = mysqli_connect("localhost","root","","darceair");
 
 $query = "SELECT * FROM date WHERE JOIN flights ON(flight.flight_id = flights.flight_id) WHERE flights.title= '".$_SESSION["Selected"]."' AND date='".$_POST['Date']."'";
  //SELECT * FROM flights JOIN date ON(date.flight_id = flights.flight_id) WHERE flights.title = '".$_SESSION['Selected']."' AND date.date = '".$_SESSION['DateSelected']."'");
 $sql = $con->query($query);
 
 $n = $sql->num_rows;
  
 if($n > 0)
 {
	$_SESSION["DateSelected"] = $_POST['Date'];
	header("Location:flight_details.php");
	return;
 }
 else
 {
	header("Location:flight_times.php");
	return;
 }
 ?>