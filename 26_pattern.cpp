#include <iostream>
using namespace std;
 
int main()
{
    int n = 5, i, j, num = 1, gap;
    gap = n - 1;
 
    
    for ( j = 1 ; j < n ; j++ )
    {
        num = j;
        
       
        for ( i = 1 ; i <= gap ; i++ )
            cout << " ";
 
        gap --;
        
      
        for ( i = 1 ; i <= j ; i++ )
        {
            cout << num;
            num++;
        }
        
        
        num--;
        num--;
        
        
        for ( i = 1 ; i < j ; i++)
        {
            cout << num;
            num--;
        }
        
        
        cout << "\n";
    }
    
    
    for ( j = n-1 ; j >= 1 ; j-- )
    {
        num = j;
        
       
        for ( i = 1 ; i <= n-j ; i++ )
            cout << " ";
 
        
        for ( i = 1 ; i <= j ; i++ )
        {
            cout << num;
            num++;
        }
        
        
        num--;
        num--;
        
        
        for ( i = 1 ; i < j ; i++)
        {
            cout << num;
            num--;
        }
        
        
        cout << "\n";
    }
    return 0;
}

