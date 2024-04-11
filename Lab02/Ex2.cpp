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

int ieee[32];

typedef union {

    float f;
    struct
    {
        int Mantissa:23;
        int Exponent:8;
        int Sign:1;
    } tmp;
} temp;

int IeeeToFloat(int* a,int lo,int hi)
{
    int f=0;
    for (int i=hi;i>=lo;i--) 
        f+=a[i]*pow(2,hi-i);
    return f;
}

void init()
{
    memset(ieee,0,sizeof(ieee));
    char x;
    cin>>x;
    ieee[0]=(int)(x-48);
    for (int i=1;i<=31;i++)
    {
        cin>>x;
        ieee[i]=(int)(x-48);
    }
}

float forceFloat()
{
    temp ans;
    int f=IeeeToFloat(ieee,9,31);
    ans.tmp.Mantissa=f;
    f=IeeeToFloat(ieee,1,8);
    ans.tmp.Exponent=f;
    ans.tmp.Sign=ieee[0];
    return ans.f;
}

void solve()
{
    cout<<forceFloat();
}

int main()
{
	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	init();
	solve();
}
