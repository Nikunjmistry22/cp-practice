#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    string s1,s2,s3="";cin>>s1>>s2;
    for(ll i=0;i<s1.length();i++){
        if(s1[i]==s2[i]){
            s3+="0";
        }
        else{
            s3+="1";
        }
    }
    cout<<s3;
}
