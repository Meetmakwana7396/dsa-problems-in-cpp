#include <iostream>
using namespace std;

int getFibonacci(int n)
{
    if (n <= 1)
        return n;
    return getFibonacci(n - 1) + getFibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << n << "th fibonacci is: " << getFibonacci(n);
    return 0;
}