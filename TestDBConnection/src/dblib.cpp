// dblib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "idbdriver.h"

using namespace stf;

class SQLIteDBDriver : public IDBDriver {
public:
    SQLIteDBDriver() {
        std::cout << "SQLIteDBDriver::cTor" << std::endl;
        db = nullptr;
    }

    ~SQLIteDBDriver() {
        std::cout << "SQLIteDBDriver::dTor" << std::endl;
    }

    virtual bool open( const std::string& connectionStr) override {

    	bool dbOpened = false;

    	if(sqlite3_open(connectionStr.c_str(), &db) != SQLITE_OK){
    		std::cout << "Database " << connectionStr << " was NOT opened" << std::endl;
    	}else{
    		std::cout << "Database " << connectionStr << " was opened" << std::endl;
    		dbOpened = true;
    	}

    	return dbOpened;
    }

    virtual void close( void ) override {
        std::cout << "SQLIteDBDriver::close" << std::endl;
    }
private :
    sqlite3 * db;
};

class MySQLDBDriver : public IDBDriver {

public:
    MySQLDBDriver() {
        std::cout << "MySQLDBDriver::cTor" << std::endl;
    }

    ~MySQLDBDriver() {
        std::cout << "MySQLDBDriver::dTor" << std::endl;
    }

    virtual bool open( const std::string& connectionStr) override {
        std::cout << "MySQLDBDriver::open" << std::endl;
        return true;
    }

    virtual void close( void ) override {
        std::cout << "MySQLDBDriver::close" << std::endl;
    }
};

enum class DBType {
    MYSQL, SQLITE
};

class DBDriver{

public:
	IDBDriver* getDriver(DBType);
};

IDBDriver* DBDriver::getDriver( DBType type) {

    IDBDriver* driver = nullptr;
    switch (type) {
        case DBType::SQLITE: driver = new SQLIteDBDriver(); break;
        case DBType::MYSQL:  driver = new MySQLDBDriver(); break;
    }

    return driver;
}

int main()
{
	const std::string dbName = "testDB.db";
	IDBDriver *dbDriver = nullptr;
	DBDriver *dbDriverFactory = nullptr;

	dbDriverFactory = new DBDriver();

	dbDriver = dbDriverFactory->getDriver(DBType::SQLITE);

	if(dbDriver){
		dbDriver->open(dbName);
	}

	return 0;

}
