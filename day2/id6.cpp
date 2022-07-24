#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll a[3][3];
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
                a[i][j]=1;
        }
    }
    ll b[3][3];
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
                cin>>b[i][j];
        }
    }

    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
                if(a[i][j]==1 && b[i][j]==1){
                    b[i+1][j]=0;
                    b[i][j+1]=0;
                    b[i-1][j]=0;
                    b[i][j-1]=0;
                }
        }
    }

}
