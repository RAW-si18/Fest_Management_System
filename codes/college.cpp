#include <iostream>
#include <string>
using namespace std;

class college
{
private:
    string category;    // engineering, medical, commerce etc.
    string address;     // Address of college
    int establish_yr;   // Established in year yyyy
    string description; // other info about college

protected:
    string name; // Name of college
    
public:
    void about()
    {
        cout << endl
             << "Name: " << name << endl
             << "Address: " << address << endl
             << "Category: " << category << endl
             << "Established in " << establish_yr << endl
             << "Description:" << endl
             << "\t" << description << endl;
    }
};