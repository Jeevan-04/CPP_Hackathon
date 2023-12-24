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
    cout<<"Length of the string: "<< length<<endl<<endl;

    for (int i = 0; i <length; i++)
    {
        sum += (num[i] - '0');
    }
    cout<<"sum of the number: "<< sum<< endl<<endl;
    
    
    string new_num= to_string(sum);
    cout<< new_num<<endl;

    int len = log10(sum) + 1;
    cout<< len<< endl;

    if (len > 1)
    {
        int new_sum=0;

        for (int i = 0; i < len; i++)
        {
            new_sum += (new_num[i] - '0');
        }
        cout<<new_sum<< endl<<endl;
    }

    return 0;
}