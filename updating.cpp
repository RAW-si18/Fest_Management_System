#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

void updateFile(const string& filename, string oldValue, string newValue) {
    ifstream inFile(filename);
    ofstream outFile("temp.txt");

    if (!inFile.is_open() || !outFile.is_open()) {
        cout << "Error opening files!" << endl;
        return;
    }

    string line;
    while (getline(inFile, line)) {
        stringstream ss(line);
        string value;
        vector<string> values;
        while (ss >> value) {
            values.push_back(value);
        }

        for (size_t i = 0; i < values.size(); i++) {
            if (values[i] == oldValue) {
                values[i] = newValue;
            }
        }

        for (size_t i = 0; i < values.size(); i++) {
            outFile << values[i];
            if (i != values.size() - 1) {
                outFile << " ";
            }
        }
        outFile << endl;
    }

    inFile.close();
    outFile.close();

    remove(filename.c_str());
    rename("temp.txt", filename.c_str());
}

int main() {
    string filename = "s.txt";
    string oldValue = "Marks_of_OOPS";;
    string newValue = "vhgcyj";

    // Update file
    updateFile(filename, oldValue, newValue);

    cout << "File updated successfully." << endl;

    return 0;
}
