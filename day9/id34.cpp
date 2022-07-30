#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;cin>>n;
    ll a[1000];
    for(ll i=0;i<7;i++){
        cin>>a[i];
    }
    ll j=0;
    while(n>0){
        n-=a[j];
        if(n<=0){
            break;
        }
        j++;
        j=j%7;
    }
    cout<<j+1<<endl;
}
