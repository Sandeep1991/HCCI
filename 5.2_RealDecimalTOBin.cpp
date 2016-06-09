//5.2 Binary representation of a string passed as a string if not possible print "ERROR"

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	double n;
	cin>>n;
	//int flag = 0;
	//string intP,intf="0.";
	//string::size_type sz;
	//num = stof(n,&sz);
	//cout<<num<<endl;
	double frac_part;
	double int_part;
	frac_part = modf(n,&int_part);
	//cout<<int_part<<" "<<frac_part<<endl;
	
	string bin = "";
	int intpart = int(int_part);
	while(intpart)
	{
		int r = intpart % 2;
		intpart >>= 1;
		bin = to_string(r) + bin;
	}
	
	//Fractional part
	
	string dec_string;
	double intfloat = frac_part;
	while(intfloat>0)
	{
		if(dec_string.length()>32)
		{
			cout<<"Error"<<endl;
			return 0;
		}
		double intr;
		double check = modf(intfloat,&intr);
		intfloat = check; 
		if(intr==1)
		{
			dec_string = dec_string + "1";
		}
		double r = intfloat * 2;
		if(r>=1)
		{
			dec_string = dec_string + "1";
			intfloat = r - 1;
		}
		else
		{
			dec_string = dec_string + "0";
			intfloat = r;
		}
	}		
		
	//cout<<dec_string<<endl;		
	cout<<bin<<"."<<dec_string<<endl;
	return 0;
}
