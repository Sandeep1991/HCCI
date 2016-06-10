//5.7 Write a code to find the missing number in the array

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	vector<int>v;
	for(int i=0;i<t;i++)
	{
		int l;
		cin>>l;
		v.push_back(l);
	}
	int x1 = v[0];
	int x2 = 1;
	int n = v.size();
	
	for(int i=1;i<n;i++)
		x1 = x1 ^ v[i];
	for(int i=2;i<=n+1;i++)
		x2 = x2 ^ i;
	int res = x1 ^ x2;
	cout<<res<<endl;
	return 0;
}
