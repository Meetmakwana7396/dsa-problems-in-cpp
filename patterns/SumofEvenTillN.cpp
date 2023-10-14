#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\t";
            sum += i;
        }
    }
    cout << "\nSum of Even numbers till " << n << " is: " << sum << endl;
    return 0;
}
