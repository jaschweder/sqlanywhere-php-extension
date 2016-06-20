/*-----------------------------------------------------------------------------+
 * Copyright 2013 SAP AG or an SAP affiliate company.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *                                                                                
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * 
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * While not a requirement of the license, if you do modify this file, we
 * would appreciate hearing about it. Please email sqlany_interfaces@sybase.com
 *-----------------------------------------------------------------------------+
 */

#ifndef SQLANY_DBG_H
#define SQLANY_DBG_H

#define _debug_enabled( x ) if( SAG(debug_trace) ) x
#define _LOCATION_ 	__FILE__, __LINE__
extern void SQLAnyDebug( char * filename, int line, char * msg, ... );

#endif
