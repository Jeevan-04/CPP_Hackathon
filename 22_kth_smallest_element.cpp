#include <iostream>
using namespace std;

int main()
{
    int n, k;
    
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number for number " << i + 1 << " :";
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;


    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "The " << k << " smallest element is: " << arr[k - 1];
    
    return 0;
}
