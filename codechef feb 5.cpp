#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll check(string s[],ll n)
{  ll c=0;
int f[26]={0};
ll cnt=0;
for(int i=0;i<n;i++)
    f[s[i][0]-'a']++;
for(int i=0;i<26;i++)
    if(f[i]!=0)
       cnt++;
if(cnt<=1)
    return 0;

    set<string> set1;
    for(int i=0;i<n;i++)
        set1.insert(s[i]);
  for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(s[i][0],s[j][0]);
            if(set1.find(s[i])==set1.end() && set1.find(s[j])==set1.end())
                c+=2;
            swap(s[i][0],s[j][0]);
        }
    }
   return c;
  }
int main()
{
  ll t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
     string s[n];
     for(int i=0;i<n;i++)
        cin>>s[i];
     cout<<check(s,n)<<"\n";}
     }
