/**
 *  @author Derek Giap
 *  @date 08/31/2020
 *  @file h01.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "dgiap1";  // Add your Canvas login name
extern string ASSIGNMENT;


/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // 1. Title and introduction
    // - blank line
    // 2. Input section: prompt and input on same line
    // 3. Processing section - compute the results
    // - blank line
    // 4. Output section: test data inside brackets [ ]

    // Prompt and read the input
    cout << "   Time: ";
    int timeHours;
    cin >> timeHours;
    cin.get(); // discard the colon
    int timeMinutes;
    cin >> timeMinutes;

    cout << "   Duration: ";
    int durationHours;
    cin >> durationHours;
    cin.get(); // discard next
    int durationMinutes;
    cin >> durationMinutes;

    //Processing
    int sumTime = timeHours * 60 + timeMinutes;
    int duration = durationHours * 60 + durationMinutes;
    int after = sumTime + duration;
    int before = sumTime - duration;
    int afterHours = after / 60;
    int afterMinutes = after % 60;
    int beforeHours = before / 60;
    int beforeMinutes = before % 60;
    
    //Output
    cout << endl;
    cout << durationHours << ":" << durationMinutes;
    cout << afterHours << ":" << afterMinutes;
    

    return 0;
}
