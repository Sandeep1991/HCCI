//5.6 Swap odd and even bits

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	cin>>a;
	int res;
	res = ((a & 0xaaaaaaaa) >> 1) | ((a & 0x55555555) << 1) ;
	cout<<res<<endl;
	return 0;
}
