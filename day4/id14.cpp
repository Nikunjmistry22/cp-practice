#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,a;
    cin>>n>>a;
    ll mina(a),maxa(a),mini(0),maxi(0);
    for(ll i=1;i<n;++i)
    {
        cin >> a;
        if (a > maxa)
        {
            maxa = a;
            maxi = i;
        }
        if (a <= mina)
        {
            mina = a;
            mini = i;
        }
    }
    cout << maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << endl;
    return 0;
}
