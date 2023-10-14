// Pattern 23
// Enter n: 4
//                         1
//                 2       3
//         4       5       6
// 7       8       9       10
#include <iostream>
using namespace std;

int main()
{
    int n, start = 1;
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
            cout << start++ << "\t";
        }
        cout << endl;
    }

    return 0;
}