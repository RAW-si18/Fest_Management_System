#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class MyClass {
private:
    string data;
    int num;
    float high;

public:
    MyClass(const string& data, int num, float high) : data(data), num(num), high(high) {}

    string displayData() const {
        return data;
    }

    int displayNum() const {
        return num;
    }

    float displayHigh() const {
        return high;
    }

    friend void saveToFile(const MyClass& obj);
    friend MyClass& loadFromFile(ifstream& file, MyClass& obj);
    friend vector<MyClass> loadAllFromFile(const string& filename); // New friend function
};

void saveToFile(const MyClass& obj) {
    const string& filename = "objects.txt";
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << obj.data << " " << obj.num << " " << obj.high << '\n';
        file.close();
        cout << "Object saved to file." << endl;
    } else {
        cerr << "Unable to open file." << endl;
    }
}

MyClass& loadFromFile(ifstream& file, MyClass& obj) {
    string objData;
    getline(file, objData);
    istringstream iss(objData);
    if (iss >> obj.data >> obj.num >> obj.high) {
        return obj;
    } else {
        obj = MyClass("", 0, 0);
        return obj;
    }
}

vector<MyClass> loadAllFromFile(const string& filename) {
    vector<MyClass> loadedObjects;
    ifstream inFile(filename);
    if (inFile.is_open()) {
        MyClass obj;
        while (loadFromFile(inFile, obj)) {
            loadedObjects.push_back(obj);
        }
        inFile.close();
    } else {
        cerr << "Unable to open file." << endl;
    }
    return loadedObjects;
}

int main() {
    MyClass obj1("Object 1 data", 10, 3.5);
    MyClass obj2("Object 2 data", 20, 4.5);
    MyClass obj3("Object 3 data", 30, 5.5);

    // Save objects to a file using friend function
    saveToFile(obj1);
    saveToFile(obj2);
    saveToFile(obj3);

    // Load all objects from the file using the new friend function
    vector<MyClass> loadedObjects = loadAllFromFile("objects.txt");
    cout << loadedObjects.size() << endl;

    // Print the loaded objects
    cout << "Objects loaded from file:" << endl;
    for (const auto& obj : loadedObjects) {
        cout << "Data: " << obj.displayData() << ", Num: " << obj.displayNum() << ", High: " << obj.displayHigh() << endl;
    }

    return 0;
}