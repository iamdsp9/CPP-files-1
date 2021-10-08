//Program to convert from Decimal to Binary

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to find its Factorial: ";
    cin>>n;
    int m = 1;

    for(int i=1;i<n+1;i++)
    {
        m *= i;
    }

    cout<<n<<"! = "<<m;

return 0;
}