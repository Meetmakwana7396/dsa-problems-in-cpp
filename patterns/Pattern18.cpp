// Pattern 18
// Enter n: 3
// *       *       *
// *       *
// *
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*"
                 << "\t";
        }
        cout << endl;
    }

    return 0;
}