//IS 167 Final Exam
/*
Below is a C++ program that has had some key words removed.  For example:

[1.___] <iomanip>

on the first line is missing a keyword where [1.___] is placed.  [1.___] needs to 
be replaced with the missing keyword in order for the program to function properly.

Here is a matrix of possible keywords for [1.___] and the other missing syntax
in the program below:

A				B				C				D	
double			cout			int				bool
include			<<				cin				while
for				if				return			=
switch			<				main			>
else			do				using			namespace

Notice that missing syntax can include function names, data types, operators, 
iteration types, etc.  Make sure you consider the context of each line of code 
before deciding on an answer.  If you think more than one will work, choose 
the BEST answer.

If you like, you may test the program by using any of the following online C++ 
compilers, and plugging in the keyswords you choose:

https://www.onlinegdb.com/online_c++_compiler
https://www.programiz.com/cpp-programming/online-compiler/
https://www.online-cpp.com/online_c++_compiler
https://www.tutorialspoint.com/compile_cpp_online.php

DO NOT modify the program in anyway.  The program must be kept exactly as is, with
the exception that you can replace the any missing number [#.___] with one of the 
keywords from above.  The answer to that number in the quiz IS the column header:
A, B, C, or D.  Those answers get entered into the quiz in Canvas.  In the event 
more than one keyword would be valid code, the correct answer is the BEST answer 
for that scenario.
Good luck!
*/

// This program awards a score to a talent show contestant by
// averaging the three middle scores assigned by five judges.
[1.___] <iostream>
#include <iomanip>
using [2.___] std;

// Function prototypes
double getJudgeData();	
double calcScore(double, double, double, double, double);			
double findLowest(double, double, double, double, double);			
double findHighest(double, double, double, double, double);		
int [3.___]()
{
	double score1, score2, score3, score4, score5,   // 5 judge's scores
          finalScore;
   
	// Inform the user what the program does
	cout << "After you enter 5 judge scores for this contestant, \n"
        [4.___] "this program will drop the highest and lowest score \n"
        << "and then average the remaining three scores.\n\n";
	
	// Call getJudgeData for each score to be input
	score1 = getJudgeData();
	score2 = getJudgeData();
	score3 [5.___] getJudgeData();
	score4 = getJudgeData();
	score5 = getJudgeData();
 
	// Call calcScore to calculate the contestant's final score
	finalScore = calcScore(score1, score2, score3, score4, score5);
	
	cout << fixed << showpoint << setprecision(2);
	cout << "\nThis contestant's talent score is " << finalScore << endl;

	[6.___] 0;
}// end of main function

/******************************************
 *             getJudgeData               *
 * This function accepts, validates, and  *
 * returns a score entered by the user    *
 ******************************************/
[7.___] getJudgeData()
{
   double score;
     
	cout << "Enter score between 0 and 10: ";
	cin  >> score;
	[8.___] (score < 0 || score > 10) 
	{
		[9.___] << "Score must be in the range 0 - 10. "
           << "Please re-enter score: ";
		[10.___]  >> score;
	}
   return score;
   
}// end of function getJudgeData

/********************************************************
 *                       calcScore                      *
 * This function finds and returns the average of the   *
 * scores passed to it as arguments, after dropping the *
 * lowest and highest score.                            *  
 ********************************************************/
double calcScore(double s1, double s2, double s3, double s4, double s5)
{
	double middleSum,         // Sum of the middle three scores
          lowScore,          // Low score that will be dropped
          hiScore,           // High score that will be dropped
          finalScore;

	// Call function findLowest, passing it the 5 scores.  When the
	// lowest score is returned, store it in the variable lowScore.
	lowScore = findLowest(s1, s2, s3, s4, s5);

	// Call function findHighest, passing it the 5 scores.  When the
	// highest score is returned, store it in the variable hiScore.
	hiScore = findHighest(s1, s2, s3, s4, s5);

	// Calculate the sum and average of the middle 3 scores
	middleSum = s1 + s2 + s3 + s4 + s5 - lowScore - hiScore;
	finalScore = middleSum / 3.0;        // prevent an integer divide
	
	return finalScore;
}// end of function calcScore

/***************************************************************
 *                          findLowest                         *
 * This function determines which of the 5 scores passed to it * 
 * as arguments is the lowest, and returns this score.         *
 **************************************************************/
double findLowest(double s1, double s2, double s3, double s4, double s5)
{
	double lowest = s1;

	if (s2 < lowest) 
		lowest = s2;
	if (s3 < lowest)
		lowest = s3;
	if (s4 < lowest)
		lowest = s4;
	if (s5 < lowest)
		lowest = s5;
	return lowest;
}// end of function findLowest

/***************************************************************
 *                          findHighest                        *
 * This function determines which of the 5 scores passed to it *
 * as arguments is the highest, and returns this score.        *
 ***************************************************************/
double findHighest (double s1, double s2, double s3, double s4, double s5)
{
	double highest = s1;

	if (s2 > highest)
		highest = s2;
	if (s3 > highest)
		highest = s3;
	if (s4 > highest)
		highest = s4;
	if (s5 > highest)
		highest = s5;
	return highest;
}// end of function findHighest

/* SAMPLE RUN RESULTS

After you enter 5 judge scores for this contestant,
this program will drop the highest and lowest score
and then average the remaining three scores.

Enter score between 0 and 10: 8.8
Enter score between 0 and 10: 9.2
Enter score between 0 and 10: 7.9
Enter score between 0 and 10: 9.4
Enter score between 0 and 10: 8.9

This contestant's talent score is 8.97
*/
