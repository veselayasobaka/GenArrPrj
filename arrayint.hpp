#ifndef ARRAYINT_HPP
#define ARRAYINT_HPP
#include "randomarray.hpp"
#include <cstddef>
class ArrayInt: public RandomArray
{
private:
    int *array_ = NULL;
public:
    ArrayInt(uint32_t length, int32_t left_border, int32_t right_border);
    ~ArrayInt();
    virtual void array_export() override;
};

#endif // ARRAYINT_HPP
