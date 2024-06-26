// sponsor.h
#ifndef SPONSOR_H
#define SPONSOR_H
#pragma GCC system_header
#include <string>
#include <utility>
using namespace std;
class Sponsor {
private:
    int id; // assuming id needs to be initialized or set somewhere
    string name;
    string description;

public:
    Sponsor(string n, string desc);
    void display_sponsor_details();
    pair<int, string> return_sponsor() const;
    void edit_name();
    void edit_description();

private:
    void edit_str_member(string& member, const string& prompt);
};

Sponsor::Sponsor(string n, string desc) : name(move(n)), description(move(desc)), id(0) {
    // Assuming id needs to be initialized or set somewhere
}

void Sponsor::display_sponsor_details() {
    cout << "Sponsor ID:                        " << id << endl;
    cout << "Company Name:                      " << name << endl;
    cout << "Company Description:               " << description << endl;
}

pair<int, string> Sponsor::return_sponsor() const {
    return make_pair(id, name);
}

void Sponsor::edit_str_member(string& member, const string& prompt) {
    cout << prompt;
    cin.ignore();
    getline(cin, member);
}

void Sponsor::edit_name() {
    int temp = 0;
    string strc;
    do {
        if (temp == 1) {
            strc = "Name of the company is empty.";
        } else {
            strc = "Editing Name of the company";
        }
        edit_str_member(name, strc + "\nEnter Sponsorer's New Name: ");
        temp = 1;
    } while (name.empty());
}

void Sponsor::edit_description() {
    int temp = 0;
    string strc;
    do {
        if (temp == 1) {
            strc = "Description of the company is empty.";
        } else {
            strc = "Editing Description of the company";
        }
        edit_str_member(description, strc + "\nEnter New Description: ");
        temp = 1;
    } while (description.empty());
}


#endif
