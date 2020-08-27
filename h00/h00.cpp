/**
 *  @author Derek Giap
 *  @date 08/25/2020
 *  @file h00.cpp
 */
#include <iostream>
#include <string>
using namespace std;

string STUDENT = "dgiap1";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // Input: weight of a box of cereal in ounces
    // Output: weight of box in metric tons, boxes per ton.
    // Given: metric ton is 35,273.92 ounces.
    // Calculation: weight in tons->weight divided by metric tons per ounce
    // Calculation: boxes-> 1 divided by weight in tons.
    // Write your code here

    cout << STUDENT << "-" << ASSIGNMENT << ": ";
    cout << "Cereal Box Calculator" << endl;
    cout << string(50, '-') << endl;
    
    // Input
    cout << "Enter ounces per box of cereal: "; // prompt
    double ouncesPerBox;                       // store the input
    cin >> ouncesPerBox;                       //read the input

    //Processing section
    const double OUNCES_PER_TON = 35273.92;
    double weightInTons = ouncesPerBox / OUNCES_PER_TON;
    double boxesPerTon = 1.0 / weightInTons;
    
    //Output section
    cout << "Weight in metric tons, boxes per ton: ["
        << weightInTons << ", " << boxesPerTon << "]" << endl;

    return 0;

}

