#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n=0;
	cin>>n;
	vector <ll> data(n);
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		data.push_back(x);
	}
	ll k=0;
	cin>>k;
	ll m=0;
	for(ll i=0;i<n-k;i++)
	{
		m=data[i];
		for(ll j=1;j<k;j++)
		{
			if(data[i+j]>m)
			{
				m=data[i+j];
			}
		}

	}
	cout<<m<<endl;
}