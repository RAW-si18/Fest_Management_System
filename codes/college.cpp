#include <bits/stdc++.h>
#include "../header_files/check_condition.h"
#include "../header_files/college.h"
using namespace std;

void college::display()
{
    cout << "Name:                            " << name << endl
         << "Address:                         " << address << endl;
}

void college::descr()
{
    cout << "Category:                         " << (category.empty() ? "Not Specified" : category) << endl
         << "Established in                    " << establish_yr << endl
         << "Description:" << endl;
    if (!description.empty())
    {
        cout << "    " << description << endl;
    }
    else
    {
        cout << "\tNot Specified" << endl;
    }
}

void college::edit_str_member(string &member, const string prompt)
{
    cout << prompt;
    cin.ignore();
    getline(cin, member);
}

void college::edit_name()
{
    int temp = 0;
    string strc;
    do
    {
        if (temp == 1)
        {
            strc = "Name of the college is empty.";
        }
        else
        {
            strc = "Editing Name of the college";
        }
        edit_str_member(name, strc + "\nEnter New Name: ");
        temp = 1;
    } while (name.empty());
}

void college::edit_description()
{
    int temp = 0;
    string strc;
    do
    {
        if (temp == 1)
        {
            strc = "Description of the college is empty.";
        }
        else
        {
            strc = "Editing Description of the college";
        }
        edit_str_member(description, strc + "\nEnter New Description: ");
        temp = 1;
    } while (description.empty());
}

void college::edit_category()
{
    int temp = 0;
    string strc;
    do
    {
        if (temp == 1)
        {
            strc = "Category of the college is empty.";
        }
        else
        {
            strc = "Editing Category of the college";
        }
        edit_str_member(category, strc + "\nEnter New Category: ");
        temp = 1;
    } while (category.empty());
}

void college::edit_address()
{
    int temp = 0;
    string strc;
    do
    {
        if (temp == 1)
        {
            strc = "Address of the college is empty.";
        }
        else
        {
            strc = "Editing Address of the college";
        }
        edit_str_member(address, strc + "\nEnter New Address: ");
        temp = 1;
    } while (address.empty());
}

void college::edit_est_year()
{
    cout << "Editing Establishment Year of College\nEnter New Est. Year (yyyy): ";
    // cin >> establish_yr;

    checker myChecker; // Create an instance of the checker class
    while (true)
    {
        cin >> myChecker.s;
        if (!myChecker.checkInt(myChecker.s)) // Use the checkInt function through the instance of the checker class
        {
            cout << "ENTERED INPUT IS NOT CORRECT!!" << endl
                 << "PLEASE RE-ENTER A VALID INPUT " << endl;
        }
        else
        {
            establish_yr = stoi(myChecker.s);
            break;
        }
    }
}

string college::college_name()
{
    return name;
}
