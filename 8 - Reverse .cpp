//Program to reverse a number

#include <iostream>
using namespace std;

int main()
{
    int n, m, rev=0;
    cout<<"Enter the number to reverse: ";
    cin>>n;
    m = n;

    while(n>0)
    {
        rev *= 10;
        rev += n%10;
        n /= 10;
    }

    cout<<"Reverse of "<<m<<" is "<<rev;

return 0;
}