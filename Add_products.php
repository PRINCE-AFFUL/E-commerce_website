<?php 
$item_name=$_POST['item_name'];
$item_image=$_POST['item_image'];
$item_price=$_POST['item_price'];
$item_description=$_POST['item_description'];
$category=$_POST['category'];

$server="localhost";
$Admin_page="root";
$dbpassword="";
$dbname="e-commerce";


$con=mysqli_connect($server,$Admin_page,$dbpassword,$dbname);
$sql="INSERT INTO admin_page( `Item_name`, `Item_image`, `Description`, `Item_price`, `category`) VALUES ('[$item_name]','[$item_image]','[$item_pric]','[$item_description]','[$category]')";

$query=mysqli_query($con,$sql);
if ($query){
    echo "Submitted";
}else {
    echo "not submitted";
}
?>