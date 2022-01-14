<?php
    include_once 'dbconnect.php';
    session_start();
?>
<html>

<head>
    <title>Darceair</title>

    <meta charset="UFT-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <link rel="stylesheet" href="./css/stackpath.bootstrapcdn.min.css" >
    <link id="sheet" rel="stylesheet" href="./css/Main.css">
    <link id="sheet" rel="stylesheet" href="./css/sale.css">
</head>
   <script
    src="https://code.jquery.com/jquery-3.3.1.min.js"
    integrity="sha256-FgpCb/KJQlLNfOu91ta32o/NMZxltwRo8QtmkMRdAu8="
    crossorigin="anonymous"></script>
        <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.3/umd/popper.min.js" integrity="sha384-ZMP7rVo3mIykV+2+9J3UJ46jBk0WLaUAdn689aCwoqbBJiSnjAK/l8WvCWPIPm49"
            crossorigin="anonymous"></script>
        <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.1.1/js/bootstrap.min.js" integrity="sha384-smHYKdLADwkXOn1EmN1qk/HfnUcbVRZyYmZ4qpPea6sjB/pTJ0euyQp0Mk8ck+5T"
            crossorigin="anonymous"></script>
        <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>


<script>
function add(e)
{
    <?php
    if(isset($_SESSION["account"]))
    {
        ?>
        if(e.innerHTML == "Go to faves")
        {
            window.location.pathname = '/Darceair/faves.php'
        }
        else if(e.innerHTML == "Add to faves")
        {
            $.ajax({
                url: "Add.php",
                method: "POST",
                data: {id: e.value},
            }).done(function() {
                e.innerHTML = "Go to faves";

            });
        }
        <?php
    }
    else
    {
        echo "alert('Please Login to add to Faves')";
    }
    ?>
}

</script>

<body>

    <div id="Background">
        <br><br>
        <div id="Main">
            <div id="Top">
                <div class="container">
                    <img src="./images/airplane1.jpg" style="width:100%; height: 160px;">
                </div>
            </div>

            <nav class="navbar sticky-top navbar-expand-xl navbar-default ">
                <div class="navbar-header">
                    <p class="navbar-brand">Darceair</p>
                </div>

                <button type="button" class="navbar-toggler navbar-dark" data-toggle="collapse" data-target="#navbarNav">
                    <span class="navbar-toggler-icon"></span>
                </button>

                <div class="collapse navbar-collapse" id="navbarNav">

                    <ul class="nav navbar-nav ml-auto">
                        <li id = "first" class="nav-item">
                            <a class="nav-link" href="home.php">&nbsp;Home&nbsp;</a>
                        </li>
                        <li class="nav-item">
                            <?php
        						if(isset($_SESSION["Selected"]) AND isset($_SESSION["DateSelected"]))
        						{
        							echo "<a class='nav-link' href='flight_details.php'>&nbsp;Flight Times&nbsp;</a>";
        						}
        						else
        						{
        							echo "<a class='nav-link' href='flight_times.php'>&nbsp;Flight Times&nbsp;</a>";
        						}
        					?>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link active" href="sale.php">&nbsp;Sale&nbsp;</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link" href="contact_us.php">&nbsp;Contact Us&nbsp;</a>
                        </li>
                        <li id = "last" class="nav-item" >
                            <?php
        					if(isset($_SESSION["account"]))
        					{
        						echo "<a class='nav-link' href='login_register.php'>&nbsp;My Account&nbsp;</a>";
        					}
        					else
        					{
        						echo "<a class='nav-link' href='login_register.php'>&nbsp;Register/Login&nbsp;</a>";
        					}
        					?>
                        </li>
                    </ul>
                </div>
            </nav>

            <div id = "middle">
                <?php
                if(isset($_SESSION["account"]))
                {
                    $user = $_SESSION["account"];
                }
                else
                {
                    $user = null;
                }
                $sql = "SELECT * FROM sale";
                $result = mysqli_query($con, $sql);
                if (mysqli_num_rows($result) > 0)
                {
                    while($row = mysqli_fetch_assoc($result))
                    {
                        $id = $row["ID"];
                        echo "<div id = 'flight'><br><div id = 'poster'><img src=".$row['sale_poster']." style= 'width:100%; height: 100%;'></div>";
                        echo "<div id = 'test'>";
                        $sql1 = "SELECT * FROM faves WHERE ID = '$id' AND User = '$user'";

                        $result1 = mysqli_query($con, $sql1);
                            if (mysqli_num_rows($result1) > 0)
                            {
                                echo "<a href= 'faves.php'><input id='button' type='submit' style='cursor: pointer;' value='Go to Faves'></a>";
                            }
                            else
                            {
                                echo "<button id='button' type='button' style='cursor: pointer;' value=".$id." onclick = 'return add(this)'>Add to Faves</button>";
                            }

                        echo "</div>";
                        echo "<div id = 'Title_name'>".$row["sale_title"]."</div>";
                        echo "<div id = 'description'>".$row['sale_details']."</div>";
                        echo "<div id = 'Date'><p>Date: <b>".$row['sale_date']."</b></div>";

                    }

                }

                ?>
            </div>
        </div>
		
		<br>
		<div id="footer">
			<p align = "left" id = "Darce">Darceair</p>
		</div>
    </div>


</body>


</html>