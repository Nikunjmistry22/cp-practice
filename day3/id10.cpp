#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,count=0;cin>>n;
    string s;cin>>s;
    for(ll i=0;i<n;i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count;
}
