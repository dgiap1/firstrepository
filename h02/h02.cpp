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
    const double SODA_CAN_WEIGHT = 350; // 350 grams in a can of soda.
    const double GRAMS_PER_POUND = 454; // 454 grams per pound.
    const double SWEETENER_PER_CAN = 0.35; // .35 of sweetener in a can of soda. Sweetener is 0.1 * 0.01 = 0.001. 0.001 * 350 = 0.35.
    int mouseWeight; // Weight of mouse.
    int lethalDoseMouse; // Dose to kill mouse.
    int desiredWeightPounds; // Desired dieter weight.
    
    //Input
    cout << "Weight of the mouse in grams: ";
    cin >> mouseWeight;
    cout << "Lethal dose for the mouse (in grams): ";
    cin >> lethalDoseMouse;
    cout << "Desired weight of the dieter (in pounds): ";
    cin >> desiredWeightPounds;

    //Processing
    double desiredWeightGrams = desiredWeightPounds * GRAMS_PER_POUND; // Convert pounds to grams.
    double lethalDoseDieter = lethalDoseMouse * (desiredWeightGrams / mouseWeight); // Desired weight divided by mouseWeight to see ratio of human to mouse. Multiply by lethal mouse dose to find lethal human dose.
    double lethalDoseDieterCans = lethalDoseDieter / SWEETENER_PER_CAN; // Dose to kill human divided by sweetener per can to see how many cans will kill him.

    //Output
    cout << "Lethal dose in grams, cans is [" << lethalDoseDieter << ", " << lethalDoseDieterCans << "]" << endl;

    return 0;
}
