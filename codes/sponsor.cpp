#include <iostream>
#include <string>

using namespace std;

class Sponsor {
public:
    // Constructor
    Sponsor(const string &companyName, const string &contact, const string &description)
        : CompanyName(companyName), contactInfo(contact), description(description) {
        sponsorID = nextSponsorID++;
    }

    // Public methods for company interaction
    void updateContactInfo(const string &newContact) { contactInfo = newContact; }

    // Display functions
    void displayCompanyDetails() const {
        cout << "Company Name: " << CompanyName << endl;
        cout << "Contact Information: " << contactInfo << endl;
        cout << "Company Description: " << description << endl;
    }

    void displayOrganizerDetails() const {
        cout << "Sponsor ID: " << sponsorID << endl;
        cout << "Title Sponsor: " << (title_sponsor ? "Yes" : "No") << endl;
        cout << "Category: Media-Partner" << category << endl;
    }

protected:
    // Attributes managed by organizers
    bool title_sponsor; // Whether the sponsor is a title sponsor or not
    string category;     // Other protected attributes as needed

private:
    // Attributes directly editable by the company
    string CompanyName;
    string contactInfo;
    string description;
    int sponsorID;

    static int nextSponsorID; // Static variable to generate sponsor IDs
};

// Initialize static variable
int Sponsor::nextSponsorID = 100;

int main() {
    char addMoreCompanies;
    do {
        // Initialize variables for sponsor details
        string companyName, contact, d;

        // Input company name
        cout << "Enter Company Name: ";
        getline(cin, companyName);

        // Input contact information
        cout << "Enter Contact Information: ";
        getline(cin, contact);
        
        // Input company description
        cout << "Enter company Description: ";
        getline(cin, d);

        // Create sponsor object
        Sponsor sponsor(companyName, contact, d);

        // Display company details
        cout << "\nCompany Details:" << endl;
        sponsor.displayCompanyDetails();

        // Display organizer details
        cout << "\nOrganizer Details:" << endl;
        sponsor.displayOrganizerDetails();

        // Prompt to add another company
        cout << "\nDo you want to add another company? (Y/N): ";
        cin >> addMoreCompanies;
        cin.ignore(); // Ignore newline character from previous input
    } while (addMoreCompanies == 'Y' || addMoreCompanies == 'y');

    return 0;
}
