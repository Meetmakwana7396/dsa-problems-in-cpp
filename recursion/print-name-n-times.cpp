#include <iostream>
using namespace std;

void printNames(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    else
    {
        printNames(i - 1, n);
        cout << i << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    printNames(n, n);
    return 0;
}