//Implement an algo to check if the string has all unique characters
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	getline(cin,s);
	vector<bool> alphabet(256);
	std::fill(alphabet.begin(),alphabet.end(),0);
	int flag=0;
	for(unsigned int i=0;i<s.length();i++)
	{
		int a = s[i];
		//cout<<a<<endl;
		if (alphabet[a] == 1)
			{
				flag = 1;
				break;
			}
		else 
		{	
			alphabet[a] = 1;
			//cout<<"true"<<endl;
		}
	}
	if(flag) cout<<"false"<<endl; 
	else cout<<"true"<<endl;
	return 0;
}
