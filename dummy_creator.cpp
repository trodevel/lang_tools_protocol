// includes
#include "dummy_creator.h"
#include "basic_parser/dummy_creator.h"
#include "object_initializer.h"

namespace lang_tools
{

namespace dummy
{

// enums

lang_e create__lang_e()
{
    static const unsigned SIZE = 148;

    static const lang_e values[SIZE] = { lang_e::UNDEF, lang_e::AB, lang_e::AA, lang_e::AF, lang_e::AK, lang_e::SQ, lang_e::AM, lang_e::AR, lang_e::AN, lang_e::HY, lang_e::AS, lang_e::AV, lang_e::AZ, lang_e::BM, lang_e::BA, lang_e::BE, lang_e::BN, lang_e::BH, lang_e::BI, lang_e::BS, lang_e::BR, lang_e::BG, lang_e::MY, lang_e::CA, lang_e::CH, lang_e::CE, lang_e::NY, lang_e::ZH, lang_e::CV, lang_e::KW, lang_e::CO, lang_e::CR, lang_e::HR, lang_e::CS, lang_e::DA, lang_e::DV, lang_e::NL, lang_e::DZ, lang_e::EN, lang_e::ET, lang_e::EE, lang_e::FO, lang_e::FJ, lang_e::FI, lang_e::FR, lang_e::FF, lang_e::GL, lang_e::KA, lang_e::DE, lang_e::EL, lang_e::GN, lang_e::HT, lang_e::HZ, lang_e::HO, lang_e::HU, lang_e::ID, lang_e::GA, lang_e::IG, lang_e::IK, lang_e::IO, lang_e::IS, lang_e::IT, lang_e::JV, lang_e::KL, lang_e::KN, lang_e::KR, lang_e::KK, lang_e::KM, lang_e::KI, lang_e::KY, lang_e::KV, lang_e::KG, lang_e::LB, lang_e::LG, lang_e::LI, lang_e::LN, lang_e::LO, lang_e::LT, lang_e::LUB, lang_e::LV, lang_e::GV, lang_e::MK, lang_e::MG, lang_e::ML, lang_e::MT, lang_e::MI, lang_e::MH, lang_e::MN, lang_e::NA, lang_e::NV, lang_e::ND, lang_e::NE, lang_e::NB, lang_e::NN, lang_e::NO, lang_e::II, lang_e::NR, lang_e::OC, lang_e::OJ, lang_e::OM, lang_e::OR, lang_e::OS, lang_e::PI, lang_e::PL, lang_e::PT, lang_e::QU, lang_e::RM, lang_e::RO, lang_e::RU, lang_e::SC, lang_e::SM, lang_e::SG, lang_e::SR, lang_e::GD, lang_e::SN, lang_e::SI, lang_e::SK, lang_e::SL, lang_e::SO, lang_e::ST, lang_e::ES, lang_e::SU, lang_e::SW, lang_e::SS, lang_e::SV, lang_e::TA, lang_e::TE, lang_e::TH, lang_e::TI, lang_e::BO, lang_e::TK, lang_e::TL, lang_e::TN, lang_e::TO, lang_e::TR, lang_e::TS, lang_e::TY, lang_e::UK, lang_e::VE, lang_e::VI, lang_e::WA, lang_e::CY, lang_e::WO, lang_e::FY, lang_e::XH, lang_e::YO, lang_e::ZA, lang_e::ZU,  };

    auto res = values[ ::basic_parser::dummy::create__uint32() % SIZE ];

    return res;
}

// objects

// messages

} // namespace dummy

} // namespace lang_tools

