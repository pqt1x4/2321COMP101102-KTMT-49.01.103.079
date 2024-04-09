/* Author: Phan Thi Quy Thinh - 49.01.103.079 */
/* 2321COMP101102 */

#include<bits/stdc++.h>
#define task "task."
using namespace std;

#define maxn 1009
#define ll long long 
#define pb push_back
#define fi first
#define se second
/*
#ifndef ONLINE_JUDGE
ifstream f1(task"inp");
ofstream f2(task"out");
#define cin f1
#define cout f2
#endif
*/

string s;
int a[11];

void init()
{
   getline(cin,s);
   int n=0;
   for (int i=0;i<s.length();i++)
       if (s[i]!=' ') 
           a[++n]=(int)(s[i]-48);
}

int BinatoDec()
{
    int tmp=1,ans=0;
    for (int i=10;i>=1;i--)
    {
        ans+=a[i]*tmp;
        tmp*=2;
    }
    tmp/=2;
    if (a[1]==1)
        ans=ans-2*tmp;
    return ans;
}

void solve()
{
    cout<<BinatoDec();
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    init();
    solve();
}
