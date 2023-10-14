// Pattern 17
// Enter n: 3
//                 *
//         *       *
// *       *       *
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
        int space = n - i;
        while (space)
        {
            cout << " "
                 << "\t";
            space--;
        }

        // Printing Stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << "\t";
        }
        cout << endl;
    }

    return 0;
}