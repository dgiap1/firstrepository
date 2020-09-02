/**
 *  @author Derek Giap
 *  @date 09/02/2020
 *  @file h03.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
using stringIn = const string&;

string STUDENT = "dgiap1"; // Add your Canvas login name
extern string ASSIGNMENT;

// Function Prototypes
void printTitle();
string getInput();
double letterToPoints(stringIn letterGrade);
void printReport(double points);

// Constants
const double INVALID_COMBINATION = -1.0;
const double INVALID_INPUT = -2.0;

/**
 * Calculates the grade points for a letter grade.
 * @return 0 for success.
 */

int run()
{
	// Don't change anything inside this function
/**	printTitle();
	string letterGrade = getInput();
	double points = letterToPoints(letterGrade);
	printReport(points);
*/

	// 2. Input section
	cout << "Enter your letter grade: ";
	string gradeIn;
	getline(cin, gradeIn);

	// 3. Processing section
	double gradePoints = -1; // error condition if -1

	if (gradeIn == "A") gradePoints = 4.0;
	else if (gradeIn == "A-") gradePoints = 3.7;
	else if (gradeIn == "B+") gradePoints = 3.3;
	else if (gradeIn == "B") gradePoints = 3.0;
	else if (gradeIn == "B-") gradePoints = 2.7;
	else if (gradeIn == "C+") gradePoints = 2.3;
	else if (gradeIn == "C") gradePoints = 2.0;
	else if (gradeIn == "C-") gradePoints = 1.7;
	else if (gradeIn == "D+") gradePoints = 1.3;
	else if (gradeIn == "D") gradePoints = 1.0;
	else if (gradeIn == "D-") gradePoints = 0.7;
	else if (gradeIn == "F") gradePoints = 0.0;

	// 4. Output section
	cout << fixed << showpoint << setprecision(1);
	if (gradePoints >= 0)
	{
		cout << "Grade value is [" << gradePoints << "]" << endl;
	}
	else
	{
		string errorMessage;
		if (gradeIn == "A+" || gradeIn == "F+" || gradeIn == "F-")
		{
			errorMessage = "Invalid combination";
		}
		else
		{
			errorMessage = "Invalid input";
		}
		cout << "Grade value is [" << errorMessage << "]" << endl;
	}

    return 0;
}

// Implement your functions here