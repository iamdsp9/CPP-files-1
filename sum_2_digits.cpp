#include <iostream>
using namespace std;

int main() {
	// your code int val, num, sum = 0;
 
    cout << "Enter the number : ";
    cin >> val;
    num = val;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;goes here
	return 0;
}
