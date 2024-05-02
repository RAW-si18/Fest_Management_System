#ifndef EVENT_H
#define EVENT_H
#pragma GCC system_header
#include <bits/stdc++.h>
using namespace std;

class event
{
private:
    string name;              // name of the event
    string date;              // date of the event
    string time;              // time of the event
    string venue;             // venue of the event
    string description;       // description of the event
    string rules;             // rules of the event
    string registration_info; // info about registration
    string contact_info;      // info about contact details
    string entry_fees;        // entry fees for the event

protected:
public:
    event(string name1, string date1, string time1, string venue1, string description1, string rules1, string registration_info1, string contact_info1, string entry_fees1);

    bool same_name(string s);
    void edit_date(string s);
    void edit_time(string s);
    void edit_venue(string s);
    void edit_description(string s);
    void edit_rules(string s);
    void edit_registration_info(string s);
    void edit_contact_info(string s);
    void edit_entry_fees(string s);
    void display_name();
    void display_details();
};


event::event(string name1, string date1, string time1, string venue1, string description1, string rules1, string registration_info1, string contact_info1, string entry_fees1)
{
    name = name1;
    date = date1;
    time = time1;
    venue = venue1;
    description = description1;
    rules = rules1;
    registration_info = registration_info1;
    contact_info = contact_info1;
    entry_fees = entry_fees1;
}

bool event::same_name(string s)
{
    if (s == name)
        return true;
    return false;
}

void event::edit_date(string s)
{
    date = s;
}

void event::edit_time(string s)
{
    time = s;
}

void event::edit_venue(string s)
{
    venue = s;
}

void event::edit_description(string s)
{
    description = s;
}

void event::edit_rules(string s)
{
    rules = s;
}

void event::edit_registration_info(string s)
{
    registration_info = s;
}

void event::edit_contact_info(string s)
{
    contact_info = s;
}

void event::edit_entry_fees(string s)
{
    entry_fees = s;
}

void event::display_name()
{
    cout << name << endl;
}

void event::display_details()
{
    cout << "Event details are as follows:" << endl;
    cout << "Name:                       " << name << endl;
    cout << "Date:                       " << date << endl;
    cout << "Time:                       " << time << endl;
    cout << "Venue:                      " << venue << endl;
    cout << "Description:                " << description << endl;
    cout << "Rules:                      " << rules << endl;
    cout << "Registration Information:   " << registration_info << endl;
    cout << "Contact Information:        " << contact_info << endl;
    cout << "Entry Fees:                 " << entry_fees << endl;
}

#endif
