//5.3 Next higher binary number with same number of set bits
// Next lower binary number with same number of set bits


//5.3 Next higher binary number with same number of set bits
// Next lower binary number with same number of set bits


#include<iostream>
 
using namespace std;
 
typedef unsigned int uint_t;
 
// this function returns next higher number with same number of set bits as x.
uint_t snoob(uint_t x)
{
 
  uint_t rightOne;
  uint_t nextHigherOneBit;
  uint_t rightOnesPattern;
 
  uint_t next = 0;
 
  if(x)
  {
 
    // right most set bit
    rightOne = x & -(signed)x; //Important binary operation
 
    // reset the pattern and set next higher bit
    // left part of x will be here
    nextHigherOneBit = x + rightOne;
 
    // nextHigherOneBit is now part [D] of the above explanation.
 
    // isolate the pattern
    rightOnesPattern = x ^ nextHigherOneBit;
 
    // right adjust pattern
    rightOnesPattern = (rightOnesPattern)/rightOne;
 
    // correction factor
    rightOnesPattern >>= 2;
 
    // rightOnesPattern is now part [A] of the above explanation.
 
    // integrate new pattern (Add [D] and [A])
    next = nextHigherOneBit | rightOnesPattern;
  }
 
  return next;
}
int small(int x)
{
	int t = x + 1;
	int u = t ^ x;
	int v = t & x;
	int y = v - (v & -v)/(u + 1);
	return y;
}
 
int main()
{
  int x = 156;
  cout<<"Next higher number with same number of set bits is "<<snoob(x)<<endl;
  cout<<"Previoua number with same set bits was"<<small(x)<<endl;
  return 0;
}
