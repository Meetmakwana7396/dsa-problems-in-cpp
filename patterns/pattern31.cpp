#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int inis = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }

        for (int j = 1; j < n - i; j++)
        {
            cout << "*";
        }
        inis += 2;
        cout << endl;
    }

    inis = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        inis -= 2;
        cout << endl;
    }

    return 0;
}