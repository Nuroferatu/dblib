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
#ifndef __STF_IDBDRIVER_H__
#define __STF_IDBDRIVER_H__

#include <string>

namespace stf {

/* ---------------------------------------------------------------------------
 *  @brief  IDBDriver
 *          Interface for providing connection to database
 */
class IDBDriver {
public:
    virtual ~IDBDriver() = default;

    virtual bool    open( const std::string& connectionStr ) = 0;
    virtual void    close( void ) = 0;
};

}; // namespace stf

#endif /* ndef __STF_IDBDRIVER_H__ */
// vim: ts=4:sw=4:et:nowrap
/* EOF */
