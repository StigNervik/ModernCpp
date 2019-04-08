#include <iostream>
#include "unit.h"


int main() {


    Data::Unit unit;



    // Test out lambda functions
    auto isBetween0and10 = [] (int n) -> bool {return 0 < n && n < 10;};
    int n = 5;
    std::cout << "Is number " << n << " between 0 and 10: " << isBetween0and10(n) << std::endl;





    return 0;
}
