#include<bits/stdc++.h>
using namespace std;
//Class to manage the members of the team including the faculty and students.
class Team_Member {

public :
    //Adding the name, role and contact details of the members.
    string name;
    string role;
    string email;
    string phone;


    Team_Member(string n, string r, string em, string ph) {
        name = n;
        role = r;
        email = em;
        phone = ph;
    }
    //Display the details added 
    void display_Details() const {
        std::cout << "Name: " << name << "\n";
        std::cout << "Role: " << role << "\n";
        std::cout << "Email: " << email << "\n";
        std::cout << "Phone: " << phone << "\n";
        std::cout << "\n";
    }
};
//Class to add all the members of a particular organizing institute using vector.
class Organizing_Team{
private :
// Institute Name and list of members.
    string institute_name;
    vector<Team_Member> members;
public:
    Organizing_Team(string name){
        institute_name = name;
    }
    //Adding Members and pushing in the list.
    void add_Member(const Team_Member& member) {
        members.push_back(member);
    }
    //Display the Details of each member.
    void display_Team_Details() const {
        std::cout << "Organizing Team Details for " << institute_name << ":\n";
        for (const auto& member : members) {
            member.display_Details();
        }
    }
    //Adding Faculty Member details and pushing in the list.
    void add_Faculty_Member(const Team_Member& member) {
        Team_Member faculty_Member = member;
        faculty_Member.role += " (Faculty)";
        members.push_back(faculty_Member);
    }
    //Editing the details depending on the choice.
   void edit_Member_Details(const std::string& name) {
        auto it = std::find_if(members.begin(), members.end(), [&name](const Team_Member& member) {
            return member.name == name;
        });

        if (it != members.end()) {
            int choice;
            std::cout << "Choose attribute to edit for " << name << ":\n";
            std::cout << "1. Role\n";
            std::cout << "2. Email\n";
            std::cout << "3. Phone\n";
            std::cout << "4. Cancel\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
                case 1: {
                    std::cout << "Enter new role: ";
                    std::cin.ignore(); // Ignore the newline character in the input buffer
                    std::getline(std::cin, it->role);
                    break;
                }
                case 2: {
                    std::cout << "Enter new email: ";
                    std::cin >> it->email;
                    break;
                }
                case 3: {
                    std::cout << "Enter new phone: ";
                    std::cin >> it->phone;
                    break;
                }
                default:
                    std::cout << "Editing cancelled.\n";
                    return;
            }
            std::cout << "Member details updated successfully.\n";
        } else {
            std::cout << "Member with name " << name << " not found.\n";
        }
    }
    //Editing the details of the Faculty Members as per the user's choice.
    void edit_Faculty_Details(const std::string& name) {
        auto it = std::find_if(members.begin(), members.end(), [&name](const Team_Member& member) {
            return member.name == name;
        });

        if (it != members.end()) {
            int choice;
            std::cout << "Choose attribute to edit for " << name << ":\n";
            std::cout << "\n1. Role\n";
            std::cout << "2. Email\n";
            std::cout << "3. Phone\n";
            std::cout << "4. Cancel\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
                case 1: {
                    std::cout << "Enter new role: ";
                    std::cin.ignore(); // Ignore the newline character in the input buffer
                    std::getline(std::cin, it->role);
                    break;
                }
                case 2: {
                    std::cout << "Enter new email: ";
                    std::cin >> it->email;
                    break;
                }
                case 3: {
                    std::cout << "Enter new phone: ";
                    std::cin >> it->phone;
                    break;
                }
                default:
                    std::cout << "Editing cancelled.\n";
                    return;
            }
            std::cout << "Member details updated successfully.\n";
        } else {
            std::cout << "Member with name " << name << " not found.\n";
        }
    }
};
