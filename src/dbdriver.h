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
#ifndef __STF_DB_DRIVER_H__
#define __STF_DB_DRIVER_H__
// Includes ------------------------------------------------------------------
#include "dbtypes.h"
// Namespace def -------------------------------------------------------------
namespace stf {
/* ---------------------------------------------------------------------------
 * @brief	Class DBDriver
 * 			Class providing methods to create the different object types of db connection*/
class DBDriver{
public:
	/*	##-1-		Return an object for accessing the DB
	 *	@param		DBType
	 *	@return		IDBDriver*	*/
	IDBDriver* getDriver( DBType );
};

}/*namespace stf*/

#endif /* ndef __STF_DB_TYPES_H__ */
// vim: ts=4:sw=4:et:nowrap
/* EOF */
