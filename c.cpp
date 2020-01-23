#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    cout<<n<<endl;
    int len=n.length();
    char a[50];
    char b[50];
    string X="",Y="";
    for(int i=0;i<len;i++)
    {
    if(i%2==0)
    {  a[i]=n[i];
        X=X+n[i];
    cout<<a[i];
    }//c}out<<b<<endl;
    else
    {  b[i]=n[i];
        Y=Y+n[i];
    //cout<<a<<endl;
    cout<<b[i]<<endl;
    }
}
    cout<<X<<endl;
    cout<<Y<<endl;
}