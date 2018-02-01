#ifndef RANDOMARRAY_HPP
#define RANDOMARRAY_HPP
#include <stdint.h>
class RandomArray
{
private:
    uint32_t array_length_ = 0;
public:
    RandomArray();
    ~RandomArray();
    virtual void array_export() = 0;
};
#endif // RANDOMARRAY_HPP
