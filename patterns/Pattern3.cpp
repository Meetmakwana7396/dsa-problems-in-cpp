// pattern
// 1234
// 1234
// 1234
// 1234
#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter n: ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

// patter
// 4321
// 4321
// 4321
// 4321
// #include <iostream>
// using namespace std;

// int main()
// {
//     int i = 1, n;
//     cout << "Enter n: ";
//     cin >> n;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << n - j + 1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }