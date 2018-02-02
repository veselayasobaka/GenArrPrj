/*#include <iostream>
#include <stdint.h>
#include <fstream>
#include "randomarray.hpp"
RandomArray::RandomArray (uint32_t length, int32_t left_border, int32_t right_border): array_length_(length), arrayi_(new int32_t[length])
{
    srand(time(0));
    for (uint32_t i = 0; i < array_length_; ++i)
    {
        arrayi_[i] = rand() % (right_border - left_border) + left_border;      //constructor for array of random numbers
    }
}
RandomArray::RandomArray (uint32_t length, float left_border, float right_border): array_length_(length), arrayf_(new float[length])
{
    srand(time(0));
    for (uint32_t i = 0; i < array_length_; ++i)
    {
        arrayf_[i] = static_cast <float>(rand()) / static_cast <float>(RAND_MAX) *    // float cosntructs of array
                (right_border - left_border) + left_border;                          // from int rand() function
    }
}
void RandomArray::array_exporti(){
    std::ofstream obj;
    obj.open("Array.bin");
    for (uint32_t i = 0; i < array_length_; ++i)
    {
        obj << arrayi_[i] << ' ';
    }
    obj.close();
}
void RandomArray::array_exportf(){
    std::ofstream obj;
    obj.open("Array.bin");
    for (uint32_t i = 0; i < array_length_; ++i)
    {
        obj << arrayf_[i] << ' ';
    }
    obj.close();
}

*/
