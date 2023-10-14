// Pattern 24
// Enter n: 3
//                 1
//         1       2       1
// 1       2       3       2       1
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        while (space)
        {
            cout << " \t";
            space--;
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j << "\t";
        }

        int start = i - 1;
        while (start)
        {
            cout << start-- << "\t";
        }
        cout << endl;
    }

    return 0;
}