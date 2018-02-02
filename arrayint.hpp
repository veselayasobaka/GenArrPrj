#ifndef ARRAYINT_HPP
#define ARRAYINT_HPP
#include "randomarray.hpp"
#include <cstddef>
class ArrayInt: public RandomArray
{
private:
    int32_t *array_ = NULL;
    int32_t l, r;
public:
    ArrayInt(uint32_t length, int32_t left_border, int32_t right_border);
    ~ArrayInt();
    virtual void array_export() override;
};

#endif // ARRAYINT_HPP
