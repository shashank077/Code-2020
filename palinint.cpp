#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int A;
	cin>>A;
	int rev=0;
	for(int i=A;i!=0;i=i/10)
	{
		int d=i%10;
		rev=(rev*10)+d;
	}
	cout<<rev<<endl;
	if(rev==A)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
}