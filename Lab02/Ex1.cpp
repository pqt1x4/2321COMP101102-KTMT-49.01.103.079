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

typedef union 
{
	float f;
	struct
	{
		int Mantissa:23;
		int Exponent:8;
		int Sign:1;
	} tmp;
} temp;

float x;

void init()
{
	cin>>x;
}

void DecToBina(int n,int i)
{
	for (int k=i-1;k>=0;k--) 
	{
		if ((n>>k)&1)
			cout<<"1";
		else
			cout<<"0";
	}
}

void dumpFloat(float x)
{
	temp a;
	a.f=x;
	cout<<a.tmp.Sign<<" ";
	DecToBina(a.tmp.Exponent,8);
	cout<<" ";
	DecToBina(a.tmp.Mantissa,23);
}


void solve()
{
    dumpFloat(x);
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    init();
    solve();
}
