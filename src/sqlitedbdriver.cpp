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
#include "sqlitedbdriver.h"
#include <iostream>

using namespace stf;

SQLiteDBDriver::SQLiteDBDriver() {
    std::cout << "SQLIteDBDriver::cTor" << std::endl;
}

SQLiteDBDriver::~SQLiteDBDriver() {
    std::cout << "SQLIteDBDriver::dTor" << std::endl;
}

bool SQLiteDBDriver::open( const std::string& connectionStr ) {
    bool dbOpened = false;

    if (sqlite3_open_v2( connectionStr.c_str(), &db, SQLITE_ACCESS_READWRITE, nullptr ) != SQLITE_OK) {
        std::cout << "Database " << connectionStr << " was NOT opened" << std::endl;
    }
    else {
        std::cout << "Database " << connectionStr << " was opened" << std::endl;
        dbOpened = true;
    }
    return dbOpened;
}

void SQLiteDBDriver::SQLiteDBDriver::close( void ) {
    std::cout << "SQLIteDBDriver::close" << std::endl;
}

// vim: ts=4:sw=4:et:nowrap
/* EOF */