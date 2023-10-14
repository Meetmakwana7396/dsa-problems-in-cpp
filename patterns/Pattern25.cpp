// Pattern 25
// Enter n: 5
// 1       2       3       4       5       5       4       3       2       1
// 1       2       3       4       *       *       5       4       3       2
// 1       2       3       *       *       *       *       5       4       3
// 1       2       *       *       *       *       *       *       5       4
// 1       *       *       *       *       *       *       *       *       5

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        int start = 1;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << start++ << "\t";
        }

        int stars = (i - 1) * 2;
        while (stars)
        {
            cout << "*\t";
            stars--;
        }

        start = n;
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << start-- << "\t";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}