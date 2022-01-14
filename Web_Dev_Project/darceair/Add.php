<?php

 session_start();
 unset($_SESSION["error"]);

    include_once 'dbconnect.php';

    if(mysqli_connect_errno())
    {
        echo "Failed";
    }


    if(isset($_SESSION["account"]))
    {
        $user = $_SESSION["account"];
        if($_POST["id"] > 0)
        {
            $add = $_POST["id"];
            $stmt = $con->prepare("INSERT INTO faves(add, user) VALUES (?,?)");
			$stmt->bind_param("ss", $add, $user);
            if(mysqli_query($con, $sql))
            {
            }
        }

        if($_POST["delete"] > 0)
        {
            $delete = $_POST["delete"];
            $location = "Location: faves.php#$delete";
            $sql1 = "DELETE FROM faves WHERE ID = '$delete' AND User = '$user'";
            $result1 = mysqli_query($con, $sql1);
            if(mysqli_query($con, $sql1))
            {
                header($location);
                return;
            }
        }
    }
    else
    {
        $_SESSION["log"] = " **Please login to add to Faves **";
        return;
    }

 ?>