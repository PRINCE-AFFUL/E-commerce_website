<?php
$name=$_POST['name'];
$email=$_POST['email'];
$pass_word=$_POST['pass_word'];
$number=$_POST['number'];

$server="localhost";
$password="";
$tablename="root";
$dbname="ecommerce";

$dbcon=mysqli_connect($server,$tablename,$password,$dbname);
$sql="INSERT INTO `registration`(`name`, `email`, `pass_word`, `number`) VALUES ('$name','$email','$pass_word','[$number')";

$query=mysqli_query($dbcon,$sql);

if ($query){
  echo "<script>alert('account has been created')</script>";
  header("location:Login.html");
}else{
  echo "not submitted";
}


?>
<!-- if ($query){
echo " <script>
  alert('Account has been created successfully')
</script>";
header("location:Login.html");
}else{
    echo "not submitted";
} -->