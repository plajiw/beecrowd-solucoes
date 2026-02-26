// beecrowd | 2057 - Time Zone

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S, T, F;
    cin >> S;
    cin >> T;
    cin >> F;

    int result = S + T + F;

    if (result > 24)
        cout << result - 24 << endl;

    else if (result < 0)
        cout << 24 + result << endl;

    else if (!result)
        cout << 0 << endl;

    else
        cout << result << endl;
}
