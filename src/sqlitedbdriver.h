//                                    .-""-.
//                                   / _  _ \
//                                   |(_)(_)|
// .------------------------------ooO(_ /\ _)Ooo-----------------------------.
// |                                  |====|                                 |
// |                                  '-..-'                                 |
// | Desc:     SQLiteDBDriver implementation                                 |
// | By:       Nuroferatu - https://github.com/Nuroferatu                    |
// |                                                                         |
// | Copyright (C)2018 SoftwareToolsFactory                                  |
// |                   http://softwaretoolsfactory.com                       |
// '-------------------------------------------------------------------------'
#pragma once
#ifndef __STF_SQLITEDBDRIVER_H__
#define __STF_SQLITEDBDRIVER_H__

#include "idbdriver.h"
#include "sqlite3.h"

namespace stf {

/* ---------------------------------------------------------------------------
 * @brief   Class SQLIteDBDriver
 *          Implements IDBDriver for providing an object to db of type SQLite*/
class SQLiteDBDriver : public IDBDriver {
public:
    SQLiteDBDriver();
    ~SQLiteDBDriver();

    virtual bool open( const std::string& ) override;
    virtual void close( void ) override;

private:
    sqlite3*    db = nullptr;
};

} // namespace stf

#endif /* ndef __STF_SQLITEDBDRIVER_H__ */
// vim: ts=4:sw=4:et:nowrap
/* EOF */
