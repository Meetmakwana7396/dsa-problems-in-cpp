// Pattern 11
// Enter n: 4
// A       B       C       D
// E       F       G       H
// I       J       K       L
// M       N       O       P
#include <iostream>
using namespace std;

int main()
{
    int n;
    char start = 'A';
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            cout << start++ << "\t";
        }
        cout << endl;
    }

    return 0;
}