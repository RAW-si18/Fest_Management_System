#include <iostream>
#include "C:\sqlite\sqlite3.h"
using namespace std;

int main() {
    sqlite3* db;
    char* errorMessage = nullptr;
    
    int rc = sqlite3_open("example.db", &db);
    if (rc) {
        cerr << "Can't open database: " << sqlite3_errmsg(db) << endl;
        return 1;
    } else {
        cout << "Opened database successfully" << endl;
    }

    const char* sql = "CREATE TABLE COMPANY("
                      "ID INT PRIMARY KEY     NOT NULL,"
                      "NAME           TEXT    NOT NULL,"
                      "AGE            INT     NOT NULL,"
                      "ADDRESS        CHAR(50),"
                      "SALARY         REAL );";

    rc = sqlite3_exec(db, sql, nullptr, nullptr, &errorMessage);
    if (rc != SQLITE_OK) {
        cerr << "SQL error: " << errorMessage << endl;
        sqlite3_free(errorMessage);
    } else {
        cout << "Table created successfully" << endl;
    }

    sqlite3_close(db);
    return 0;
}
