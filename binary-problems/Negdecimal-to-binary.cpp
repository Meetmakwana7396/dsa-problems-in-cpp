#include <iostream>

#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    if (n >= 0)
    {
        while (n)
        {
            int bit = n & 1;
            ans = (bit * pow(10, i)) + ans;
            n = n >> 1;
            i = i + 1;
        }
    }
    else
    {
        n = -n;
        while (n)
        {
            int bit = n & 1;
            ans = (bit * pow(10, i)) + ans;
            n = n >> 1;
            i = i + 1;
        }
        ans = ~ans;
        ans = ans + 1;
    }
    cout << "Answer is " << ans;
}