#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int a, b, c;

    cout << "Enter the First number: ";
    cin >> a;

    cout << "Enter the Second number: ";
    cin >> b;

    
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            c = i;
        }
    }

    cout << "GCD of " << a << " and " << b << " is " << c << endl;

    return 0;
}
