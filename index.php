<!DOCTYPE html>
<html lang="en">
	<head>
	<meta charset="UTF-8">
	<title>Days of the week</title>
	</head>
	<body>
		<h1>Pick a day !</h1>
		<!-- Form -->
		<form action="./form-submit.php" method="POST">
			<p>
				Please enter a day of the week:<br/>
				<input type="text" name="day" autocomplete="off"/>

				<!-- Use can even use select field like follows: -->
				<!-- 
				 <select name="day">
				   <option value="Monday">Monday</option>
				   <option value="Tuesday">Tuesday</option>
				   <option value="Wednesday">Wednesday</option>
				   <option value="Thursday">Thursday</option>
				   <option value="Friday">Friday</option>
				   <option value="Saturday">Saturday</option>
				   <option value="Sunday">Sunday</option>
				</select>
				-->
			</p>
			<p>
				<input type="submit" name="submit" value="Go" />
			</p>
		</form>
	</body>
</html>
