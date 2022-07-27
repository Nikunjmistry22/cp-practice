#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    string str;cin>>str;
    ll flag=0;
    for(ll i=0;i<str.size();i++){
	    if(str[i]>=33&&str[i]<=126){
	    if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
	    flag=1;
	}
	}
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
