# Maths-Scrabble
Software version of Board game Maths scrabble. CS Project 2015
Year: 2015

Course: CS101

Group number: 407


Project Title: Mathematics Scrabble


DEVELOPERS:
Member1 Name: Naman Gupta

Member1 Roll Number: 140040057

Member2 Name: Debarnab Mitra

Member2 Roll Number: 140070037

Member3 Name: Aditya Pratap
Member3 Roll Number: 140040034
Member4 Name: Rhythm Jain

Member4 Roll Number: 140040054


YouTube Video Link: "https://youtu.be/dFLBImlgG7I"

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

"MATHEMATICS SCRABBLE"

Required Software:
Code::Blocks(Simplecpp)

Installation Instructions:

1	Open Internet Browser on your PC.
2	Goto: http://cse.iitb.ac.in/~ranade/simplecpp/
3	Download the "Full Version".
4	Install the software using the setup and help video (URL provided above).

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

RUNNING THE PROGRAM ON CODE::BLOCKS

1.	Open the Code::Blocks application.
2.	Once the application is running, Click on "Open an Existing Project".
3.	Select the "project file" from the folder.
4.	Once the project is loaded, Build and run the code.
5.	A terminal and a game window will open.
6.	Click on "Start" to Start the game.
7.	You can "Submit" after building your equation.
8.	Or there are options for "PASS" and "EXCHANGE" as well.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

ABOUT THE GAME

1	In this board game players are provided with a specific number of random tiles from a specified set of tiles.
2	The player is supposed to build up a valid Mathematical Equation and present in on board to gain score.
3	He can pass or exchange and pass at his will, if he thinks no possible equation can be set up.
4	Ultimately, when set of all tiles is exhausted, the player with maximum score wins.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

Documentation:
The documentation file has been provided in the "Report" folder.

1	Goto the Game folder.
2	Open "report"
3	Open the file to view the Software Project documentation.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

INSTRUCTIONS TO PLAY THE GAME:

•	On each turn, player must make or add to a valid and correct equation.
	example: '3+3=6'
•	Player can keep 7 tiles at a time as in normal Scrabble.
•	Player can add to an existing equation on one side or both sides in a single turn.
	example: you can add to both ends of '3+3=6' in a single turn to make '63+3=66'
•	You may only use one new '=' sign per turn. Also there can be only one equal sign in an equation.
•	Order of operation: The game will function on a “strict left-to-right evaluation".
	i.e. Operators are operated from left to right or top to bottom.
•	Redundant equations are valid
	example: '1-1+1-1=0=0+0'
•	Player can use only positive integers. However, the equation may involve fractions or negative integers at some point of time.
•	Player cannot use leading '+' signs or leading '0' in front of a number.
•	Player should not string together arbitrary symbols
•	example: '3+xx4==12' is NOT valid.
•	The game proceeds normally as long as player makes a valid equation in one of the directions, even when this causes an invalid equation to be produced at some other place. 

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

SCORING:

•	Basic scoring is the sum value of values of all tiles used.
•	double-tile(x2) and triple-tile(x3) multiply the value of the tile placed by 2 and 3 respectively.
•	The value and number of tiles are as follows:

	Tile	      Value	     Quantity
	‘0’		1		05
	‘1’		1		10
	‘2’		1		08
	‘3’		1		08
	‘4’		1		08
	‘5’		1		08
	‘6’		2		08
	‘7’		2		08
	‘8’		2		06
	‘9’		2		05
	‘+’		1		08
	‘-‘		2		06
	‘x’		3		07
	‘÷’  	 5		 08
	‘=’		0		16	
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

FILE DESCRIPTION:

MAIN PROGRAM:	"main.cpp"
HEADER FILES:	"tiles_struct.h"
		"tile_initialisation.h"
		"distribution_of_tiles.h"
		"exchange_and_pass.h"
		"rectangle_detection.h"
		"initialisation_board.h"
		"copy_array.h"
		"feed_array.h"
		"char_to_int.h"
		"build_number_x.h"
		"build_number_y.h"
		"score_board_value.h"
		"score_calc.h"
		"equation_validation.h"
		"equation_setup.h"
		"equation_identification.h"
		"final_permutation.h"
		"artificial_again.h"
		"ai_display.h"

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

FOR FEEDBACK AND SUGGESTIONS, PLEASE EMAIL TO namang.ind@gmail.com.
THANK YOU.
