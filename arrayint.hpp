#ifndef ARRAYINT_HPP
#define ARRAYINT_HPP
#include "randomarray.hpp"
#include <cstddef>
class ArrayInt: public RandomArray<int32_t>
{
public:
    ArrayInt(uint32_t length, int32_t left_border, int32_t right_border);
    ~ArrayInt();
};

#endif // ARRAYINT_HPP
