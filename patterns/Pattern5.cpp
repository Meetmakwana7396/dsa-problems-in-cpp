// Pattern5
// Enter n: 5
// 1
// 22
// 333
// 4444
// 55555

#include <iostream>
using namespace std;

int main()
{
    int n, count = 1;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}