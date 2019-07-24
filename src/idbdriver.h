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

// Interface - must have virtual destructor
// #1 Must be virtual
// #2 Must be pure (=0)
// #3 Destructor must be virtual
class IDBDriver {
public:
    virtual ~IDBDriver() = default;

    virtual bool    open( const std::string& connectionStr ) = 0;
    virtual void    close( void ) = 0;
};

} // namespace stf

#endif /* ndef __STF_IDBDRIVER_H__ */
// vim: ts=4:sw=4:et:nowrap
/* EOF */
