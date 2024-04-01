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
///*
#ifndef ONLINE_JUDGE
ifstream f1(task"inp");
ofstream f2(task"out");
#define cin f1
#define cout f2
#endif
//*/

int n;

void init()
{
   cin>>n;
}

string DectoBina(int x)
{
    string ans="";
    for (int i=9;i>=0;i--)
    {
        int k=x>>i;
        if (k&1) 
            ans+="1";
        else ans+="0";
    }
    return ans;
}

string Sign(string x)
{
    string ans=x;
    for (int i=0;i<ans.length();i++)
        if (ans[i]=='0')
            ans[i]='1';
        else ans[i]='0';
    int cur=1;
    for (int i=ans.length()-1;i>=0;i--)
    {
        int k=ans[i]-'0';
        ans[i]=(char)((k+cur)%2+48);
        cur=1-(k+cur)%2;
        if (cur==0) 
            break;
    }
    return ans;
}

string print(string x)
{
    x.insert(2," ");
    x.insert(7," ");
    return x;
}

void solve()
{
    if (n>=0)
        cout<<print(DectoBina(n));
    else cout<<print(Sign(DectoBina(abs(n))));
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    init();
    solve();
}
