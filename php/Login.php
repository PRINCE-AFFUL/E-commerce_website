<?php

$email=$_POST['email'];
$pass_word=$_POST['pass_word'];


$server="localhost";
$password="";
$tablename="root";
$dbname="commerce";

$dbcon=mysqli_connect($server,$tablename,$password,$dbname);
$sql="SELECT `id`, `name`, `email`, `pass_word`, `number` FROM `registration` WHERE `name`='$email' AND `pass_word`='$pass_word' ";

$query=mysqli_query($dbcon,$sql);



if ($query){
echo " <script>
  alert('You have successfully login')
</script>";
header("location:New_home.html");
}else{
    echo "You have an error in your credentials";
}


?>