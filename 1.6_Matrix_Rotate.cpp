//1.6 Rotate the image (NXN) matrix by 90 degree.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
	vector<vector<int> >v(3,vector<int>(3));
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			int l;
			cin>>l;
			v[i][j] = l;
		}
	}

	for(int i=0;i<3/2;++i)
	{
		int first = i;
		int last = 3 - 1 - i; 
		for(int j=first;j<last;++j)
		{
			int offset = j - first;
			int top = v[first][j];//save top
			//left -> top
			v[first][j] = v[last-offset][first];
			//bottom -> left
			v[last-offset][first] = v[last][last-offset];
			//right -> bottom
			v[last][last-offset] = v[j][last];
			//top -> right
			v[j][last] = top;
		}
	}
	/*
	vector< vector<int> > r(3, vector<int>(3));
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++) //               1 2 3        7 4 1 
		{                    //               4 5 6    =>  8 5 2   Space is O(2n) so more for this approach   
			r[j][i] = v[2-i][j];//            7 8 9        9 6 3    although easier and quicker to think of. 
		}                       // All 3s for vector size can be replaced by n.
	}*/
	
	
	
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<v[i][j]<<" ";
		}cout<<endl;
	}
	return 0;
}
