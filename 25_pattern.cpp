#include <iostream>
using namespace std;

int main()
{
    // for (int l = 0; l <= 3; l++)
    // {
    //     cout<< " $ ";
    // }
    for (int k = 1; k <= 5; k++)
    {
        cout<< " @ ";
    }
    cout<< endl;
    for (int i = 1; i <= 5; i++)
    {
        if (i < 5)
        {
            cout<< " @          ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            if (i==j || i == 5)
            {
                cout<< " @ ";
            }
        }
        cout<< endl;
    }
    return 0;
}