#include <iostream>
using namespace std;

int main()
{
    double sum=0.0;
    double n;
    double marks[5]={0};
    cout<< "Enter the marks of the student"<<endl;

    for (int i = 0; i < 5; i++)
    {
       here:
       cout<< "Enter the marks of subject " << i+1 <<": ";
       cin >> n;
       
       if (n > 100)
       {
        cout << "Enter the valid score of the student"<<endl;
        goto here;
       }
       
       marks[i] = n;
       sum += marks [i];
    }

    cout<< "Total: " << sum<<endl;

    double average = (sum/5) ;
    cout<<"Average: " <<average <<endl;

    if (average>= 70)
    {
        cout<< "GRADE: A";
    }
    else if (average>=60)
    {
        cout<< "GRADE: B";
    }
    else if (average>=45)
    {
        cout<< "GRADE: C";
    }
    else
    {
        cout<< "FAIL";
    }
   return 0;
}