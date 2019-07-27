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
#include "dbdriver.h"
#include "sqlitedbdriver.h"
#include "mysqldbdriver.h"

using namespace stf;

IDBDriver* DBDriver::getDriver( DBType type ) {
    IDBDriver* driver = nullptr;

    switch (type) {
        case DBType::SQLITE: driver = new SQLiteDBDriver(); break;
        case DBType::MYSQL: driver = new MySQLDBDriver(); break;
    }
    return driver;
}

// vim: ts=4:sw=4:et:nowrap
/* EOF */