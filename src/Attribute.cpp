#include "Attribute.hpp"

Attribute::Attribute() : weight(0), name("Not Specified"), value(0.0f), negative(false) {}

Attribute::Attribute(float value, const Attribute &other) : weight(other.weight), name(other.name), value(value), negative(other.negative) {}

Attribute::Attribute(float weight, std::string name, bool negative) : weight(weight), name(name), negative(negative) {}

float Attribute::getWeight() const {
    return weight;
}

std::string Attribute::getName() const {
    return name;
}

float Attribute::getValue() const {
    return value;
}

bool Attribute::isNegative() const {
    return negative;
}

void Attribute::setWeight(float weight) {
    this->weight = weight;
}

void Attribute::setName(std::string name) {
    this->name = name;
}

void Attribute::setValue(float value) {
    this->value = value;
}

void Attribute::setNegative(bool negative) {
    this->negative = negative;
}