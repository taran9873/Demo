#include <bits/stdc++.h>
using namespace std;
#define n 8
bool isSafe(int x, int y, int sol[n][n])
{
	/* x and y must be greater than or equal to 0 and sol[x][y] must be -1 
	because condition in our question is every block on board must be visited only once */
	if (x >= 0 && x < n && y >= 0 && y < n && sol[x][y] == -1)
	{
		return true;
	}
	return false;
}
bool KnightTourUtil(int x, int y, int movei, int sol[n][n], int movex[8], int movey[8])
{
	int k, next_x, next_y;
	if (movei == n * n)
		// we have reached last move, that means we have solved so just return true from here
		return true;

	/* Try all next moves from  
    the current coordinate x, y */
	for (k = 0; k < 8; k++)
	{
		next_x = x + movex[k];
		next_y = y + movey[k];
		// if its a valid move then we continue else we move one step back
		if (isSafe(next_x, next_y, sol))
		{
			sol[next_x][next_y] = movei;
			if (KnightTourUtil(next_x, next_y, movei + 1, sol, movex, movey))
				return true;
			else
				// backtracking
				sol[next_x][next_y] = -1;
		}
	}
	return false;
}
// we are given chess board of 8*8
void KnightTour()
{
	int sol[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sol[i][j] = -1;
		}
	}
	// filling solution array with -1 and initially knight is at sol[0][0] so sol[0][0]=0;
	sol[0][0] = 0;
	// all possible moves , do dry run to know all possible moves by a knight
	int movex[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
	int movey[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
	// paras -> current x,current y ,movei i.e next move number,sol array,movex,movey
	if (KnightTourUtil(0, 0, 1, sol, movex, movey))
	// if we find a solution , we print it
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "solution doesn't exist" << endl;
	}
}

int main()
{
	KnightTour();
	return 0;
}