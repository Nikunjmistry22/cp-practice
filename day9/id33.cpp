#include<iostream>
using namespace std;
int main()
{
int a[10000],b[10000],c=0,e=0,q=0,f=0,ans=0;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i]>>b[i];
}

for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
        if(a[j]>a[i]&&b[j]==b[i])
            c++;
        if(a[j]<a[i]&&b[j]==b[i])
            q++;
        if(a[j]==a[i]&&b[j]>b[i])
            e++;
        if(a[j]==a[i]&&b[j]<b[i])
            f++;
    }
    if((c>=1)&&(q>=1)&&(e>=1)&&(f>=1))
       ans++;
       c=0;
       q=0;
       e=0;
       f=0;
  }
cout<<ans;
return 0;
}
