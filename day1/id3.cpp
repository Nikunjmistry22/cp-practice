#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,t;cin>>n>>t;
    string s;cin>>s;
    while(t--){
     for(ll i=0;i<n;i++){
        if(s[i]=='B' && s[i+1]=='G'){
            swap(s[i],s[i+1]);
            i+=t+1;
        }
     }
    }
    cout<<s;
}
