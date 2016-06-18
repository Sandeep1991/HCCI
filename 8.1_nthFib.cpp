//8.1 nth Fibonacci number
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fib(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else if(n > 1)
		return (fib(n-1)+fib(n-2));
	else
		return -1;
}

int main()
{
	int n;
	cin>>n;
	cout<<fib(n)<<endl;
	return 0;
}

/* Iterative approach
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fib(int n)
{
	if(n<0)
		return -1;
	if(n==0) return 0;
	int a = 1, b = 1,c;
	for(int i=3;i<=n;i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main()
{
	int n;
	cin>>n;
	cout<<fib(n)<<endl;
	return 0;
}
*/
