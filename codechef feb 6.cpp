#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool prime(int n)
{
   for(int i=2;i*i<=n;i++)
    if(n%i==0)
    return false;
return true;
  }
int main()
{
int ar[10001];
int c=0;
for(int i=2;i<=10000;i++)
{
if(prime(i))
    c++;
ar[i]=c;
}
ll t,x,y;
scanf("%lld",&t);
  while(t--)
  {
     scanf("%lld%lld",&x,&y);
     if(ar[x]<=y)
        cout<<"Chef"<<"\n";
     else
        cout<<"Divyam"<<"\n";
  }
return 0;
  }
