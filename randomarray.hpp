#ifndef RANDOMARRAY_HPP
#define RANDOMARRAY_HPP
#include <stdint.h>
#include <fstream>
template <class T>
class RandomArray
{
protected:
    uint32_t array_length_ = 0;
    T *array_ = NULL;
public:
    RandomArray(uint32_t length, int32_t left_border, int32_t right_border): array_length_(length), array_(new int32_t[length])
    {
        srand(time(0));
        for (uint32_t i = 0; i < array_length_; ++i)
        {
            array_[i] = rand() % (right_border - left_border) + left_border;      //constructor for array of random numbers
        }
    }
    RandomArray(uint32_t length, float left_border, float right_border): array_length_(length), array_(new float[length])
    {
        srand(time(0));
        for (uint32_t i = 0; i < array_length_; ++i)
        {
            array_[i] = static_cast <float>(rand()) / static_cast <float>(RAND_MAX) *    // float cosntructs of array
                    (right_border - left_border) + left_border;                          // from int rand() function
        }
    }
    ~RandomArray()
    {delete[] array_;}
    void array_export()
    {
        std::ofstream obj;
        obj.open("Array.bin");
        for (uint32_t i = 0; i < array_length_; ++i)
        {
            obj << array_[i] << ' ';
        }
        obj.close();
    }
};

#endif // RANDOMARRAY_HPP
