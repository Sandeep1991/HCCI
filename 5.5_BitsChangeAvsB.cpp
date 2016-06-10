//5.5 Number of bits to be changed to convert a to b

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int c,cnt;
	for(c=a^b; c!=0;c=c>>1)
	{
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
