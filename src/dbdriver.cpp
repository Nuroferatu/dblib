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
//    2. 2018.07.26, 23:00 Vasile 		[=] Switched the class in new file
//    1. 2019.07.24, 21:00 Nuroferatu   [+] Initial
// ---------------------------------------------------------------------------
// Includes ------------------------------------------------------------------
#include "dbdriver.h"
// Namespaces ----------------------------------------------------------------
using namespace stf;
/* ---------------------------------------------------------------------------
 * @brief	Class DBDriver	*/
IDBDriver* DBDriver::getDriver( DBType type ){

	IDBDriver* driver = nullptr;

    switch (type) {
        case DBType::SQLITE:
        	driver = new SQLiteDBDriver();
        	break;
        case DBType::MYSQL:
        	driver = new MySQLDBDriver();
        	break;
    }

    return driver;
}

