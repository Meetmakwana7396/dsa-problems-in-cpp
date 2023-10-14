#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Amount: " << endl;
    cin >> n;

    int i = 1;
    int hundred, fifty, twenty, one;

    while (i != 5)
    {
        switch (i)
        {
        case 1:
            hundred = n / 100;
            n = n - hundred * 100;
            i++;
            break;

        case 2:
            fifty = n / 50;
            n = n - fifty * 50;
            i++;
            break;

        case 3:
            twenty = n / 20;
            n = n - twenty * 20;
            i++;
            break;

        case 4:
            one = n / 1;
            n = n - one;
            i++;
            break;
        }
    }
    cout << "100\t--->\t"
         << hundred << endl;
    cout << "50\t--->\t"
         << fifty << endl;
    cout << "20\t--->\t"
         << twenty << endl;
    cout << "1\t--->\t"
         << one << endl;

    return 0;
}