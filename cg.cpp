#include <bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(i=a;i<=b;i++)
using namespace std;
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll N,M,i,j,p;
		cin>>N>>M;
		ll mat[N+1][M+1];
		ll point=0;
		f(i,1,N)
		{
			f(j,1,M)
			{
				cin>>mat[i][j];
			}
		}
		f(i,1,N)
        {
        f(j,1,M)
        {
            f(p,0,min(N,M))
            {
                if(i-p>=1&&i+p<=N && j-p>=1 && j+ p <=M)
                {
                    if(mat[i-p][j]==mat[i+p][j]&&mat[i][j-p]==mat[i][j+p])
                    {
                        point+=1;
                    }
                    else 
                        break;
                }
            }
        }
    }
     cout<<point<<endl;
	}
}