#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int is_prime(ll prime){
for(ll i=2;i*i<=prime;i++){
    if(prime%i==0){
        return false;
    }
}
return true;
}

int main()
{
    ll n,m;cin>>n>>m;
    bool found=false;
    ll prime=n;
    while(!found){
        prime++;
        if(is_prime(prime)==true){
           if(prime==m){
            cout<<"YES"<<endl;
           } else{
           cout<<"NO"<<endl;
           }
        }
    }

}
