#include <iostream>
#include "arrayfloat.hpp"
#include <stdint.h>
#include <ctime>
ArrayFloat::ArrayFloat(uint32_t length, float left_border, float right_border): RandomArray(length)
{
    srand(time(0));
    for(uint32_t i = 0; i < array_length_; ++i)
    {
        array_[i] = static_cast <float>(rand()) / static_cast <float>(RAND_MAX) *    // float cosntructs
                (right_border - left_border) + left_border;                          // from int rand() function
    }
}
ArrayFloat::~ArrayFloat()
{delete array_;}

