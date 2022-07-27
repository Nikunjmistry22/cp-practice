
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,count=0,sum_1=0;cin>>n;
    while(n--){
        ll a[3];
        for(ll i=0;i<3;i++){
            cin>>a[i];
            if(a[i]==1){
                count++;
            }
        }
            if(count>1){
                sum_1++;
            }
            count=0;
    }
    cout<<sum_1<<endl;
}
