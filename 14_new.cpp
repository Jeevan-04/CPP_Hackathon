#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int sum=0;
    string num;
    
    cout<< "Enter the number: ";
    cin>> num;

    int length = num.length();
    cout<<endl<<  "Length of the number: "<< length<<endl<<endl;

    for (int i = 0; i <length; i++)
    {
        sum += (num[i] - '0');
    }
    cout<< "Sum of the number: "<< sum<< endl<<endl;
    
    while (sum>= 10)
    {
        string new_num= to_string(sum);
        

        int len = log10(sum) + 1;
        cout<< "length of new number: "<< len<< endl;

        int new_sum=0;

        for (int i = 0; i < len; i++)
        {
            new_sum += (new_num[i] - '0');
        }
        cout<<endl<< "The single digit added number: " << new_sum<< endl<<endl;

        sum = new_sum;
    }
    return 0;
}