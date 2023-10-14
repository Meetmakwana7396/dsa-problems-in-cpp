// Pattern 22
// Enter n: 5
// 1       2       3       4       5
//         2       3       4       5
//                 3       4       5
//                         4       5
//                                 5
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // printing space
        int space = i - 1;
        while (space)
        {
            cout << " \t";
            space--;
        }

        // printing Numbers
        int start = i;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << start++ << "\t";
        }
        cout << endl;
    }

    return 0;
}