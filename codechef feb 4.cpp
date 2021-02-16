#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

    int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
    if (it != v.end())
    {
        int index = it - v.begin();
        return index;
    }
    else {
        return -1;
    }
}

  int minStep(auto w,auto b,auto l,int n)
  {
      vector<int> pos;
  int c=0,id1,id2;
  for(int i=0;i<n;i++)
    pos[i]=i;
     for(int i=1;i<n;i++)
     {
         id1=getIndex(w,b[i]);
          id2=pos[getIndex(w,b[i-1])];
          int index=id1;
        while(index<=id2)
        {
           index+=l[id1];
           pos[id1]=index;
           c++;}
        }
    return c;}
int main()
{
ll t,n,x;
  cin>>t;
  while(t--)
  {
    cin>>n;
    vector<int> w;
    vector<int> l;
    vector<int> b;
    for(int i=0;i<n;i++)
       {
         cin>>x;
         w.push_back(x);
         }

    for(int i=0;i<n;i++)
       {
         cin>>x;
         l.push_back(x);}
          for(int i=0;i<n;i++)
            b[i]=w[i];
    sort(b.begin(),b.end());

      cout<<minStep(w,b,l,n)<<"\n";
    }
  }
