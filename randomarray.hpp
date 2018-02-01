#ifndef RANDOMARRAY_HPP
#define RANDOMARRAY_HPP
#include <stdint.h>
class RandomArray
{
protected:
    uint32_t array_length_ = 0;
public:
    RandomArray(uint32_t);
    ~RandomArray();
    virtual void array_export() = 0;
};
#endif // RANDOMARRAY_HPP
