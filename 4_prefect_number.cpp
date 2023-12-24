#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    int sum =0;

    int a=0;

    int* num = new int[n];
    for (int i = 0; i < n; i++)
    {
        if (n%i == 0)
        {
            num[a++] = i;
        }
    }
    for (int j = 0; j < a; j++)
    {
        cout<< num[j]<< " ";
        sum += num [j];
    }
    cout<< endl;

    //cout<< sum;

    if (sum == n)
    {
        cout<< "Entered number " << n << " is a PERFECT number.";
    }
    else
    {
        cout<< "Entered number " << n<< " is NOT a perfect number.";
    }
    
    return 0;
}