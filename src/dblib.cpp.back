// dblib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "idbdriver.h"

using namespace stf;

class SQLIteDBDriver : public IDBDriver {
public:
    SQLIteDBDriver() {
        std::cout << "SQLIteDBDriver::cTor" << std::endl;
    }

    ~SQLIteDBDriver() {
        std::cout << "SQLIteDBDriver::dTor" << std::endl;
    }

    virtual bool open( const std::string& connectionStr ) override {
        std::cout << "SQLIteDBDriver::open" << std::endl;
        return true;
    }

    virtual void close( void ) override {
        std::cout << "SQLIteDBDriver::close" << std::endl;
    }
};

class MySQLDBDriver : public IDBDriver {
    char* buffer;

public:
    MySQLDBDriver() {
        std::cout << "MySQLDBDriver::cTor" << std::endl;
    }

    ~MySQLDBDriver() {
        std::cout << "MySQLDBDriver::dTor" << std::endl;
    }

    virtual bool open( const std::string& connectionStr ) override {
        std::cout << "MySQLDBDriver::open" << std::endl;
        return true;
    }

    virtual void close( void ) override {
        std::cout << "MySQLDBDriver::close" << std::endl;
    }
};

//enum class DBType {
//    MYSQL, SQLITE;
//};
//
//IDBDriver* DBDriver::getDriver( DBType type, const std::string& connectionString ) {
//
//    IDBDriver* driver = nullptr;
//    switch (type) {
//        case DBType::SQLITE: return new SQLIteDBDriver( connectionString );
//        case DBType::MYSQL: return new MySQLDBDriver( connectionString );
//    }
//}

int main()
{
}
