/**
    @file h35.cpp
    @author Derek Giap
    @version Fall2020TTEVE
*/
#include <string>
#include <stdexcept>
#include <iomanip>
#include <sstream>
using namespace std;

#include "h35.h"

string STUDENT = "dgiap1"; // Add your Canvas/occ-email ID

// Add your implementation here
Worker::Worker(const string& name, double rate)
{
    this -> name = name;
    this -> rate = rate;
}
double Worker::getRate() const
{
    return rate;
}
string Worker::getName() const
{
    return name;
}

HourlyWorker::HourlyWorker(const string& NAME, double RATE):Worker(NAME, RATE) {}

string HourlyWorker::payInfo(int hours) const
{
    double pay = 0.0;
    if (hours <= 40)
    {
        pay = hours * getRate();
    }
    else
    {
        pay = hours * getRate() + (hours - 40) * getRate() / 2;
    }
    ostringstream os;
    os << getName() << "(Hourly, $ " << fixed << setprecision(2) << getRate() << ") worked " <<
    hours << " hours. Pay: $ " << fixed << setprecision(2) << pay;
    return os.str();
}

SalariedWorker::SalariedWorker(const string& NAME, double RATE):Worker(NAME, RATE) {}

string SalariedWorker::payInfo(int hours) const
{
    ostringstream os;
    os << getName() << "(Salaried, $ " << fixed << setprecision(2) << getRate() << ") worked " <<
    hours << " hours. Pay: $ " << fixed << setprecision(2) << 40 * getRate();
    return os.str();
}

/////////////// Student Tests ////////////////////////////
#include <iostream>
int run()
{
	cout << "Student testing" << endl;
	return 0;
}
