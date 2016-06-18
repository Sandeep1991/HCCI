//8.3 Generate all subsets of a given set

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> getSubsets(vector<int>v)
{
	vector<vector<int>> allsubsets;
	int max = 1 << v.size();
	for(int i=0;i<max;i++)
	{
		vector<int> subset;
		int k = i;
		int index = 0;
		while(k>0)
		{
			if((k&1)>0)
			{
				subset.push_back(v[index]);
			}
			k>>=1;
			index++;
		}
		allsubsets.push_back(subset);
	}
	for(int i=0;i<allsubsets.size();i++)
	{
		for(int j=0;j<allsubsets[i].size();j++)
		{
			cout<<allsubsets[i][j]<<" ";
		}
		cout<<endl;
	}
	return allsubsets;
}

int main()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	vector<vector<int>>res;
	res = getSubsets(v);
	
	return 0;
}
