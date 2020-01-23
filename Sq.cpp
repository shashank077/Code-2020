#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll a,b,c=0;
	cin>>a>>b;
	c=floor(sqrt(b))-ceil(sqrt(a))+1;
	cout<<c<<endl;
}