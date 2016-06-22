//9.5 Sorted array to find the given location of a string

#include<iostream>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
 
int search(vector<string>v, string s,int first, int last)
{
	while(first<=last)
	{
		while(first<=last && v[last]=="")
		{
			--last;
		}
		if(last<first)
		{
			return -1;
		}
		int mid = (last + first) >> 1;
		while(v[mid] == "")
		{
			++mid;
		}
		int r = v[mid].compare(s);
		if(r==0) return mid;
		if(r<0)
			first = mid + 1;
		else
			last = mid - 1;
	}
	return -1;
}
int search(vector<string>v,string s)
{
	//if(v.size()==0 || s.compare('\0')) return -1;
	if(s == "")
	{
		for(int i=0;i<v.size();i++)
		{
			if(v[i]=="") return i;
		}
		return -1;
	}
	return search(v,s,0,v.size()-1);
}
int main()
{
	vector<string>v;
	v.push_back("at");
	v.push_back("");
	v.push_back("");
	v.push_back("");
	v.push_back("ball");
	v.push_back("");
	v.push_back("car");
	string s = "ball";
	cout<<search(v,s)<<endl;
	return 0;
}
