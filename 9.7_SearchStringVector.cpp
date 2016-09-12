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
