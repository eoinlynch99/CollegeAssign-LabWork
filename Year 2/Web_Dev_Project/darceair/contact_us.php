<!DOCTYPE HTML>

<?php
    session_start();
    include_once 'dbconnect.php';
?>

<html>

<head>
    <title>Darceair</title>

    <meta charset="UFT-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <link rel="stylesheet" href="./css/stackpath.bootstrapcdn.min.css" >
    <link id="sheet" rel="stylesheet" href="./css/Main.css">
    <link id="sheet" rel="stylesheet" href="./css/Contact_Us.css">
</head>

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
                            <a class="nav-link" href="sale.php">&nbsp;Sale&nbsp;</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link active" href="contact_us.php">&nbsp;Contact Us&nbsp;</a>
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
                <br>
                <img src="./images/barcelona.jpg" id = "place" />
                <img src="./images/capture.png" id = "capture" />
                <img src="./images/warsaw.jpg" id = "place2" />
                <div id = "details">
                    <br>
                    <p>At <font color="#00FFFF" size="5px">Darceair</font> we value nothing more than our customers. We guarantee complete satisfaction and comfort when you
                    travel with us. When it comes to service, our team are well prepared and trained to ensure your
                    experience with us is one that you will never forget. We pride ourselves on delivering a friendly service
                    to both our regular and new customers.</p>
                    <br><br>
                    <p>If you have any compliments or complaints please do not hesitate to get in touch.</p>
                    <br><br>
                    <a href="https://www.facebook.com/" target = "_blank"><img src="./images/facebook.png" id = "social"></a>
                    <a href="https://www.instagram.com/" target = "_blank"><img src="./images/insta.png" id = "social"></a>
                    <a href="https://twitter.com/" target = "_blank"><img src="./images/twitter.png" id = "social"></a>
                </div>
                <br><br><br>
                <h2 id = "o_title">Helpdesk Opening Hours</h2>
                <br>
                <div id = "opening">
                    <p><b>Monday - Friday</b> .............. 8am - 10.30pm
                   <br><br><b>Saturday</b> ................... 10am - 10pm
                   <br><br><b>Sunday</b> .............................. 10am - 5pm</p>
                </div>
                <br><br><br>

                <h2 id = "o_title">Location</h2>
                <br>
				<div id ="location">
                    <iframe src="https://maps.google.com/maps?q=dundrum%20town%20centre&t=&z=15&ie=UTF8&iwloc=&output=embed" width="600" height="450" frameborder="0" style="border:0" allowfullscreen></iframe>
                </div>
                <br><br>
            </div>

        </div>
		<br>
		<div id="footer">
			<p align = "left" id = "Darce">Darceair</p>
		</div>

    </div>

        <script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo"
            crossorigin="anonymous"></script>
        <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.3/umd/popper.min.js" integrity="sha384-ZMP7rVo3mIykV+2+9J3UJ46jBk0WLaUAdn689aCwoqbBJiSnjAK/l8WvCWPIPm49"
            crossorigin="anonymous"></script>
        <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.1.1/js/bootstrap.min.js" integrity="sha384-smHYKdLADwkXOn1EmN1qk/HfnUcbVRZyYmZ4qpPea6sjB/pTJ0euyQp0Mk8ck+5T"
            crossorigin="anonymous"></script>
</body>


</html>