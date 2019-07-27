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
#ifndef __STF_DBDRIVER_H__
#define __STF_DBDRIVER_H__

#include "idbdriver.h"
#include <memory>

namespace stf {

/* ---------------------------------------------------------------------------
 * @brief   Class DBDriver
 *          Class providing methods to create the different object types of db connection*/
class DBDriver {
public:
    enum class DBType { SQLITE, MYSQL };

    std::unique_ptr<IDBDriver> getDriver( DBType databaseType );
};

}; // namespace stf

#endif /* ndef __STF_DB_TYPES_H__ */
// vim: ts=4:sw=4:et:nowrap
/* EOF */
