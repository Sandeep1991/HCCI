//8.4 Print all permutations of valid open and close parenthesis 
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void _parenthesis(int pos, int n, int open, int close);

void parenthesis(int n)
{
	if(n>0)
		_parenthesis(0,n,0,0);
	else
		return;
}
void _parenthesis(int pos, int n, int open,int close)
{
	static char s[100];
	//vector<string> v;
	if(close==n)
	{
		cout<<s<<" ";
		return;
	}
	else
	{
		if(open>close)
		{
			s[pos]= '}';
			_parenthesis(pos+1,n,open,close+1);
		}
		if(open<n)
		{
			s[pos] = '{';
			_parenthesis(pos+1,n,open+1,close);
		}
	}
	//for(unsigned int i=0;i<v.size();i++)
		//cout<<v[i]<<" ";
}

int main()
{
	int n;
	cin>>n;
	parenthesis(n);
	return 0;
}
