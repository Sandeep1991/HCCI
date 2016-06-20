//8.4 All permutations of a string 
#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long int ul;

using namespace std;

vector<string> permute(string a, int l, int r)
{
	int i;
	vector<string>v;
	if (l==r)
	{
		v.push_back(a);
	}
	else
	{
		for(i=l;i<=r;i++)
		{
			swap(a[l],a[i]);
			permute(a, l+1, r);
			swap(a[l],a[i]);
		}
	}
	for(unsigned int i=0; i< v.size();i++)
		cout<<v[i]<<" ";
	return v;
}

int main()
{
	string a = "abc";
	int n = a.length();
	permute(a, 0, n-1);
	vector<string>::iterator it;
	return 0;
}
