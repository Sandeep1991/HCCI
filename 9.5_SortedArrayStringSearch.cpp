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
/* Second version
//Given a sorted array of strings interspersed with empty strings write a method to find the location of the strings.
//find ball in ["at"," "," "," ","ball"," ","car"," ","dad"," "," "] will return 4.


#include <bits/stdc++.h>

using namespace std;

int fsearch(vector<string>&v, string s,int f,int l)
{
	while(f<=l)
	{
		while(f<=l&&v[l]==" ")
			--l;
	
	if(l<f)
		return -1;
	int mid = (l + f)/2;
	while(v[mid]==" ")
	{
		mid++;
	}
	int r = s.compare(v[mid]);
	//cout<<r<<endl;
	if(r==0) return mid;
	else if(r>0) f = mid + 1;
	else if(r<0) l = mid - 1;
    }
    return -1;
}
	

int search(vector<string>&v, string s)
{
	if(v.size()==0||s.length()==0)
		return 0;
	if(s.compare(" ")==0)
	{
		for(int i=0;i<(int)v.size();i++)
			if(v[i].compare(" ")==0)
				return i;
		return -1;
	}
	return fsearch(v,s,0,(int)v.size()-1);
}


int main()
{
	int n;
	cin>>n;
	vector<string>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	string s;
	cin>>s;
	cout<<search(v,s)<<endl;
	return 0;
}
*/
