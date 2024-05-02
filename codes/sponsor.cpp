#include <bits/stdc++.h>
#include "../header_files/sponsor.h"
using namespace std;

Sponsor::Sponsor(string n, string desc)
{
    name = n;
    description = desc;
}

void Sponsor::display_sponsor_details()
{
    cout << "Sponsor ID:                        " << id << endl;
    cout << "Company Name:                      " << name << endl;
    cout << "Company Description:               " << description << endl;
}

pair<int, string> Sponsor::return_sponsor() const
{
    return make_pair(id, name);
}

void Sponsor::edit_str_member(string &member, const string &prompt)
{
    cout << prompt;
    cin.ignore();
    getline(cin, member);
}

void Sponsor::edit_name()
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

void Sponsor::edit_description()
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
