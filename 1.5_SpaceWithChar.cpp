//1.5 Replace all spaces in a string with "%20"
#include<iostream>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	getline(cin,s);
	vector<char>v;
	int length = s.length();
	int length1 = length;
	for(int i=0;i<length;i++)
	{
		if(s[i]==' ')
			{
				v.push_back('%');
				v.push_back('2');
				v.push_back('0');
				length1 = length1 + 3;
			}
		else
			v.push_back(s[i]);
	}
	for(int i=0;i<length1;i++)
	{
		cout<<v[i];
	}
}
