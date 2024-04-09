#include <iostream>
#include <string>
using namespace std;

class sponsor
{
private:
    string category;
    string description;

protected:
    string name;
    bool title_sponsor; // Sponsorship: Title Sponsor or Not

public:
    void about()
    {
        cout << "Company Name: " << name
             << "Category: " << category
             << (title_sponsor?" {TITLE SPONSOR} ":"")<<endl;
    }
    void descr()
    {
        cout << "Description: " << description << endl;
    }
};