/**
 *  @author Derek Giap
 *  @date 08/31/2020
 *  @file h02.cpp
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
    // Add your implementation comments here

    const double SODA_CAN_WEIGHT = 350;
    const double GRAMS_PER_POUND = 454;
    const double SWEETENER = 0.001;
    const double SWEETENER_PER_CAN = 0.35;
    int mouseWeight;
    int lethalDoseMouse;
    int desiredWeightPounds;
    
    //Input
    cout << "Weight of the mouse in grams: ";
    cin >> mouseWeight;
    cout << "Lethal dose for the mouse (in grams): ";
    cin >> lethalDoseMouse;
    cout << "Desired weight of the dieter (in pounds): ";
    cin >> desiredWeightPounds;

    //Processing
    double desiredWeightGrams = desiredWeightPounds * GRAMS_PER_POUND;
    double lethalDoseDieter = lethalDoseMouse * (desiredWeightGrams / mouseWeight);
    double lethalDoseDieterCans = lethalDoseDieter / SWEETENER_PER_CAN;

    //Output
    cout << "Lethal dose in grams, cans is [" << lethalDoseDieter << ", " << lethalDoseDieterCans << "]" << endl;

    return 0;
}
