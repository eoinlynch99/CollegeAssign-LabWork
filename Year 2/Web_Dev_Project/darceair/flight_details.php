<?php
    session_start();
    unset($_SESSION["currentFile"]);
    $_SESSION["currentFile"] = basename($_SERVER['PHP_SELF']);
?>
<html>

    <head>
        <title>Darceair</title>
        <link rel="stylesheet" href="./css/Main.css">
        <link rel="stylesheet" href="./css/flights.css">
        <link rel="stylesheet" href="./css/flight_det.css">
    </head>

<script>
    function Multiplier()
    {
        var number_of_tickets = document.getElementById("Tickets").value;
        var Cost= number_of_tickets * 7;
        document.getElementById("Cost").innerHTML = "&euro;"+Cost;
    }
</script>


    <body>
        <div id="Whole">
            <br><br>

            <div id="main1">

                <div id="Top">
                    <div class="container2">
                        <img src="./images/airplane1.jpg" style="width:100%; height: 160px;">
                    </div>
                </div>

                <ul id="Banner">
                    <a id="Darce">Darceair</a>
                    <?php
                        if(isset($_SESSION["account"]))
                        {
                            echo "<li><a href=\"login_register.php\">My Account</a></li>";
                        }
                        else
                        {
                            echo "<li id= \"last\"><a href=\"login_register.php\">Login/Register</a></li>";
                        }
                        ?>
                    <li><a href="contact_us.php">Contact Us</a></li>
                    <li><a href="coming_soon.php">Coming Soon</a></li>
                    <?php
                    if(isset($_SESSION["Selected"]) AND isset($_SESSION["DateSelected"]))
                    {
                        echo "<li><a class=\"active\" href=\"flight_details.php\">Flight Times</a></li>";
                    }
                    else
                    {
                        echo "<li><a class=\"active\" href=\"flight_times.php\">Flight Times</a></li>";
                    }
                    ?>
                    <li id= "first"><a href="home.php">Home</a></li>
                </ul>

                <div id="SearchBar">
                    <h2>Book Tickets</h2>
                    <?php
                        if(!isset($_SESSION["Selected"]) OR isset($_SESSION["DateSelected"]))
                        {
                            echo "<form id = \"ChooseFlight\" action=\"Selected.php\" method = \"post\">";
                                echo "<select id = \"Flight\" name= \"Flight\" class=\"dropbtn\">";
                                    echo "<option value = \"1\">CHOOSE A FLIGHT</option>";

                                    $con=mysqli_connect("localhost","root","","darceair");
                                    // Check connection
                                    if (mysqli_connect_errno())
                                    {
                                        echo "Failed to connect to MySQL: " . mysqli_connect_error();
                                    }
                                    $result = mysqli_query($con,"SELECT * FROM flights");

                                    while($row = mysqli_fetch_array($result))
                                    {
                                        echo "<option>" .$row['title']. "</option>";
                                    }
                                echo "</select>";
                                mysqli_close($con);

                                echo "&nbsp&nbsp <input id=\"button\" type=\"submit\" style=\"cursor: pointer;\" value=\"Find Dates\">";
                                echo    "&nbsp&nbsp<form action=\"UnsetAll.php\" method=\"post\">
                                        <input  id=\"button\" type=\"submit\" name=\"Back\" value=\"Go Back\">
                                    </form>";
                            echo "</form>";
                        }
                        else
                        {
                            echo "<form id = \"Dates\" action=\"flight_dates.php\" method = \"post\">";
                                echo "<select id = \"Date\" name= \"Date\" class=\"dropbtn\">";
                                    echo "<option value = \"1\">CHOOSE A DATE</option>";

                                    $con=mysqli_connect("localhost","root","","darceair");
                                    // Check connection
                                    if (mysqli_connect_errno())
                                    {
                                        echo "Failed to connect to MySQL: " . mysqli_connect_error();
                                    }
                                    $result = mysqli_query($con,"SELECT date.date FROM date WHERE Title ='". $_SESSION["Selected"] ."'");

                                    //Print dates associated with the chosen film.
                                    while($row = mysqli_fetch_array($result))
                                    {
                                        echo "<option>" .$row['date']. "</option>";
                                    }
                                echo "</select>";
                                mysqli_close($con);

                                echo "&nbsp&nbsp <input id=\"button\" type=\"submit\" style=\"cursor: pointer;\" value=\"See Times\">";

                                echo "&nbsp&nbsp";
                                echo    "<form action=\"UnsetAll.php\" method=\"post\">
                                            <input  id=\"button\" type=\"submit\" name=\"Back\" value=\"Go Back\">
                                        </form>";
                            echo "</form>";
                        }
                    ?>
                </div>

            <?php
                if(isset($_SESSION["Selected"]) AND isset($_SESSION["DateSelected"]))
                {
                    echo '<div id= "Flights">';
                        
                        echo '<div id= "Heading">';
                            echo "<h1>".$_SESSION['Selected']."</h1>";
                        echo '</div>';
                        echo "<br>";
                        echo '<div id= "Picture">';

                            $con=mysqli_connect("localhost","root","","darceair");
                            // Check connection
                            if (mysqli_connect_errno())
                            {
                                echo "Failed to connect to MySQL: " . mysqli_connect_error();
                            }
                            $result = mysqli_query($con,"SELECT * FROM flights JOIN date ON(date.flight_id = flights.flight_id) WHERE flights.title = '".$_SESSION['Selected']."' AND date.date = '".$_SESSION['DateSelected']."'");

                            if (!$result)
                            {
                                printf("Error: %s\n", mysqli_error($con));
                                exit();
                            }

                            while($row = mysqli_fetch_array($result))
                            {
                                echo "<tr>";
                                    echo "<td><img src=\"".$row['poster']."\" style= \"width: 100%; height: 100%;\"></td>";
                                    echo '</div>';
                                    echo '<div id= "details">';
                                    echo "<br><br><br><span>About: </span>"."<td>" . $row['details'] . " </td>";
                                    echo "<br><br>";
                                    echo "<span>Flight Length: </span>"."<td>" . $row['length'] . " </td>";
                                    echo "<br><br>";
                                    echo "<span>What to do: </span>"."<td>" . $row['attractions'] . " </td>";
                                    echo "<br></div>";
                                    echo "<div id= \"Details2\">";
                                    echo "<br>";
                                    echo "<span>Date: </span>"."<td> " .$row['date']. " </td>";
                                    echo "<br><br>";

                                    echo "<span>Times: &nbsp</span>";
                                    echo "<form id = \"Time\" action=\"Book_Tickets.php\" method = \"post\">";
                                        echo "<select id = \"Time\" name= \"Time\" class=\"dropbtn1\">";
                                            echo "<option value = \"1\">CHOOSE A TIME</option><br>";

                                            $con=mysqli_connect("localhost","root","","darceair");
                                            // Check connection
                                            if (mysqli_connect_errno())
                                            {
                                                echo "Failed to connect to MySQL: " . mysqli_connect_error();
                                            }
                                            $result = mysqli_query($con,"SELECT * FROM date WHERE Title ='". $_SESSION["Selected"] ."' AND date.Date = '". $_SESSION["DateSelected"] ."'");

                                            //Print dates associated with the chosen destination.
                                            while($row = mysqli_fetch_array($result))
                                            {
                                                echo "<option>" .$row['time1']. "</option>";
                                                echo "<option>" .$row['time2']. "</option>";
                                                echo "<option>" .$row['time3']. "</option>";
                                                echo "<option>" .$row['time4']. "</option>";
                                            }
                                        echo "</select>";

                                        echo "<br><br><span>Number of Tickets: &nbsp</span>";
                                        echo "<input id='Tickets' type='number' onchange='Multiplier()' name='Tickets' min='1' max='20' value='1'></input>";

                                        echo "<br><br><span>Price: &nbsp&nbsp</span>";
                                        echo '<p id="Cost">&euro;7</p><br><br>';

                                        if(isset($_SESSION["account"]))
                                        {
                                            echo " <input id=\"longButton\" type=\"submit\" style=\"cursor: pointer;\" value=\"Book Tickets\"><br><br>";
                                        }
                                        else
                                        {
                                            echo "<a href=\"login_register.php\" id=\"longButton2\">Log in to Book Flights!</a><br><br>";
                                        }

                                    echo "</form>";
                                echo "</tr>";
                            }
                        echo "</div>";

                    echo "</div>";
                        mysqli_close($con);
                }
                else if(isset($_SESSION["Selected"]) AND !isset($_SESSION["DateSelected"]))
                {
                    echo "<br>";
                    echo "<h3 class=\"center\">Choose The Date You Wish To See ".$_SESSION["Selected"]."</h3>";
                    echo "<img src=\"./images/Waiting.gif\" class = \"center\" style= \"width: 20%; height: 20%;\">";
                }
				?>
			</div>
			
			<br>
			<div id="footer">
				<p align = "left" id = "Darce">Darceair</p>
			</div>
		</div>
    </body>
</html>