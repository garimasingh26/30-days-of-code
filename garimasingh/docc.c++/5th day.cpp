// Write a program in C++ to display the number in reverse order.
#include <iostream>
using namespace std;

int main()
{
    int num, r, sum = 0, t;
    cout << "Display the number in reverse order:\n";
    cout << "Input a number: ";
    cin >> num;
    for (t = num; num != 0; num = num / 10) 
    {
        r = num % 10;
        sum = sum * 10 + r;
    }
    cout << " The number in reverse order is : " << sum << endl;
}

