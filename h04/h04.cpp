/**
 *  @author Derek Giap
 *  @date 09/10/2020
 *  @file h04.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "dgiap1";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * Describe the purpose of your program here.
 * @return 0 for success.
 */

string getStatus(double gpa, int credits, int honorsCredits)
{
	string status = "";
	if (gpa >= 2.0 && credits >= 180)
	{
		if (honorsCredits >= 15)
		{
			if (gpa >= 3.6 && gpa < 3.8)
			{
				status = "magna cum laude";
			}
			else if (gpa >= 3.8)
			{
				status = "summa cum laude";
			}
			else
			{
				status = "graduating";
			}
		}
		else
		{
			if (gpa >= 3.6 && gpa < 3.8)
			{
				status = "cum laude";
			}
			else if (gpa >= 3.8)
			{
				status = "magna cum laude";
			}
			else
			{
				status = "graduating";
			}
		}
	}
	else
	{
		status = "not graduating";
	}
	return status;
}

int run()
{
	// DON'T CHANGE ANYTHING IN THIS FUNCTION
    cout << STUDENT << "-" << ASSIGNMENT << "-Graduation Calculator" << endl;
	cout << "-----------------------------------------" << endl;

	cout << "Enter gpa, total credits and honors credits: ";
	double gpa;
	int credits, honorsCredits;
	cin >> gpa >> credits >> honorsCredits;

	// You will write this function
	string result = getStatus(gpa, credits, honorsCredits);

	cout << "Result is [\"" << result << "\"]" << endl;

    return 0;
}