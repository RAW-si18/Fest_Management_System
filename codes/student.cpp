#include <iostream>
#include <string>
#include <vector>

class TeamMember {
public:
    std::string name;
    std::string role;
    std::string email;
    std::string phone;

    TeamMember(std::string n, std::string r, std::string e, std::string p)
        : name(n), role(r), email(e), phone(p) {}

    void displayDetails() {
        std::cout << "Name: " << name << "\n";
        std::cout << "Role: " << role << "\n";
        std::cout << "Email: " << email << "\n";
        std::cout << "Phone: " << phone << "\n";
        std::cout << "\n";
    }
};

class OrganizingTeam {
private:
    std::string instituteName;
    std::vector<TeamMember> members;

public:
    OrganizingTeam(std::string name) : instituteName(name) {}

    void addMember(TeamMember member) {
        members.push_back(member);
    }

    void displayTeamDetails() {
        std::cout << "Organizing Team Details for " << instituteName << ":\n";
        for (TeamMember member : members) {
            member.displayDetails();
        }
    }

    void addFacultyMember(TeamMember member) {
        member.role = member.role + " (Faculty)";
        members.push_back(member);
    }
};

int main() {
    OrganizingTeam iitmTeam("IIITM");
    OrganizingTeam iitbTeam("IIT Bombay");

    iitmTeam.addMember(TeamMember("John Doe", "President", "johndoe@iiitm.ac.in", "+91-1234567890"));
    iitmTeam.addMember(TeamMember("Jane Doe", "Vice President", "janedoe@iiitm.ac.in", "+91-9876543210"));
    iitmTeam.addMember(TeamMember("Alice Smith", "Secretary", "alicesmith@iiitm.ac.in", "+91-4567891230"));

    iitmTeam.addFacultyMember(TeamMember("Prof. A", "Faculty Coordinator", "profA@iiitm.ac.in", "+91-2345678901"));
    iitmTeam.addFacultyMember(TeamMember("Prof. B", "Faculty Advisor", "profB@iiitm.ac.in", "+91-3456789012"));

    iitbTeam.addMember(TeamMember("Rahul Sharma", "President", "rahulsharma@iitb.ac.in", "+91-9876543210"));
    iitbTeam.addMember(TeamMember("Kriti Singh", "Vice President", "kritis@iitb.ac.in", "+91-8765432109"));
    iitbTeam.addMember(TeamMember("Priya Patel", "Secretary", "priyap@iitb.ac.in", "+91-7654321098"));

    iitbTeam.addFacultyMember(TeamMember("Dr. X", "Faculty Coordinator", "drx@iitb.ac.in", "+91-6543210987"));
    iitbTeam.addFacultyMember(TeamMember("Dr. Y", "Faculty Advisor", "dry@iitb.ac.in", "+91-5432109876"));

    // Display team details
    iitmTeam.displayTeamDetails();
    iitbTeam.displayTeamDetails();

    return 0;
}
