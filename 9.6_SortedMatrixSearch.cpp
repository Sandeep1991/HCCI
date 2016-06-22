//9.6 Given a matrix in which each row and column is sorted write a method to find an element in it

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
 
void search(int v[1][1], int elem)
{
	int row=0;
	int col = 1;
	while(row<2 && col>=0)
	{
		if(v[row][col]==elem){
			cout<<row<<" "<<col<<endl;
			exit(0);
		}
		else if(v[row][col]>elem){
			col--;
		}
		else
			row++;
	}
	cout<<"Not found"<<endl;
}
int main()
{
	
	int elem;
	cin>>elem;
	//int m,n;
	//cin>>m>>n;
	int v[1][1]={};
	int l;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>l;
			v[i][j]=l;
		}
	}
	search(v,elem);
	return 0;
}
