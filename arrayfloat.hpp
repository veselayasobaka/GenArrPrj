#ifndef ARRAYFLOAT_HPP
#define ARRAYFLOAT_HPP
#include "randomarray.hpp"
#include <cstddef>
class ArrayFloat: public RandomArray<float>
{
public:
    ArrayFloat(uint32_t length, float left_border, float right_border);
    ~ArrayFloat();
};

#endif // ARRAYFLOAT_HPP
