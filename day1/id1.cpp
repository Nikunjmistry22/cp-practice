#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,sum1=0,sum2=0,sum3=0;cin>>n;
    while(n--){
        ll x,y,z;
        cin>>x>>y>>z;
        sum1+=x;
        sum2+=y;
        sum3+=z;}
    if(sum1==0 && sum2==0 && sum3==0){
        cout<<"YES"<<endl;}
    else{
        cout<<"NO"<<endl;
    }
}
