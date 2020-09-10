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
    string result = prefix + country;
    
    if (last == "es" || last == "is" || last == "os" || last == "as")
    {
        prefix = "les ";
    }
    
    return result;  
}


/////////////// Optional Student Code /////////////////
int run()
{
    return 0;
}
