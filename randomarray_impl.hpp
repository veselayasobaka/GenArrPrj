#include <iostream>
#include <stdint.h>
#include <fstream>
template <class T>
RandomArray<T>::RandomArray(uint32_t length, T left_border, T right_border): array_length_(length), array_(new T[length]){}
template <class T>
RandomArray<T>::~RandomArray(){}
template <class T>
void RandomArray<T>::array_export(){
    std::ofstream obj;
    obj.open("Array.bin");
    for (uint32_t i = 0; i < array_length_; ++i)
    {
        obj << array_[i] << ' ';
    }
    obj.close();
}

