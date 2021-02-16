#include<bits/stdc++.h>
using namespace std;
int calch(string m, int t)
{
    int mh;
    mh = 10 *(m[0 + t] - '0') + 1* (m[1 + t] - '0');
    if(m[6+t] == 'P')
    {
        if(mh != 12)
        mh += 12;

    }
    if(m[6 + t] == 'A')
    {
        if(mh == 12)
        mh-= 12;

    }
    return mh;
}
int calcm(string m, int t)
{
    int mm;
    mm = 10 *(m[3 + t] - '0') + (m[4 + t] - '0');
    return mm;
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string m; getline(cin, m);
        int mh = calch(m, 0);
        int mm = calcm(m, 0);
        long long n; cin>>n;
        string res = "";
        while(n--)
        {
            string fr; getline(cin, fr);
            int fsh = calch(fr, 0);
            int fsm = calcm(fr, 0);
            int feh = calch(fr, 9);
            int fem = calcm(fr, 9);


            if((fsh> mh)||(feh< mh)) {res.push_back('0');}
            else if(fsh == mh && fsm> mm) res.push_back('0');
            else if(feh == mh && fem< mm) res.push_back('0');
            else res.push_back('1');
        }
        cout<<res<<"\n";
    }

}
