#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter the First number: ";
    cin>> a;

    cout<<"Enter the Second number: ";
    cin>> b;

    cout<< "Enter the Third number: ";
    cin>> c;

    if (a>b && a>c)
    {
        cout<< a << " is greatest among all i.e.(" << b << " and " << c << "). ";
    }
    else if (b> a && b>c)
    {
        cout<< b << " is greatest among all i.e.(" << a << " and " << c << "). ";
    }
    else
    {
        cout<< c << " is greatest among all i.e.(" << a << " and " << b << "). ";
    }
    return 0;
}