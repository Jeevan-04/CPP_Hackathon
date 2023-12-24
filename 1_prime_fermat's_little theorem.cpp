#include <iostream>
using namespace std;

int main()
{
    //a^(p-1)≡1 mod p
    int a, p,n, b, power=1;

    cout<< "Enter the value of a (not divisible by the input number): ";
    cin>> a;

    cout<< "Enter the Number: ";
    cin>> p;

    b= (p-1);

    while (b != 0)
    {
        power *= a;
        --b;
    }
    
    n = power % p;
    
    if (n == 1)
    {
        cout<< p << " is a prime number";
    }
    else
    {
        cout<< p << " is not a prime number";
    }
    return 0;
}