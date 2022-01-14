<?php
$target_dir = "uploads/";
$target_file = $target_dir . basename($_FILES["fileToUpload"]["name"]);
$uploadOk = 1;
$imageFileType = strtolower(pathinfo($target_file,PATHINFO_EXTENSION));
// Check if image file is a actual image or fake image
if(isset($_POST["submit"])) {
    $check = getimagesize($_FILES["fileToUpload"]["tmp_name"]);
    if($check !== false) {
        echo "File uploaded as an " . $check["mime"] . ".";
        $uploadOk = 1;
    } else {
        echo "File not uploaded, not recognised as an image.";
        $uploadOk = 0;
    }
}
?>