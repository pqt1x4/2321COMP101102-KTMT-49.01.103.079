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

string s1,s2;
int a1[maxn], a2[maxn];

void init()
{
    cin>>s1>>s2;
}

void prepare(string& s1,string& s2)
{
    while (s1.length()<s2.length()) s1="0"+s1;
    while (s2.length()<s1.length()) s2="0"+s2;
}


string operator - (string s1,string s2)
{
    prepare(s1,s2);
    int cur=0;
    string res="";
    for (int i=s1.length()-1;i>=0;i--)
    {
        int tmp=(int)(s1[i]-48)-(s2[i]-48);
        tmp-=cur;
        if (tmp<=-1)
            cur=1,tmp=abs(tmp%2);
        else cur=0;
        char temp=(char)(tmp+48);
        res.insert(0,"0");
        res[0]=temp;
    }
    if (cur==1) 
        res="1"+res;
    return res;
}

string operator + (string s1,string s2)
{
    int cur=0;
    string ans="";
    prepare(s1,s2);
    for (int i=s1.length()-1;i>=0;i--)
    {
        int tmp=(int)(s1[i]+s2[i]-48*2);
        tmp+=cur;
        if (tmp>1)
            cur=1,tmp=abs(tmp%2);
        else if (tmp==1)
            cur=0;
        else cur=0;
        ans.insert(0,"0");
        ans[0]=(char)(tmp+48);
    }
    if (cur!=0)
        ans="1"+ans;
    return ans;
}

string operator * (string s1,string s2)
{
    string cur="";
    prepare(cur,s2);
    cur.insert(0,"0");
    cur.insert(cur.length(),s2);
    for (int i=1;i<=s2.length();i++)
    {
        if (cur[cur.length()-1]=='1')
        {
            string temp=cur.substr(1,s2.length());
            temp=temp+s1;
            cur.replace(1,s2.length(),temp);

        }
        cur.erase(cur.length()-1,1);
        cur.insert(0,"0");
    }
    cur.erase(0,1);
    return cur;
}

string operator / (string s1,string s2)
{
    string cur="";
    prepare(cur,s1);
    cur.insert(cur.length(),s1);
    for (int i=1;i<=s1.length();i++)
    {
        cur.erase(0,1);
        cur.insert(cur.length(),"0");
        string temp=cur.substr(0,s1.length());
        string tmp=temp-s2;
        if (tmp.length()>temp.length())
            continue;
        cur.replace(0,s1.length(),tmp);
        cur[cur.length()-1]='1';
    }
    cur.erase(0,s1.length());
    return cur;
}

void solve()
{
     prepare(s1,s2);
     cout<<s1<<" + "<<s2<<" = "<<s1+s2<<endl;
     cout<<s1<<" - "<<s2<<" = "<<s1-s2<<endl;
     cout<<s1<<" * "<<s2<<" = "<<s1*s2<<endl;
     cout<<s1<<" / "<<s2<<" = "<<s1/s2<<endl;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    init();
    solve();
}
