#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
   ll a[5][5],x,y,res;
   for(ll i=0;i<5;i++){
    for(ll j=0;j<5;j++){
        cin>>a[i][j];
    }
   }

   for(ll k=0;k<5;k++){
    for(ll l=0;l<5;l++){
        if(a[k][l]==1){
            x=abs(2-k);
            y=abs(2-l);
        }
    }
   }
   res=x+y;
   cout<<res<<endl;

}
