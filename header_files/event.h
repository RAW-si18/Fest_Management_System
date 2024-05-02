#ifndef EVENT_H
#define EVENT_H

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

#endif
