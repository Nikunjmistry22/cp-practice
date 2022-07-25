#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    string s;cin>>s;
    vector<int>v;
    for(ll i=0;i<s.length();i+=2){
        v.push_back(s[i]-'0');
    }
    sort(v.begin(),v.end());
    for(ll j=0;j<v.size();j++){
        cout<<v[j];
            if(j==s.length()-1){
                break;
            }
            cout<<"+";
    }

}
