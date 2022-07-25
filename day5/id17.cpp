#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,sum1=0,sum2=0,countl1=0,countr1=0;cin>>n;
        ll a[n],b[n];
    for(ll i=0;i<n;i++){
        cin>>a[i]>>b[i];
        sum1+=a[i];
        sum2+=b[i];
    }
    if(sum1>sum2){
        for(ll j=0;j<n;j++){
            if(a[j]==0||b[j]==1){
                countl1++;
                countr1++;
            }
            /*else if(b[j]==1){
                countr1++;
            }*/
        }
    }
    else{
        for(ll k=0;k<n;k++){
            if(a[k]==1||b[k]==0){
                countr1++;
                countl1++;
            }
            /*else if(b[k]==0){
                countl1++;
            }*/
        }
    }
    cout<<countl1+countr1<<endl;

}
