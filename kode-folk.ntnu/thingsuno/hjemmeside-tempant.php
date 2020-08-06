<html>
	<head>
		<title>Temperatur, value og antall?</title> 
	</head>
	<body>
		<h1>Siste data fra The Things Uno</h1>
		<p> Siste status: <br>
			<?php 
				$lines = file('datalog_tempant.txt');	// Open datalog_tempant.txt and put it in an array variable
				$last_line = $lines[count($lines)-1];	// Access the last line of the $lines array
				$line_split = explode(" ", $last_line); // Split the string into time, temperature, value and count. 
				echo "Time: $line_split[0] Temperature: $line_split[1] Value: $line_split[2] Count: $line_split[3]";	// echo (a.k.a. print) the last line. This splits the last line in the datalog and prints the variables.
			?>
		</p>
	</body>
</html>