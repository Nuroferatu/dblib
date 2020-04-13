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
    
    std::string errMsg = "###_Error_SQLite_Msg: ";
    
    if ( sqlite3_open_v2( connectionStr.c_str(), &db, SQLITE_ACCESS_READWRITE, nullptr ) != SQLITE_OK ) {
		std::string errSqlite = sqlite3_errmsg( db );
		errMsg.append( errSqlite ).append( "\n" );
		throw errMsg;
	}
        
}

void SQLiteDBDriver::close( void ) {
    std::cout << "SQLIteDBDriver::close" << std::endl;

    sqlite3_close(db);
}

int SQLiteDBDriver::callback( void* db, int argc, char** colValues, char** colNames ){

	for( int i = 0; i < argc; ++i ){
		std::cout << colNames[i] << ": " << colValues[i] ? colValues[i] : "null";
		std::cout << std::endl;
	}
	std::cout << std::endl;

	return 0;
}

void SQLiteDBDriver::execute( const std::string& exec_statement ){
	std::cout << "SQLIteDBDriver::execute " << std::endl;

	std::string errMsg = "###_Error_SQLite_Msg: ";
	char *errSqlite = nullptr;

	sqlite3_exec( db, exec_statement.c_str(), callback, nullptr, &errSqlite );
	if ( nullptr != errSqlite) {
		errMsg.append(errSqlite).append("\n");
		throw errMsg;
	}
}
// vim: ts=4:sw=4:et:nowrap
/* EOF */
