#include <iostream>
#include "arrayint.hpp"
#include <stdint.h>
#include <ctime>
ArrayInt::ArrayInt(uint32_t length, int32_t left_border, int32_t right_border): RandomArray(length)
{
    srand(time(0));
    for (uint32_t i = 0; i < array_length_; ++i)
      {
          array_[i] = rand() % (right_border-left_border) + left_border;      //constructor for array of random numbers
      }
}
ArrayInt::~ArrayInt()
{delete array_;}
