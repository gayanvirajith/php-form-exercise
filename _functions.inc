<?php

/***************************************************************************************
 * _functions.inc - SHARED FUNCTIONS
 *
 * This file contains various "render" functions that generate markups specific
 * to the exercise.
 *
 * What's Here:
 *
 * renderDayQuote($day) - Render a quote according to the day of the week.
 * renderDayQuoteSwitch($day) - Render a quote according to the day (Using switch stetment).
 * renderRetryNotice() - Render retry-notice message.
 *
 *
 */

/**
 * Render a quote according to the day.
 *
 * @return string Quote string
 */ 
function renderDayQuote($day) 
{
	if ($day == 'Monday') return "<p>Laugh on Monday, laugh for danger.</p>";
	else if ($day == 'Tuesday') return "<p>Laugh on Tuesday, kiss a stranger.</p>";
	else if ($day == 'Wednesday') return "<p>Laugh on Wednesday, laugh for a letter.</p>";
	else if ($day == 'Thursday') return "<p>Laugh on Thursday, something better.</p>";
	else if ($day == 'Friday') return "<p>Laugh on Friday, laugh for sorrow.</p>";
	else if ($day == 'Saturday') return "<p>Laugh on Saturday, joy tomorrow.</p>";
	else return "<p>Oops. No information for that day.</p>";
}

/**
 * Render a quote according to the day.
 * Similar method for renderDayQuote($day). 
 * But this time use switch statement to process the response.
 * @return string Quote string
 */ 
function renderDayQuoteSwitch($day) 
{

	// -----------------------------------------	
	// A variable used to store markup output.	
	// -----------------------------------------
	$out = '';

	switch($day) 
	{
		case 'Monday'
		$out = "<p>Laugh on Monday, laugh for danger.</p>";
		break;

		case 'Tuesday':
		$out = "<p>Laugh on Tuesday, kiss a stranger.</p>";
		break;

		case 'Wednesday':
		$out = "<p>Laugh on Wednesday, laugh for a letter.</p>";
		break;

		case 'Thursday':
		$out = "<p>Laugh on Thursday, something better.</p>";
		break;

		case 'Friday':
		$out = "<p>Laugh on Friday, laugh for sorrow.</p>";
		break;
		
		case 'Saturday':
		$out = "<p>Laugh on Saturday, joy tomorrow.</p>";
		break;

		default:
		$out = "<p>Oops. No information for that day.</p>";
		break;
	}
	
	return $out;
}

/**
 * Render retry-notice message 
 * 
 * @rerturn string - Message with anchor link.
 */
function renderRetryNotice() 
{
	return "<p>Please pick a day from <a href='./index.php'>here</a>.</p>";
}
