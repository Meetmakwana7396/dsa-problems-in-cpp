// Pattern 6
// n=3
// 1
// 2 3
// 4 5 6

#include <iostream>
using namespace std;

int main()
{
    int n, count = 1;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << count++ << "\t";
        }
        cout << endl;
    }

    return 0;
}