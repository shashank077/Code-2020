#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll n=0;
		cin>>n;
		ll temp=0;
		bool ans=false;
		vector <ll> ctr(1000,0);
		//vector <ll> num(n);
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			if(ctr[x]>=1)
			{
				ans=true;
				temp=x;

				//break;

			}
			ctr[x]+=1;

		}
		if(ans==true)
		{
			cout<<temp<<endl;
		}
		else 
		{
			cout<<"-1"<<endl;
		}

	}
}0