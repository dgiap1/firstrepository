/**
 *  @author Derek Giap
 *  @date 09/10/2020
 *  @file h05.cpp
 */
#include <string>
using namespace std;

string STUDENT = "dgiap1";  // Add your Canvas login name

string toFrenchGender(const string& country)
{
    string prefix = "";
    string islands = "iles";
    int len = country.length();
    string lastTwo = country.substr(country.length() - 2);
    
    if (country.substr(0, 4) == "iles" || lastTwo == "es" || lastTwo == "is" || lastTwo == "os" || lastTwo == "as")
    {
        prefix = "les ";
    }

    string result = prefix + country;
    
    return result;  
}


/////////////// Optional Student Code /////////////////
int run()
{
    return 0;
}
