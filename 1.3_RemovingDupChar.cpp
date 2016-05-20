//Implement an algo to remove duplicate characters in a given string
//1. Making use of extra bool vector complexity is O(N)
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;


int main()
{
	char *c = new char[20];
	fgets(c,20,stdin);
	//removeDup(c);
	vector<int> v(256);
	vector<char> ndup(20);
	std::fill(v.begin(),v.end(),0);
	int j=0;
	for(int i=0; i<20;i++)
	{
		if(v[c[i]] == 1);
		else
			{
				v[c[i]] = 1;
				ndup[j] = c[i];
				j++;
			}	
	}
	for(unsigned int i=0;i<ndup.size();i++)
	{
		cout<<ndup[i];
	}
	cout<<endl;
	return 0;
}
	
//2. Using only extra variables complexity is O(N^2)

