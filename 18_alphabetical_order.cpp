#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of strings you want: ";
    cin >> n;

    string a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "input for " << i + 1 << " :" << endl;
        cin >> a[i];
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

   
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                string store = a[j];
                a[j] = a[j+1];
                a[j+1] = store;
            }
        }
    }
    cout<<endl;
    cout << "Strings in alphabetical order:" << endl<<endl;;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
