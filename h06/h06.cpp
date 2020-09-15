/**
 *  @author Derek Giap
 *  @date 09/14/2020
 *  @file h06.cpp
 */
#include <string>
#include <cctype>
using namespace std;

string STUDENT = "dgiap1";  // Add your Canvas login name

// Add your function here
int sumNums(const string& str)
{
	int sum = 0;
	int num = 0;
	string bigNumber = "";
	for (char ch: str)
	{
		if (isdigit(ch))
		{
			bigNumber += ch;
		}
		else
		{
			sum += atoi(bigNumber.c_str());
			bigNumber = "";
		}
	}
	return sum;
}



/////////////// Optional Student Code /////////////////
#include <iostream>
int run()
{
	// Add any code you like here
	// cout << R"(sumNums("abc123xyz")->123? )" << sumNums("abc123xyz") << endl;
	// cout << R"(sumNums("aa11b33")->44? )" << sumNums("aa11b33") << endl;
	// cout << R"(sumNums("7 11")->18? )" << sumNums("7 11") << endl;

    return 0;
}


