<!DOCTYPE html>
<html>
	<head>
		<title>Sum of three consecutive numbers</title>
	</head>
	<body>
		<?php


		function sumNum($start, $end){
			$sum = 0;
			for ($i = $start; $i <= $end; $i++) {
				$sum += $i;
			}
			return $sum;
		}
		$start = 1;
		$end = 3;


		echo "The sum of 3 consecutive numbers from " . $start . " to " . $end . " is " . sumNum($start, $end);
		?>
	</body>
</html>