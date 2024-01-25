#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int left = j;
            int top = i;
            int right = 2 * n - 2 - j;
            int bottom = 2 * n - 2 - i;
            cout << (n - min(min(top, bottom), min(left, right))) << "\t";
        }
        cout << endl;
    }

    return 0;
}