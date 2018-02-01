#ifndef ARRAYINT_HPP
#define ARRAYINT_HPP
#include "randomarray.hpp"
#include <cstddef>
class ArrayFloat: public RandomArray
{
private:
    int *array_ = NULL;
public:
    ArrayFloat(uint32_t length, float left_border, float right_border);
    ~ArrayFloat();
    void array_export();
};

#endif // ARRAYINT_HPP
