#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	const unsigned int M = 1000000007; 
    ll T;
	cin>>T;
	while(T--)
	{
	 ll L,R;
     cin>>L>>R;
     ll anx=L;
     ll res=0;
     for(ll i=L+1;i<=R;i++)
     {
        anx=anx & i;
        res=res+anx;
     }
    res=L+(res%M);
    cout<<res<<endl;
}
     
}
