#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int dem = 0;
        for (int i = 1; i <= x; i++)
        {
            int tg = i;
            while (tg % y == 0)
            {
                dem++;
                tg /= y;
            }
        }
        cout << dem << endl;
    }
}
