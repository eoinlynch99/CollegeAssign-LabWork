<?php
 session_start();
 unset($_SESSION["Selected"]);
 unset($_SESSION["DateSelected"]);
 
 $con = mysqli_connect("localhost","root","","darceair");
 $src = $_POST['image'];
 
 $query = "SELECT * FROM date JOIN flights USING(flight_id) WHERE poster='$src'";
  
 $sql = $con->query($query);
 
 $n = $sql->num_rows;
  
 if($n > 0)
 {
	while($row = mysqli_fetch_array($sql))
	{
		$_SESSION["Selected"] = $row['title'];
	}
	
	header("Location:flight_times.php");
	return;
 }
 else
 {	
	header("Location:flight_times.php");
	return;
 }
 ?>