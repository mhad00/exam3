#include <iostream>
using namespace std;
long long tinhToHop(int n, int m)
{
    if (n == 0 || m == 0)
        return 1;

    long long toHop = 1;
    for (int i = 1; i <= n; ++i)
    {
        toHop *= (m + i);
        toHop /= i;
    }

    return toHop;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        long long duDoan = tinhToHop(n, m);
        cout << duDoan << "\n";
    }

    return 0;
}