#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s,s1="";cin>>s;
    //cout<<s.length();
    for(ll i=0;i<s.length();i++){
        if(s[i]=='.'){
            s1+='0';
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            s1+='2';
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='.'){
            s1+='1';
            i++;
        }
    }
    cout<<s1;

}
