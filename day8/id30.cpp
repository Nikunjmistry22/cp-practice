#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
     ll n,a,index1[100001];cin>>n;
	    for (ll i=1;i<=n;i++)
	    {
	        cin>>a;
	        index1[a] = i;
	    }
	    int m,b;cin>>m;
	    ll Vasya=0,Petya=0;
    while (m--){
        cin>>b;
        Vasya+=index1[b];
        Petya+=(n+1-index1[b]);
    }
    cout<<Vasya<<" "<<Petya<<endl;
}
