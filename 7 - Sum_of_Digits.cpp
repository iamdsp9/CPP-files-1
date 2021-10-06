//Program to get sum of digits

#include <iostream>
using namespace std;

int main()
{
    int n, m, sum=0;
    cout<<"Enter the number to get the sum of its digits: ";
    cin>>n;
    m = n;

    while(n>0)
    {
        sum += n%10;
        n /= 10;
    }

    cout<<"Sum of digits of "<<m<<" = "<<sum;

return 0;
}