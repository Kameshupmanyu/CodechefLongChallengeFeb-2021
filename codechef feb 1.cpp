#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ll n;
cin>>n;
for(int i=10;i>=1;i--)
{
  if(n%i==0)
    {
    cout<<i;
    break;}
}
}
