#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll t,n,res;
  cin>>t;
  while(t--)
  {
     cin>>n;
     ll ar[n];
     for(int i=0;i<n;i++)
       cin>>ar[i];
    sort(ar,ar+n);
    ll j=(n-1)/2;
    res=abs(ar[0]-ar[j])+abs(ar[j]-ar[n-1])+abs(ar[0]-ar[n-1]);
    cout<<res<<"\n";
     }}
