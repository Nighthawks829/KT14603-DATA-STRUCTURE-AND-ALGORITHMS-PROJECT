#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <vector>
#include <string>

namespace constants
{
    inline const std::vector<std::string> faculty{"FPEP", "FKI", "FKJ", "FSMP", "FSSK", "FPSK", "FPP", "FSSA", "FPL", "FKAL", "FPT", "FIS"};
    inline const std::vector<std::string> programme{"HM00", "HM07", "HL64", "HL32", "HK04", "HK08", "HP05", "HP07", "HA06", "HA09"};
    inline const std::vector<std::string> course{"UL123","UW456","UJ789","UI123","UB456","UF789"};

    const int semseter = 4;
}

#endif