// Problem: C. Tourist Problem
// Contest: Codeforces - Codeforces Round 198 (Div. 2)
// URL: https://codeforces.com/problemset/problem/340/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
    return b? gcd(b, a % b): a;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<ll>a;
	ll n;
	cin>>n;
	for(int i=0;i<n;i++){
		ll t;
		cin>>t;
		a.push_back(t);
	}
	sort(a.begin(),a.end());
	ll res=0;
	for(int i=0;i<n;i++){
		res+=(2*n-1-4*(n-i-1))*a[i];	
	}
	ll t=gcd(res,n);
	cout<<res/t<<' '<<n/t;
	
	return 0;
}