#ifndef ARRAYFLOAT_HPP
#define ARRAYFLOAT_HPP
#include "randomarray.hpp"
#include <cstddef>
class ArrayFloat: public RandomArray
{
private:
    float *array_ = NULL;
public:
    ArrayFloat(uint32_t length, float left_border, float right_border);
    ~ArrayFloat();
    virtual void array_export() override;
};

#endif // ARRAYFLOAT_HPP
