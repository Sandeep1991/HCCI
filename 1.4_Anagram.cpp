//1.4 Check whether two strings are anagrams 
// 1. Without using the sort O(n) solution
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	vector<int>v(256);
	std::fill(v.begin(),v.end(),0);
	for(unsigned int i=0; i<s1.length();i++)
	{
		v[s1[i]] = v[s1[i]] + 1;
	}
	unsigned int cnt =0;
	for(unsigned int i=0;i<s2.length();i++)
	{
		if(v[s2[i]] == 0){
			cout<<"Not anagram"<<endl;
			return 0;
		}
		else {
			v[s2[i]] = v[s2[i]] - 1;
			cnt++;
		}
	}
	if(cnt == s1.length())
	{
		cout<<"Anagram"<<endl;
	}
	else
	{
		cout<<"Not Anagram"<<endl;
	}
	return 0;
} 

//2. By sorting 
//1.4 Check whether two strings are anagrams

#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	//vector<int>s1(5);
	//vector<int>s2;
	//for(int i=0;i<5;i++)
	/*{
		char c;
		cin>>c;
		//if(c == '\n') break;
		s1.push_back(int c);
	}*/
	/*for(int i=0;i<25;i++)
	{
		char c;
		cin>>c;
		if(c == '\n') break;
		s2.push_back(c);
	}*/
	//int z = sizeof(s1)/sizeof(s1[0]);
	//int z1 = sizeof(s2)/sizeof(s2[0]);
	//sort(s1, s1 + z);
	//sort(s2, s2 + z1);
	//sort(s1.begin(), s1.end());
	//sort(s2.begin(), s2.end());
	/*if(s1.size() == s2.size())
	//{
		for(unsigned int i=0;i<s1.size();i++)
		{
			if(s1[i] != s2[i]) 
			{
				cout<<"Not Anagram"<<endl;
				return 0;
			}
			else;
		}
		cout<<"Anagram"<<endl;
		return 0;
	}
	else cout<<"Not Anagram"<<endl;
	return 0;
}*/
	//for(int i=0;i<5;i++)
		//cout<<s1[i];
//}
	string s;
	cin>>s;
	string s1;
	cin>>s1;
	vector<int> v;
	vector<char> c;
	for(unsigned int i=0;i<s.length();i++)
		v.push_back((int) s[i]);
	sort(v.begin(),v.end());
	for(unsigned int i=0;i<s.length();i++)
		c.push_back((char) v[i]);
	//for(unsigned int i=0;i<s.length();i++)
		//cout<<c[i]<<" ";
	
	
	vector<int> v1;
	vector<char> c1;
	for(unsigned int i=0;i<s1.length();i++)
		v1.push_back((int) s1[i]);
	sort(v1.begin(),v1.end());
	for(unsigned int i=0;i<s1.length();i++)
		c1.push_back((char) v1[i]);
		
	//for(unsigned int i=0;i<s.length();i++)
		//cout<<c1[i]<<" ";	
		
	if(s.length() != s1.length()) {
		cout<<"Not Anagram"<<endl;
		return 0;
	}
	unsigned int cnt=0;
	for(unsigned int i=0; i<s1.length();i++)
	{
		if(v[i] == v1[i]) 
		{
		//cout<<"Not Anagram"<<endl;
		//return 0;
		 cnt++;
		}
	}
	if(cnt==s1.length())
	cout<<"Anagram"<<endl;
	else cout<<"Not Anagram"<<endl;
	return 0;
}

