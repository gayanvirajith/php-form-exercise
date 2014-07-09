<?php 
#Include shared functions
include "./_functions.inc";
?>
<!DOCTYPE html>
<html lang="en">
	<head>
	<meta charset="UTF-8">
	<title>Days of the week</title>
	</head>
	<body>
		<h1>Quote of your day</h1>
		<?php if (isset($_POST['submit'])): ?>	
			<?php 
				$day = $_POST['day']; // Get post param `day` 
				echo renderDayQuote($day);
				echo renderRetryNotice();
			?>
		<?php else: ?>
			<?php echo renderRetryNotice(); ?>
		<?php endif; ?>
	</body>
</html>
