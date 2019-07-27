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
#pragma once
#ifndef __STF_MYSQLDBDRIVER_H__
#define __STF_MYSQLDBDRIVER_H__

#include "idbdriver.h"

namespace stf {

/* ---------------------------------------------------------------------------
 * @brief	Class MySQLDBDriver
 * 			Implements IDBDriver for providing an object to db of type MySQL*/
class MySQLDBDriver : public IDBDriver {
public:
    MySQLDBDriver();
    ~MySQLDBDriver();

    virtual bool open( const std::string& ) override;
    virtual void close( void ) override;
};

} // namespace stf

#endif /* ndef __STF_MYSQLDBDRIVER_H__ */

// vim: ts=4:sw=4:et:nowrap
/* EOF */
