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
    //Input
    int timeHours;
    int timeMinutes;
    int durationHours;
    int durationMinutes;
    cout << "   Time: ";
    cin >> timeHours;
    cin.get(); // Discards the colon.
    cin >> timeMinutes;
    cout << "   Duration: ";
    cin >> durationHours;
    cin.get(); // discard next
    cin >> durationMinutes;

    //Processing
    int totalTime = timeHours * 60 + timeMinutes; // Time in integer units.
    int duration = durationHours * 60 + durationMinutes; // Duration to add and subtract.
    int after = totalTime + duration; // Time + Duration in integer units.
    int before = (totalTime + 1440) - duration; // Time - Duration in integer units.
    int afterHours = (((after / 60 % 12) + 11) % 12) + 1; // Hour Unit for "after"
    int afterMinutes = after % 60; // Minute Unit for "after"
    int beforeHours = (((before / 60 % 12) + 11) % 12) + 1; // Hour Unit for "before"
    int beforeMinutes = before % 60; // Minute Unit for "before"
    //Output
    cout << "\n";
    cout << setfill('0');
    cout << durationHours << ":" <<setw(2) << durationMinutes << " hours after, and before, "
         << timeHours << ":" << setw(2) << timeMinutes << " is ["
         << afterHours << ":" << setw(2) << afterMinutes << ", "
         << beforeHours << ":" << setw(2) << beforeMinutes << "]" << endl;

    return 0;
}