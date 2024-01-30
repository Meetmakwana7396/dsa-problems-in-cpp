#include <iostream>
using namespace std;

bool checkPalindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;

    if (s[i] != s[s.size() - i - 1])
        return false;

    return checkPalindrome(i + 1, s);
}

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    if (checkPalindrome(0, str) == 0)
        cout << "false";
    else
        cout << "true";
    return 0;
}