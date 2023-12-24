#include <iostream>
using namespace std;

int main()
{
    int of_number, with_number ;

    cout<< "Enter Table of which number: ";
    cin>> of_number;

    cout<< "Enter with how many number: ";
    cin>> with_number;

    for (int i = 1; i <= with_number; i++)
    {
        cout<< of_number<<" X "<< i <<" = "<< of_number* i <<endl;
    }
    return 0;
}