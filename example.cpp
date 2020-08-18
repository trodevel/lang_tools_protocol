#include <iostream>

#include "str_helper.h" // to_string
#include "parser.h"     // to_lang

int main()
{
    lang_tools::str_helper::write( std::cout, lang_tools::lang_e::EN );

    std::cout << std::endl;

    return 0;
}
