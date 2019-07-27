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

std::unique_ptr<IDBDriver> DBDriver::getDriver( DBType type ) {
    switch (type) {
        case DBType::SQLITE: return std::make_unique<SQLiteDBDriver>();
        case DBType::MYSQL:  return std::make_unique<MySQLDBDriver>();
    }
    //throw std::runtime_exception
}

// vim: ts=4:sw=4:et:nowrap
/* EOF */