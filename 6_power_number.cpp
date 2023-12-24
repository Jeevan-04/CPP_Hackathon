#include <iostream>
using namespace std;

int main()
{
    int base, power, number = 1;

    cout<< "Enter the base of number: ";
    cin>> base;

    cout<< "Enter the power of number: ";
    cin>> power;

    for (int i = 1; i <=power; i++)
    {
        number *= base;
    }
    cout<< number;
    return 0;
}