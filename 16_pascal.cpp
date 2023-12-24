#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}


int main()
{
    for (int i = 0; i <5; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            cout<< " ";
        }
        for (int k = 0; k <=i; k++)
        {
            cout<< fact(i)/(fact(k)*fact(i-k)) << " ";
        }
        cout<<endl;
    }
    return 0;
}