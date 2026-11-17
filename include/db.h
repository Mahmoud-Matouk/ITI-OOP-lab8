#ifndef DB_H
#define DB_H
#include <iostream>
using namespace std;

class DBConnection {
private:
    DBConnection() {
        cout << "init connection.\n";
    }

    ~DBConnection() {
        cout << "fin connection.\n";
    }

public:
    DBConnection(const DBConnection&);
    DBConnection& operator=(const DBConnection&);

    static DBConnection& getInstance() {
        static DBConnection instance;
        return instance;
    }
};

#endif