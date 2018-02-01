#include <iostream>
#include "arrayfloat.hpp"
#include <stdint.h>
#include <ctime>
ArrayFloat::ArrayFloat(uint32_t length, float left_border, float right_border): array_length_(length), array_(new int(length))
{

}
ArrayFloat::~ArrayFloat()
{delete array_;}
