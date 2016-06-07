//5.1 Set all bits between i and j in N equal to M
#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main()
{
	int max = 0b0;
	max = ~max;
	//bitset<32> res(max);
	//cout<<res<<endl;
	int left = max - ((1<<6)-1);
	bitset<32> res(left);
	int right = ((1<<2)-1);
	bitset<32> res1(right);
	cout<<res<<endl;
	cout<<res1<<endl;
	int mask = left | right;
	bitset<32> res2(mask);
	cout<<res2<<endl;
	int out = (0b10000000000 & mask) | (0b10101 << 2);
	bitset<32> res3(out);
	cout<<res3<<endl;
	return 0;	
}
