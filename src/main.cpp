#include <iostream>
#include "Alternative.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Attribute *referenceAttribute = new Attribute[3];
    referenceAttribute[0] = Attribute(0.200, "Yükseklik", false);
    referenceAttribute[1] = Attribute(0.300, "Genişlik", false);
    referenceAttribute[2] = Attribute(0.500, "Derinlik", true);

    Alternative *alternative = new Alternative("Kalem Kutusu", 3, referenceAttribute);
    std::cout << *alternative << std::endl;

    return 0;
}