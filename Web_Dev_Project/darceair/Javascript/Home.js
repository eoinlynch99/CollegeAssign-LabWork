    function next()
    {
        var image = document.getElementById('Jumbo')

        //If the css is creative, change it to the professional css.
        if(image.src.match("./images/airplane3.jpg"))
        {
            //changes the profile picture when using the creative css.
            image.src="./images/albufeira.jpg";
            document.getElementById("noStyle").href="sale.php";
            document.getElementById("Titles").innerHTML="Sale!";
            document.getElementById("Inner").innerHTML="- View newest deals and add them to Faves™.";
        }
        else if(image.src.match("./images/albufeira.jpg"))
        {
            //changes the profile picture when using the creative css.
            image.src="./images/clouds.jpg";
            document.getElementById("noStyle").href="flight_times.php";
            document.getElementById("Titles").innerHTML="Go Anywhere";
            document.getElementById("Inner").innerHTML="- Have a look at all of our destinations.";
        }
        else if(image.src.match("./images/clouds.jpg"))
        {
            //changes the profile picture when using the creative css.
            image.src="./images/airplane3.jpg";
            document.getElementById("noStyle").href="login_register.php";
            document.getElementById("Titles").innerHTML="Welcome To Darceair";
            document.getElementById("Inner").innerHTML="- Login/SignUp here.";
        }
    }

    function previous()
    {
        var image = document.getElementById('Jumbo')

        //If the css is creative, change it to the professional css.
        if(image.src.match("./images/airplane3.jpg"))
        {
            //changes the profile picture when using the creative css.
            image.src="./images/clouds.jpg";
            document.getElementById("noStyle").href="flight_times.php";
            document.getElementById("Titles").innerHTML="Go Anywhere";
            document.getElementById("Inner").innerHTML="- Have a look at all of our destinations.";
        }
        else if(image.src.match("./images/clouds.jpg"))
        {
            //changes the profile picture when using the creative css.
            image.src="./images/albufeira.jpg";
            document.getElementById("noStyle").href="sale.php";
            document.getElementById("Titles").innerHTML="Sale!";
            document.getElementById("Inner").innerHTML="- View newest deals and add them to Faves™.";

        }
        else if(image.src.match("./images/albufeira.jpg"))
        {
            //changes the profile picture when using the creative css.
            image.src="./images/airplane3.jpg";
            document.getElementById("noStyle").href="login_register.php";
            document.getElementById("Titles").innerHTML="Welcome To Darceair";
            document.getElementById("Inner").innerHTML="- Login/SignUp here.";
        }
    }