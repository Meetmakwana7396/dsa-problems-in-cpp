// Pattern 9
// Enter n: 3
// A       A       A
// B       B       B
// C       C       C

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
            char ch = 'A' + i - 1;
            cout << ch << "\t";
        }
        cout << endl;
    }

    return 0;
}