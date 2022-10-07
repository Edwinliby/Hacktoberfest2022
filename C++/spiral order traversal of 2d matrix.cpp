#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>a[i][j];
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<m;j++)
			{
				cout<<a[i][j]<<" ";
			
			}	
		}
		else
		{
			for(int j=m-1;j>=0;j--)
			{
				cout<<a[i][j]<<" ";
			
			}
		}	
	}
}
