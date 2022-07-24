
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    double n;cin>>n;ll a[100];
     double res=0.0,sum=0.0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    res=sum/n;
    cout<<fixed<<setprecision(12)<<res;

}
