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
//    1. 2019.07.26, 23:00 Vasile	[+] Initial
// ---------------------------------------------------------------------------
#pragma once
#ifndef __STF_DB_TYPES_H__
#define __STF_DB_TYPES_H__
// Includes ------------------------------------------------------------------
#include "idbdriver.h"
#include "sqlite3.h"
// Namespace def -------------------------------------------------------------
namespace stf {
/* ---------------------------------------------------------------------------
 * @brief	Class SQLIteDBDriver
 * 			Implements IDBDriver for providing an object to db of type SQLite*/
class SQLiteDBDriver : public IDBDriver {
public:
    SQLiteDBDriver();
    ~SQLiteDBDriver();
    /*##-1-	*/
    virtual bool open( const std::string& ) override;
    /*##-2-	*/
    virtual void close( void ) override;
private :
    sqlite3 * db;
};
/* ---------------------------------------------------------------------------
 * @brief	Class MySQLDBDriver
 * 			Implements IDBDriver for providing an object to db of type MySQL*/
class MySQLDBDriver : public IDBDriver {
public:
    MySQLDBDriver();
    ~MySQLDBDriver();
    /*##-1-	*/
    virtual bool open( const std::string& ) override;
    /*##-2-	*/
    virtual void close( void ) override;
};
/* ---------------------------------------------------------------------------
 * @brief	Enum class DBType
 * 			Providing types of db connection*/
enum class DBType {
    MYSQL, SQLITE
};

}/*namespace stf*/

#endif /* ndef __STF_DB_TYPES_H__ */
// vim: ts=4:sw=4:et:nowrap
/* EOF */
