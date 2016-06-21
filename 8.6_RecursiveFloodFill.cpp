//8.6 Paint fill using recursion //Also known as flood fill algorithm
#include <iostream>
#include <bits/stdc++.h>

#define M 8
#define N 8
using namespace std;

void floodFilUtility(int screen[][8], int x, int y, int prevC, int newC)
{
	if(x<0 || x>= M|| y<0 ||y>=N)
		return;
	if(screen[x][y] != prevC)
		return;
	screen[x][y] = newC;
	//Need to do recursion for all attached pixels
	floodFilUtility(screen, x+1, y, prevC, newC);
	floodFilUtility(screen, x-1, y, prevC, newC);
	floodFilUtility(screen, x, y+1, prevC, newC);
	floodFilUtility(screen, x, y-1, prevC, newC);
}
		
void floodFill(int screen[][N], int x, int y, int newC)
{
	int prevC = screen[x][y];
	floodFilUtility(screen, x, y, prevC, newC);
}

int main()
{
    int screen[M][N] = {{1, 1, 1, 1, 1, 1, 1, 1},
                      {1, 1, 1, 1, 1, 1, 0, 0},
                      {1, 0, 0, 1, 1, 0, 1, 1},
                      {1, 2, 2, 2, 2, 0, 1, 0},
                      {1, 1, 1, 2, 2, 0, 1, 0},
                      {1, 1, 1, 2, 2, 2, 2, 0},
                      {1, 1, 1, 1, 1, 2, 1, 1},
                      {1, 1, 1, 1, 1, 2, 2, 1},
                     };
    int x = 4, y = 4, newC = 3;
    floodFill(screen, x, y, newC);
 
    cout << "Updated screen after call to floodFill: \n";
    for (int i=0; i<M; i++)
    {
        for (int j=0; j<N; j++)
           cout << screen[i][j] << " ";
        cout << endl;
    }
}  	
 
