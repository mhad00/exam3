#include <iostream>
using namespace std;

int goldAmount(int m, int d, int k, int c)
{
    if (d - k <= 0)
        return -1;
    int tempD = d;
    int tempC = 0;
    for (; m > 0; m--)
    {
        if (tempD - k > 0)
        {
            tempD -= k;
        }
        if (m == 2 && tempD - k <= 0)
        {
           break ;
        }
        // cout << m<<' ' <<tempD << "\n";
        if (tempD - k <= 0)
        {
            tempD = d;
            tempC += c;
        }
    }
    return tempC;
}
int main()
{
    int m, d, k, c;
    cin >> m >> d >> k >> c;
    int gold = goldAmount(m, d, k, c);
    cout << gold;
    return 0;
}