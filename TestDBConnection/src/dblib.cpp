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
//    3. 2018.07.26, 24:00 Vasile		[-] Clean main lib file (moving classes
//												in own files)
//	  2. 2018.07.26, 20:00 Vasile 		[+] SQLIteDBDriver::open()--> to test
//											connection to a sqlite db
//    1. 2019.07.24, 21:00 Nuroferatu   [+] Initial
// ---------------------------------------------------------------------------
// Includes ------------------------------------------------------------------
#include "dbdriver.h"
// Namespaces ----------------------------------------------------------------
using namespace stf;
/* ---------------------------------------------------------------------------
 * @brief	Main
 * */
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

}//end Main
