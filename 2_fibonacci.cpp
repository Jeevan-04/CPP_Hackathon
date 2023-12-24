#include <iostream>
using namespace std;

int main()
{
    int num[]={0};
    num[0]= 0;
    num[1]=1;

    int number;
    cout<< "Enter the number: ";
    cin>> number;

    for (int i = 2; i <= number; i++)
    {
        num [i] = num[i-1] + num [i-2];
    }
    for (int j = 0; j <= number; j++)
    {
        cout<< num[j]<<" ";
    }
    
    cout<<endl;
}