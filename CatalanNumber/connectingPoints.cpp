#include<bits/stdc++.h>
using namespace std;
int connectingPoints(int n)
{
	if(n&1)return 0;
	n/=2;
	unsigned long long point[n+1];
	point[0]=point[1] = 1;
	
	for(int i=2 ;i<=n ;++i )
	{
		point[i]=0;
		for(int j=0 ;j<i ;++j)
		{
			point[i]+= point[j]*point[i-(j+1)];
			point[i]%=1000000007;
		}
	}
	return point[n];
}
int main()
{
        cout<<connectingPoints(6);
}
