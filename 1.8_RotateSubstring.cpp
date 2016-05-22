//1.8 Check if the given string is a substring of another by rotation

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	if(s1.length()!=s2.length() )
	{
		cout<<"Not a substring"<<endl;
		return 0;
	}
	string s1s1;
	int found=0;
	s1s1 = s1 + s1;
	found = s1s1.find(s2);
	//cout<<found;
	if(found!=std::string::npos) cout<<"Substring"<<endl;
	else cout<<"Not a substring"<<endl;

	return 0;
}
