<?php
require_once("./login-info.php");
$con = new mysqli($hostname, $user_id, $password, $database);
if ($con->connect_error) {
    die($con->connect_error);
}

$email_id = $_POST['email_id'];
$password = $_POST['password'];
$sql = "SELECT * FROM employee WHERE email='$email_id' AND password=PASSWORD('$password')";

$result = $con->query($sql);

if ($result->num_rows > 0) {
    header("Location:dashboard.php");
} else {
    echo "Invalid email / password.";
}
