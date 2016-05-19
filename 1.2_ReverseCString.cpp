//Implement an algo to reverse a c string (string terminated by null)
//If the string is not a C string then simply replace the check condition to true.
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

void reverse(char *c)
{
	char *end = c;
	char tmp;
	if(c)
	{
		{
			while(*end) //Can simply be while(true) if it is not a null terminated (C) string.
			end++;
		} end--;
		while(c < end)
		{
			tmp = *c;
			*c++ = *end;
			*end-- = tmp;
		}
	}
}

int main()
{
	char *c = new char[20];
	fgets(c,20,stdin);
	
	for(int i=0; i<20;i++)
	{
		cout<<c[i];
	}
	cout<<endl;
	reverse(c);
	for(int i=0; i<20;i++)
	{
		cout<<c[i];
	}
	cout<<endl;
	return 0;
}
	
	
