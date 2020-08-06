<?php
$time = time();
$value = $_POST["value"];
$file = 'value.html';
$data =  $time."  -  value:  ".$value;
file_put_contents($file, $data);
?>
