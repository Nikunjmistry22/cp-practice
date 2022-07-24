#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,a,count=0;cin>>n;
    while(n>0){
        a=n%10;
        n/=10;
        if(a==4 || a==7){
            count++;
        }
    }
    if(count==4 ||count==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
