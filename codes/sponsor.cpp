#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Sponsor
{
private:
    string name;
    string description;
    int id;
    static int next_id;

public:
    // Constructor
    Sponsor(const string &name, const string &description)
        : name(name), description(description)
    {
        id = next_id++;
    }

    // Display functions
    void display_company_details() const
    {
        cout << "Sponsor ID: " << id << endl;
        cout << "Company Name: " << name << endl;
        cout << "Company Description: " << description << endl;
    }

    // Method to return id and name
    pair<int, string> return_sponsor() const
    {
        return make_pair(id, name);
    }
};

// Initialize static variable
int Sponsor::next_id = 1;
