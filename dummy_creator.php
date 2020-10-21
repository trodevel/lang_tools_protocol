<?php

namespace lang_tools_protocol;


// includes
require_once __DIR__.'/../basic_parser/dummy_creator.php';

// own includes
require_once __DIR__.'/../lang_tools_protocol/object_initializer.php';

// enums

function create_dummy__lang_e()
{
    $SIZE = 148;

    $values = array( lang_e__UNDEF, lang_e__AB, lang_e__AA, lang_e__AF, lang_e__AK, lang_e__SQ, lang_e__AM, lang_e__AR, lang_e__AN, lang_e__HY, lang_e__AS, lang_e__AV, lang_e__AZ, lang_e__BM, lang_e__BA, lang_e__BE, lang_e__BN, lang_e__BH, lang_e__BI, lang_e__BS, lang_e__BR, lang_e__BG, lang_e__MY, lang_e__CA, lang_e__CH, lang_e__CE, lang_e__NY, lang_e__ZH, lang_e__CV, lang_e__KW, lang_e__CO, lang_e__CR, lang_e__HR, lang_e__CS, lang_e__DA, lang_e__DV, lang_e__NL, lang_e__DZ, lang_e__EN, lang_e__ET, lang_e__EE, lang_e__FO, lang_e__FJ, lang_e__FI, lang_e__FR, lang_e__FF, lang_e__GL, lang_e__KA, lang_e__DE, lang_e__EL, lang_e__GN, lang_e__HT, lang_e__HZ, lang_e__HO, lang_e__HU, lang_e__ID, lang_e__GA, lang_e__IG, lang_e__IK, lang_e__IO, lang_e__IS, lang_e__IT, lang_e__JV, lang_e__KL, lang_e__KN, lang_e__KR, lang_e__KK, lang_e__KM, lang_e__KI, lang_e__KY, lang_e__KV, lang_e__KG, lang_e__LB, lang_e__LG, lang_e__LI, lang_e__LN, lang_e__LO, lang_e__LT, lang_e__LUB, lang_e__LV, lang_e__GV, lang_e__MK, lang_e__MG, lang_e__ML, lang_e__MT, lang_e__MI, lang_e__MH, lang_e__MN, lang_e__NA, lang_e__NV, lang_e__ND, lang_e__NE, lang_e__NB, lang_e__NN, lang_e__NO, lang_e__II, lang_e__NR, lang_e__OC, lang_e__OJ, lang_e__OM, lang_e__OR, lang_e__OS, lang_e__PI, lang_e__PL, lang_e__PT, lang_e__QU, lang_e__RM, lang_e__RO, lang_e__RU, lang_e__SC, lang_e__SM, lang_e__SG, lang_e__SR, lang_e__GD, lang_e__SN, lang_e__SI, lang_e__SK, lang_e__SL, lang_e__SO, lang_e__ST, lang_e__ES, lang_e__SU, lang_e__SW, lang_e__SS, lang_e__SV, lang_e__TA, lang_e__TE, lang_e__TH, lang_e__TI, lang_e__BO, lang_e__TK, lang_e__TL, lang_e__TN, lang_e__TO, lang_e__TR, lang_e__TS, lang_e__TY, lang_e__UK, lang_e__VE, lang_e__VI, lang_e__WA, lang_e__CY, lang_e__WO, lang_e__FY, lang_e__XH, lang_e__YO, lang_e__ZA, lang_e__ZU,  );

    $res = $values[ \basic_parser\create_dummy__int32() % $SIZE ];

    return $res;
}

// objects

// messages

// namespace_end lang_tools_protocol


?>
