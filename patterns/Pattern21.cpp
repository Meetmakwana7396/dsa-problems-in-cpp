// Pattern 21
// Enter n: 4
//                         1
//                 2       2
//         3       3       3
// 4       4       4       4
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // printing spaces
        int space = n - i;
        while (space)
        {
            cout << " \t";
            space--;
        }

        // printing Numbers

        for (int j = 1; j <= i; j++)
        {

            cout << i << "\t";
        }
        cout << endl;
    }

    return 0;
}