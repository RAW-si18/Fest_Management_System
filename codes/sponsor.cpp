#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Sponsor
{
public:
    // Constructor
    Sponsor(const string &companyName, const string &contact, const string &logo, const string &description)
        : CompanyName(companyName), contactInfo(contact), logoImagePath(logo), description(description) {}

    // Public methods for company interaction
    void updateContactInfo(const string &newContact) { contactInfo = newContact; }
    void updateLogoImagePath(const string &newLogo) { logoImagePath = newLogo; }
    void expressInterest(const string &event) { interestedEvents.push_back(event); }

    // Display functions
    void displayCompanyDetails() const
    {
        cout << "Company Name: " << CompanyName << endl;
        cout << "Contact Information: " << contactInfo << endl;
        cout << "Logo Image Path: " << logoImagePath << endl;
        cout << "Company Description: " << description << endl;
    }

    void displayOrganizerDetails() const
    {
        cout << "Sponsor ID: 4464" << sponsorID << endl;
        cout << "Status: Confirmed" << status << endl;
        cout << "Title Sponsor: " << (title_sponsor ? "Yes" : "No") << endl;
        cout << "Sponsorship Level: Gold" << sponsorshipLevel << endl;
        cout << "Category: Media-Partner" << category << endl;
    }

    void displayInterest() const
    {
        cout << "Events of Interest:" << endl;
        for (const auto &event : interestedEvents)
        {
            cout << "- " << event << endl;
        }
    }

protected:
    // Attributes managed by organizers
    string status;           // Status of sponsorship (e.g., confirmed, pending)
    string sponsorID;        // Unique sponsor identifier
    bool title_sponsor;      // Whether the sponsor is a title sponsor or not
    string sponsorshipLevel; // Level of sponsorship (e.g., platinum, gold, silver)
    string category;
    // Other protected attributes as needed

private:
    // Attributes directly editable by the company
    string CompanyName;
    string contactInfo;
    string logoImagePath;
    string description;
    vector<string> interestedEvents;
};

int main()
{
    char addMoreCompanies;
    do
    {
        // Initialize variables for sponsor details
        string companyName, contact, logo, d;
        vector<string> events = {"A", "B", "C"}; // include the name of different events

        // Input company name
        cout << "Enter Company Name: ";
        getline(cin, companyName);

        // Input contact information
        cout << "Enter Contact Information: ";
        getline(cin, contact);

        // Input logo image path
        cout << "Enter Logo Image Path: ";
        getline(cin, logo);
        cout << "Enter company Description: ";
        getline(cin, d);

        // Create sponsor object
        Sponsor sponsor(companyName, contact, logo, d);

        // Allow the company to express interest in certain events
        cout << "\nEnter the events the company is interested in:" << endl;
        for (const auto &event : events)
        {
            string response;
            cout << "Are you interested in '" << event << "'? (Y/N): ";
            getline(cin, response);
            if (response == "Y" || response == "y")
            {
                sponsor.expressInterest(event);
            }
        }

        // Display company details
        cout << "\nCompany Details:" << endl;
        sponsor.displayCompanyDetails();

        // Display events of interest
        sponsor.displayInterest();
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
