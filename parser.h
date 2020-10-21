/*

Parser.

Copyright (C) 2014 Sergey Kolevatov

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

*/

// $Revision: 13998 $ $Date:: 2020-10-21 #$ $Author: serge $

#ifndef LANG_TOOLS_PARSER_H
#define LANG_TOOLS_PARSER_H

#include "generic_request/request.h"

#include <string>               // std::string

#include "protocol.h"           // lang_e

#include "lang_tools/namespace_lib.h"      // namespace lang_tools_protocol {

namespace lang_tools_protocol {

namespace parser
{

void get_value_or_throw( lang_e * res, const std::string & key, const generic_request::Request & r );

}

} // namespace lang_tools_protocol

#endif // LANG_TOOLS_PARSER_H
