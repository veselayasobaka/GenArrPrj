#include <iostream>
#include "arrayint.hpp"
#include "arrayfloat.hpp"
using namespace std;
int main(int argc, char *argv[])
{
    char type_of_array;
    uint32_t array_length;
    int32_t left_border_int, right_border_int;                         // for choosing numerical
    float left_border_float, right_border_float;                       // range of array's numbers
    cout << "Welcome to Generation Random Array Program v0.1! This progam is build to generate random arrays of different type of "
            "numbers. You can choose one of avaliable types, after that program offers you to input the length of your array "
            "(current maximum length is 100000 numbers)" << endl << "Please choose one of avaliable types: enter 'i' for int ("
            << -RAND_MAX/2 << ", " << RAND_MAX/2 << ", 'f' for float (same limits, number has fractional part), after that enter "
            "the number of elements" << endl;
    cin >> type_of_array >> array_length;
    if (array_length <= 100000)
        switch (type_of_array)
        {
            case 'i':
            {
                cout << "Enter numerical range borders: " << endl;
                cin >> left_border_int;
                cin >> right_border_int;
                if (left_border_int < right_border_int)
                {
                    ArrayInt ArrayI(array_length, left_border_int, right_border_int);
                    ArrayI.array_export();
                    cout << "Array of int numbers with " << array_length << " elements was succesfully created in the current directory!" << endl;
                }
                else
                {
                    ArrayInt ArrayI(array_length, right_border_int, left_border_int);
                    ArrayI.array_export();
                    cout << "Array of int numbers with " << array_length << " elements was succesfully created in the current directory!" << endl;
                }
                break;
            }
            case 'f':
            {
                cout << "Enter numerical range borders: " << endl;
                cin >> left_border_float;
                cin >> right_border_float;
                if (left_border_float < right_border_float)
                {
                    ArrayFloat ArrayF(array_length, left_border_float, right_border_float);
                    ArrayF.array_export();
                    cout << "Array of float numbers with " << array_length << " elements was succesfully created in the current directory!" << endl;
                }
                else
                {
                    ArrayFloat ArrayF(array_length, right_border_float, left_border_float);
                    ArrayF.array_export();
                    cout << "Array of float numbers with " << array_length << " elements was succesfully created in the current directory!" << endl;
                }
                break;
            }
            default:
            {
                cout << "You did not choose any correct type of numbers!" << endl;
                break;
            }
        }
    else
        cout << "The array length could be from 0 to 100000 only!" << endl;
    return 0;
}
