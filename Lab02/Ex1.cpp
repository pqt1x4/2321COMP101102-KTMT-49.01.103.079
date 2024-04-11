/* Author: Phan Thi Quy Thinh - 49.01.103.079 */
/* 2321COMP101102 */

#include<bits/stdc++.h>
#define task "task."
using namespace std;

#define maxn 109
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

typedef pair<int,string> is;
float x;

void init()
{
	cin>>x;
}

string DecToBina(int n)
{
    string ans="";
    for (int i=31;i>=0;i--)
    {
        int k=n>>i;
        if (k&1) ans+="1";
        else ans+="0";
    }
    while (ans[0]=='0') ans.erase(0,1);
    return ans;
}

string GetBitSign(float x)
{
    return (x<0) ? "1" : "0";
}

string DbToBina(float x)
{
    string ans="";
    while (x>0 && ans.size()<32)
    {
        x*=2;
        int temp=trunc(x);
        ans+=(char)(temp+48);
        x-=temp;
    }
    return ans;
}

string Calc_First(float x)
{
    x=abs(x);
    int pre=trunc(x);
    float nex=(float)(x-pre);
    string ans=DecToBina(pre)+"."+DbToBina(nex);
    return ans;
}

is Calc_Second(string s)
{
    int cur=s.find(".")-1;
    bool check=false;
    for (int i=1;i<=cur;i++)
        if (s[i]=='1')
        {
            check=true;
            break;
        }
    if (check==true)
    {
        s.erase(cur+1,1);
        s.erase(0,1);
    }
    else
    {
        int cnt=0;
        int pos=cur+1+1;
        while (s[pos]!='1')
        {
            cnt++;
            pos++;
        }
        s.erase(0,pos+1);
        cur=cnt+1;
        cur*=-1;
    }
    return {cur,s};
}

string GetBitExponent(int x)
{
    string ans=DecToBina(x+127);
    while (ans.size()<8)
        ans="0"+ans;
    return ans;
}

string GetBitMantissa(string s)
{
    while (s.length()<23) s+="0";
    return s;
}

string dumpFloat(float x)
{
    string ans=GetBitSign(x)+" ";
    is tmp=Calc_Second(Calc_First(x));
    ans+=GetBitExponent(tmp.fi)+" "+GetBitMantissa(tmp.se);
    return ans;
}

void solve()
{
    cout<<dumpFloat(x);
}

int main()
{
	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	init();
	solve();
}
