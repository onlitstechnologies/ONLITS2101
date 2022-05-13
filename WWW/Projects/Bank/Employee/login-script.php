<?php
require_once("./login-info.php");
$con = new mysqli($hostname, $user_id, $password, $database);
if($con->connect_error) {
    die($con->connect_error);
}

echo "Connected successfully";