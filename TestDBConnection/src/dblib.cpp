//                                    .-""-.
//                                   / _  _ \
//                                   |(_)(_)|
// .------------------------------ooO(_ /\ _)Ooo-----------------------------.
// |                                  |====|                                 |
// |                                  '-..-'                                 |
// | Desc:     DBDriver interface                                            |
// | By:       Nuroferatu - https://github.com/Nuroferatu                    |
// |                                                                         |
// | Copyright (C)2018 SoftwareToolsFactory                                  |
// |                   http://softwaretoolsfactory.com                       |
// '-------------------------------------------------------------------------'
// ----= Change log =---------------------------------------------------------
//    2. 2018.07.26, 20:00 Vasile Filipescu	SQLIteDBDriver::open()--> to test
//											connection to a sqlite db
//    1. 2019.07.24, 21:00 Nuroferatu   	[+] Initial
// ---------------------------------------------------------------------------

#include <iostream>
#include "idbdriver.h"

using namespace stf;
/*
 * @brief	Class SQLIteDBDriver
 * 			Implements IDBDriver for providing an object to db of type SQLite*/
class SQLIteDBDriver : public IDBDriver {
public:
	/*##-Ctor-	*/
    SQLIteDBDriver() {
        std::cout << "SQLIteDBDriver::cTor" << std::endl;
        db = nullptr;
    }
    /*##-Dtor-	*/
    ~SQLIteDBDriver() {
        std::cout << "SQLIteDBDriver::dTor" << std::endl;
    }
    /*##-1-	*/
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
    /*##-2-	*/
    virtual void close( void ) override {
        std::cout << "SQLIteDBDriver::close" << std::endl;
    }
private :
    sqlite3 * db;
};
/*
 * @brief	Class MySQLDBDriver
 * 			Implements IDBDriver for providing an object to db of type MySQL*/
class MySQLDBDriver : public IDBDriver {

public:
	/*##-Ctor-	*/
    MySQLDBDriver() {
        std::cout << "MySQLDBDriver::cTor" << std::endl;
    }
    /*##-Dtor-	*/
    ~MySQLDBDriver() {
        std::cout << "MySQLDBDriver::dTor" << std::endl;
    }
    /*##-1-	*/
    virtual bool open( const std::string& connectionStr) override {
        std::cout << "MySQLDBDriver::open" << std::endl;
        return true;
    }
    /*##-2-	*/
    virtual void close( void ) override {
        std::cout << "MySQLDBDriver::close" << std::endl;
    }
};
/*
 * @brief	Enum class DBType
 * 			Providing types of db connection*/
enum class DBType {
    MYSQL, SQLITE
};
/*
 * @brief	DBDriver
 * 			Class providing methods to create the different object types of db connection*/
class DBDriver{
public:
	/*##-1-		Return an object for accessing the db
	 *@param	DBType
	 *@return	IDBDriver	*/
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
	const std::string dbName = "testDB.db";	//db to be connected to
	IDBDriver *dbDriver = nullptr;
	DBDriver *dbDriverFactory = nullptr;

	dbDriverFactory = new DBDriver();	//create a new connection object "factory"

	dbDriver = dbDriverFactory->getDriver(DBType::SQLITE);	//return a SQLite db type

	if(dbDriver){
		dbDriver->open(dbName);  //try to open the connection to SQLite db
	}

	return 0;

}
