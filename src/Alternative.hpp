#ifndef ALTERNATIVE_HPP
#define ALTERNATIVE_HPP

#include "Attribute.hpp"
#include <memory>
#include <ostream>

class Alternative {
    std::string name;
    std::shared_ptr<Attribute> attributes;
    int numberOfAttributes;

public:
    /**
     * @brief Construct a new Alternative object with reference attribute 
    */
    Alternative(const std::string &name, int numberOfAttributes, const Attribute *referenceAttribute);
    
    /**
     * @brief Set the name of alternative
     * @param name string value of alternative name for decision maker
    */
    void setName(const std::string &name);

    /**
     * @brief Get the name of alternative
     * @return string value of alternative name for decision maker
    */
    std::string getName() const;

    /**
     * @brief Get the value of number of attributes
     * @return int value of number of attributes
    */
    int getNumberOfAttributes() const;

    friend std::ostream &operator<<(std::ostream &os, const Alternative &alternative);
};

#endif // ALTERNATIVE_HPP