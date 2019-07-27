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
//    2. 2018.07.26, 23:00 Vasile 		[=] Switched the classes in new file
//    1. 2019.07.24, 21:00 Nuroferatu   [+] Initial
// ---------------------------------------------------------------------------
// Includes ------------------------------------------------------------------
#include "dbtypes.h"
// Namespaces ----------------------------------------------------------------
using namespace stf;
/* ---------------------------------------------------------------------------
 * @brief	Class SQLIteDBDriver	*/
SQLiteDBDriver::SQLiteDBDriver() {
	std::cout << "SQLIteDBDriver::cTor" << std::endl;
	db = nullptr;
}

SQLiteDBDriver::~SQLiteDBDriver() {
	std::cout << "SQLIteDBDriver::dTor" << std::endl;
}
/*##-1-	*/
bool SQLiteDBDriver::open( const std::string& connectionStr){

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
void SQLiteDBDriver::SQLiteDBDriver::close( void ) {
	std::cout << "SQLIteDBDriver::close" << std::endl;
}
/* ---------------------------------------------------------------------------
 * @brief	Class MySQLDBDriver*/
MySQLDBDriver::MySQLDBDriver() {
	std::cout << "MySQLDBDriver::cTor" << std::endl;
}

MySQLDBDriver::~MySQLDBDriver() {
	std::cout << "MySQLDBDriver::dTor" << std::endl;
}
/*##-1-	*/
bool MySQLDBDriver::open( const std::string& connectionStr) {
	std::cout << "MySQLDBDriver::open" << std::endl;
	return true;
}
/*##-2-	*/
void MySQLDBDriver::close( void ) {
	std::cout << "MySQLDBDriver::close" << std::endl;
}



