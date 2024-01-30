#include <iostream>
using namespace std;

int findFactorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * findFactorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "\nFactorial of " << n << " is: " << findFactorial(n) << endl;

    return 0;
}