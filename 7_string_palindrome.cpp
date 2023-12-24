#include <iostream>
using namespace std;

int main()
{
    string input;
    cout<<"Enter the String: ";
    cin>> input;

    int length = input.size();

    for (int i = 0; i < length ; i++)
    {
        if (input[i] == input[length - 1-i])
        {
            cout<< "The given string ( "<< input<< " ) is a Palindrome. ";
            break;
        }
        else
        {
            cout<< "The given string ( "<< input << " ) is not a Palindrome. ";
            break;
        }
    }
    return 0;
}