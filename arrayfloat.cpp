#include <iostream>
#include "arrayfloat.hpp"
#include <stdint.h>
#include <ctime>
#include <fstream>
ArrayFloat::ArrayFloat(uint32_t length, float left_border, float right_border): RandomArray(length), array_(new float[length])
{
    srand(time(0));
    for(uint32_t i = 0; i < array_length_; ++i)
    {
        array_[i] = static_cast <float>(rand()) / static_cast <float>(RAND_MAX) * (right_border - left_border) + left_border;
    }
}
ArrayFloat::~ArrayFloat()
{delete array_;}
void ArrayFloat::array_export()
{
    std::ofstream obj;
    obj.open("ArrayFloat.bin");
    for (uint32_t i = 0; i < array_length_; ++i)
    {
        obj << array_[i];
    }
    obj.close();
}
