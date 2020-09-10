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
    string last = country.substr(country.length() - 2);
    string lastChar = country.substr(country.length() - 1);

    if (country.substr(0, 4) == "iles" || last == "es" || last == "is" || last == "os" || last == "as")
    {
        prefix = "les ";
    }
    else if (lastChar == "e" || lastChar == "o")
    {
        prefix = "la ";
    }
    else
    {
        prefix = "le ";
    }

    string result = prefix + country;

    return result;
}


/////////////// Optional Student Code /////////////////
int run()
{
    return 0;
}
