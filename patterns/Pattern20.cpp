// Pattern 20
// Enter n: 4
// 1       1       1       1
//         2       2       2
//                 3       3
//                         4
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        int space = i - 1;
        while (space)
        {
            cout << " \t";
            space--;
        }

        int start = i;
        // Print Numbers
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << start << "\t";
            // start++;
        }
        cout << endl;
    }

    return 0;
}