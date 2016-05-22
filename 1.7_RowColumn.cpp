//1.7 MxN matrix transform entire row and column to zero if an element is zero in a particular row and column

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;  //int m; cin>>m; can be used for an m x n  matrix.
	vector< vector<int> > v(n,vector<int>(n));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int l;
			cin>>l;
			v[i][j] = l;
		}
	}
	vector<int>c(n);
	vector<int>r(n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(v[i][j]==0)
			{
				c[j] = 1;
				r[i] = 1;
				}	
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(c[j]==1 || r[i] == 1)
			{
				v[i][j] = 0;
				}	
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
