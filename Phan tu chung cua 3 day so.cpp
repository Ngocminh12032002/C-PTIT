#include <bits/stdc++.h>
using namespace std;

void findCommon(long long ar1[], long long ar2[], long long ar3[], long long n1, long long n2, long long n3)
{

    long long i = 0, j = 0, k = 0, check = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
        {
            cout << ar1[i] << " ";
            i++;
            j++;
            k++;
            check++;
        }

        else if (ar1[i] < ar2[j])
            i++;
        else if (ar2[j] < ar3[k])
            j++;
        else
            k++;
    }
    if (check == 0)
        cout << "-1";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        long long a[n1], b[n2], c[n3];
        for (long long i = 0; i < n1; i++)
            cin >> a[i];
        
        for (long long j = 0; j < n2; j++)
            cin >> b[j];
     
        for (long long k = 0; k < n3; k++)
            cin >> c[k];
        
        findCommon(a, b, c, n1, n2, n3);
        cout << endl;
    }
}
