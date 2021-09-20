#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x1, y1,z1, x2, y2,z2, x3, y3,z3, x4, y4,z4;
};

void nhap(struct point &p)
{
    cin >> p.x1 >> p.y1>>p.z1 >> p.x2 >> p.y2 >>p.z2>> p.x3 >> p.y3>>p.z3 >> p.x4 >> p.y4>>p.z4;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        struct point p;
        nhap(p);
        int a1 = p.x2 - p.x1;
        int b1 = p.y2 - p.y1;
        int c1 = p.z2 - p.z1;
        int a2 = p.x3 - p.x1;
        int b2 = p.y3 - p.y1;
        int c2 = p.z3 - p.z1;
        int a = b1 * c2 - b2 * c1;
        int b = a2 * c1 - a1 * c2;
        int c = a1 * b2 - b1 * a2;
        int d = (-a * p.x1 - b * p.y1 - c * p.z1);
        if (a * p.x4 + b * p.y4 + c * p.z4 + d == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    
}
}

