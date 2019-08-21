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
#include "mysqldbdriver.h"
#include <iostream>

using namespace stf;

/* ---------------------------------------------------------------------------
 * @brief   Class MySQLDBDriver*/
MySQLDBDriver::MySQLDBDriver() {
    std::cout << "MySQLDBDriver::cTor" << std::endl;
}

MySQLDBDriver::~MySQLDBDriver() {
    std::cout << "MySQLDBDriver::dTor" << std::endl;
}

bool MySQLDBDriver::open( const std::string& connectionStr) {
    std::cout << "MySQLDBDriver::open" << std::endl;
    return true;
}

void MySQLDBDriver::close( void ) {
    std::cout << "MySQLDBDriver::close" << std::endl;
}

void MySQLDBDriver::execute( const std::string& exec_statement ){
	// do stuff here
}
// vim: ts=4:sw=4:et:nowrap
/* EOF */
