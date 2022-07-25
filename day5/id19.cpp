#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#include<vector>
int main()
{
    ll n,sum=0;cin>>n;
    vector<int>v;
    while(n--){
        ll a,b;cin>>a>>b;
        sum+=b-a;
        v.push_back(sum);
    }
    cout<<*max_element(v.begin(),v.end());
}
