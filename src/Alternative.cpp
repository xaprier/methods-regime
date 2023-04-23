#include "Alternative.hpp"

Alternative::Alternative(const std::string &name, int numberOfAttributes, const Attribute *referenceAttribute) : name(name), numberOfAttributes(numberOfAttributes) {
    // will be implemented later
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