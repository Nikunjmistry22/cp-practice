#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll y;cin>>y;
    while(true){
        y+=1;
        ll a=y/1000;
        ll b=y/100%10;
        ll c=y/10%10;
        ll d=y%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            ll res= a*1000+b*100+c*10+d;
            cout<<res;
            return 0;
        }
    }
}
