//8.2 Possible paths for traversing an n x n grid from top left corner to the bottom right corner.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int paths(int x,int y)
{
	int m=x, n=y;
	if(m==1||n==1)
		return 1;
	return paths(m-1,n) + paths(m,n-1);
}

int main()
{
	int n,m;
	cin>>n>>m;
	cout<<paths(n,m)<<endl;
	return 0;
}
