// Pattern 19
// Enter n: 5
// *       *       *       *       *
//         *       *       *       *
//                 *       *       *
//                         *       *
//                                 *
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Printing Spaces
        int space = i - 1;
        while (space)
        {
            cout << " "
                 << "\t";
            space--;
        }

        // Printing Stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*"
                 << "\t";
        }
        cout << endl;
    }

    return 0;
}