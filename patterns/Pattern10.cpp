// Pattern 10
// Enter n: 4
// A       B       C       D
// A       B       C       D
// A       B       C       D
// A       B       C       D

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'A' + j - 1;
            cout << ch << "\t";
        }
        cout << endl;
    }

    return 0;
}