#include "Alternative.hpp"
#include <iostream> 
Alternative::Alternative(const std::string &name, int numberOfAttributes, const Attribute *referenceAttribute) : name(name), numberOfAttributes(numberOfAttributes) {
    attributes = std::shared_ptr<Attribute>(new Attribute[numberOfAttributes], std::default_delete<Attribute[]>());
    for (int i = 0; i < numberOfAttributes; i++) {
        float value;
        std::cout << "Enter " << name << "'s " << referenceAttribute[i].getName() << " value: ";
        std::cin >> value;
        attributes.get()[i] = Attribute(value, referenceAttribute);
    }
}

void Alternative::setName(const std::string &name) {
    this->name = name;
}

std::string Alternative::getName() const {
    return name;
}

int Alternative::getNumberOfAttributes() const {
    return numberOfAttributes;
}

std::ostream &operator<<(std::ostream &os, const Alternative &alternative) {
    os << "Name: " << alternative.name << std::endl;
    for (int i = 0; i < alternative.numberOfAttributes; i++) {
        os << "Attribute " << i << ": " << alternative.attributes.get()[i].getName() << " = " << alternative.attributes.get()[i].getValue() << " Weight: " << alternative.attributes.get()[i].getWeight() << " Negative: " << alternative.attributes.get()[i].isNegative() << std::endl;
    }
    return os;
}