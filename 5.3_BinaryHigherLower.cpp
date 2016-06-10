//5.3 Next higher binary number with same number of set bits
// Next lower binary number with same number of set bits


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	string t = s;
	int flag=0;
	for(unsigned int i=1;i<s.length()&&!flag;i++)
	{
		if(s[i]=='1' && s[i-1]=='0')
		{
			s[i]='0';
			s[i-1] = '1';
			flag = 1;
		} 
	}
	cout<<s<<endl;
	int flag1=0;
	for(unsigned int i=1;i<t.length()&&!flag1;i++)
	{
		if(t[i]=='0' && t[i-1]=='1')
		{
			t[i]='1';
			t[i-1] = '0';
			flag1 = 1;
		} 
	}
	cout<<t<<endl;
	return 0;
	
}
