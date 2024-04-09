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
    string name;        // Name of college

protected:

public:
    college(string cate, string ads, int est_yr, string descr, string n) : category(cate), address(ads), establish_yr(est_yr), description(descr), name(n){} // constructor
    void display()
    {
        cout << "Name: " << name << endl
             << "Address: " << address << endl;
    }
    void desc()
    {
        cout << "Category: " << category << endl
             << "Established in " << establish_yr << endl
             << "Description:" << endl
             << "\t" << description << endl;
    }
    void edit_desc()
    {
        cout<<"Editing Description of College: "<<endl;

    }
};