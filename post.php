<?php
$time = time();
$tempC = $_POST["temp"];
$file = 'temp.html';
$data = $time."  -  ".$tempC;
file_put_contents($file, $data);
?>
