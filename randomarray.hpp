#ifndef RANDOMARRAY_HPP
#define RANDOMARRAY_HPP
#include <stdint.h>
template <class T>
class RandomArray
{
protected:
    uint32_t array_length_ = 0;
    T *array_ = NULL;
public:
    RandomArray(uint32_t length, T left_border, T right_border);
    virtual ~RandomArray();
    void array_export();
};
#include "randomarray_impl.hpp"
#endif // RANDOMARRAY_HPP
