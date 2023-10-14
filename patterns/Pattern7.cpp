// Pattern 7
// n = 5
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9

// Row's First element Starts From row number and so on
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int value = i;
        for (int j = 0; j < i; j++)
        {
            cout << i + j << "\t";
        }
        cout << endl;
    }

    return 0;
}
