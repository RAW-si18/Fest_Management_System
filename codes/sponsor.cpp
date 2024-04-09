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

    void edit_str_member(string &member, const string &prompt)
    {
        cout << prompt;
        cin.ignore();
        getline(cin, member);
    }

    void edit_name()
    {
        int temp = 0;
        string strc;
        do
        {
            if (temp == 1)
            {
                strc = "Name of the company is empty.";
            }
            else
            {
                strc = "Editing Name of the company";
            }
            edit_str_member(name, strc + "\nEnter Sponsorer's New Name: ");
            temp = 1;
        } while (name.empty());
    }

    void edit_description()
    {
        int temp = 0;
        string strc;
        do
        {
            if (temp == 1)
            {
                strc = "Description of the company is empty.";
            }
            else
            {
                strc = "Editing Description of the company";
            }
            edit_str_member(description, strc + "\nEnter New Description: ");
            temp = 1;
        } while (description.empty());
    }
};

// Initialize static variable
int Sponsor::next_id = 1;
