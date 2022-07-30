#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
int main()
{
    double x,y,z;cin>>x>>y>>z;
    double a = sqrt(x*y/z);
    double b = sqrt(y*z/x);
    double c = sqrt(x*z/y);
    cout<<4*(a+b+c);

}
