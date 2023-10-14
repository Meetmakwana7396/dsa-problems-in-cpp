// Convert Decimal Number to Binary
//  Enter Number: 1000
//  The ans is: 1111101000
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, ans = 0, i = 0;
    cout << "Enter Number: ";
    cin >> n;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n >>= 1;
        i++;
    }
    cout << "The ans is: " << ans << endl;
    return 0;
}