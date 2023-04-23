#ifndef ATTRIBUTE_HPP
#define ATTRIBUTE_HPP
#include <string>
class Attribute {
    float weight;
    std::string name;
    float value;
    bool negative;

  public:
    /**
     * @brief Construct a new Attribute object with default values(weight = 0, name = "Not Specified", value = 0.0f, negative = false) 
    */
    Attribute();

    /**
     * @brief Construct a new Attribute object with different value, other stuff same as other attribute
    */
    Attribute(float value, const Attribute &other);

    /**
     * @brief Construct a new Attribute object without value for the base of Attributes
    */
    Attribute(float weight, std::string name, bool negative);

    /**
     * @brief Get the weight value of attribute
     * @return float value of attribute weight for decision maker
    */
    float getWeight() const;

    /**
     * @brief Get the name value of attribute
     * @return string value of attribute name for decision maker
    */
    std::string getName() const;

    /**
     * @brief Get the value value of attribute
     * @return float value of attribute value for decision maker
    */
    float getValue() const;

    /**
     * @brief Get the negative value of attribute
     * @return bool value of attribute negative or not for decision maker
    */
    bool isNegative() const;

    /**
     * @brief Set the Weight object
     * @param weight float value of attribute weight for decision maker
    */
    void setWeight(float weight);

    /**
     * @brief Set the Name object
     * @param name string value of attribute name for decision maker
    */
    void setName(std::string name);

    /**
     * @brief Set the Value object
     * @param value float value of attribute value for decision maker
    */
    void setValue(float value);

    /**
     * @brief Set the Negative object
     * @param negative bool value of attribute negative for decision maker
    */
    void setNegative(bool negative);
};

#endif // ATTRIBUTE_HPP