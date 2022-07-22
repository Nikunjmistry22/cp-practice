#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    string s;cin>>s;
    ll upper=0;
    for(ll i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=96){
            upper++;
        }
    }
    ll lower=s.length()-upper;
    //cout<<upper<<" "<<lower<<endl;
    if(upper>lower){
        for(ll j=0;j<s.length();j++){
            if(s[j]>=97){
                s[j]-=32;
            }
        }
    }
    else if(upper<=lower){
        for(ll j=0;j<s.length();j++){
            if(s[j]>=65&&s[j]<=96){
                s[j]+=32;
            }
        }
    }
    cout<<s;
}
