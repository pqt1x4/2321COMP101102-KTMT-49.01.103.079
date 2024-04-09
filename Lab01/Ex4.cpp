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
void init()
{

}

void PrintBina()
{
    cout<<"-----BINARY-----"<<endl;
    cout<<"SHORT MIN: "<<bitset<16>(SHRT_MIN)<<endl;
    cout<<"SHORT MAX: "<<bitset<16>(SHRT_MAX)<<endl;
    cout<<"INT MIN: "<<bitset<32>(INT_MIN)<<endl;
    cout<<"INT MAX: "<<bitset<32>(INT_MAX)<<endl;
    cout<<"LONG LONG MIN: "<<bitset<64>(LONG_MIN)<<endl;
    cout<<"LONG LONG MAX: "<<bitset<64>(LONG_MAX)<<endl;
    cout<<"----------------"<<endl;
}

void PrintDec()
{
    cout<<"-----DECIMAL-----"<<endl;
    cout<<"SHORT MIN: "<<static_cast<int16_t>(bitset<16>(SHRT_MIN).to_ulong())<<endl;
    cout<<"SHORT MAX: "<<bitset<16>(SHRT_MAX).to_ulong()<<endl;
    cout<<"INT MIN: "<<static_cast<int32_t>(bitset<32>(INT_MIN).to_ulong())<<endl;
    cout<<"INT MAX: "<<bitset<32>(INT_MAX).to_ulong()<<endl;
    cout<<"LONG LONG MIN: "<<bitset<64>(LLONG_MIN).to_ullong()<<endl;
    cout<<"LONG LONG MAX: "<<static_cast<int64_t>(bitset<64>(LLONG_MIN).to_ullong())<<endl;
    cout<<"----------------"<<endl;
}

void solve()
{
    PrintBina();
    PrintDec();    
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    init();
    solve();
}
