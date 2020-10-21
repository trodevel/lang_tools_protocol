#ifndef APG_LANG_TOOLS_PROTOCOL__VALIDATOR_H
#define APG_LANG_TOOLS_PROTOCOL__VALIDATOR_H

// includes
#include "protocol.h"

#include <string>

namespace lang_tools_protocol
{

namespace validator
{

// enums
bool validate( const std::string & prefix, const lang_e r );

} // namespace validator

} // namespace lang_tools_protocol

#endif // APG_LANG_TOOLS_PROTOCOL__VALIDATOR_H
