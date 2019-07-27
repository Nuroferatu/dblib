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
//    2. 2018.07.26, 20:00 Vasile 		[=] Adding commentaries
//    1. 2019.07.24, 21:00 Nuroferatu   [+] Initial
// ---------------------------------------------------------------------------
#pragma once
#ifndef __STF_IDBDRIVER_H__
#define __STF_IDBDRIVER_H__
// Includes ------------------------------------------------------------------
#include <iostream>
// Namespace def--------------------------------------------------------------
namespace stf {
/* ---------------------------------------------------------------------------
 * 	@brief	IDBDriver
 * 			Interface for providing connection to database */
class IDBDriver {
public:
    virtual ~IDBDriver() = default;
    /*	##-1-		Open connection to DB
     *	@param		const string & --> name for connecting to db
     *	@return		bool	(0--> db opened OK, 1--> db open error	*/
    virtual bool    open( const std::string& ) = 0;
    /*	##-2-		Close connection to db function
     *	@param	none
     *	@return	none	*/
    virtual void    close( void ) = 0;
};

}/*namespace stf*/

#endif /* ndef __STF_IDBDRIVER_H__ */
// vim: ts=4:sw=4:et:nowrap
/* EOF */
