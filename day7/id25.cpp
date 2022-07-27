#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    vector <int>v;
    ll n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    v.push_back((k*l)/nl);
    v.push_back(p/np);
    v.push_back(c*d);
    ll min=v[0];
    for(ll i=0;i<v.size();i++){
        if(min>v[i]){
            min=v[i];
        }
    }
        cout<<min/n<<" ";
}
