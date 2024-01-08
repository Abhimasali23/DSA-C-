#include <iostream>
using namespace std;
#define N 9


void print(int arr[N][N])
{
    
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) {
			cout << arr[i][j] << " "; 
            if(j == 2 || j == 5) {
                cout<<" | ";
            }           
        }
        if(i == 2 || i == 5)
            cout<<"\n-----------------------";
        cout<<endl;
	}
    cout<<endl;
}


bool isSafe(int grid[N][N], int row, int col, int val) {
    
    for(int i=0;i<N;i++) {

        // row check
        if(grid[row][i] == val) 
            return false;

        // col check
        if(grid[i][col] == val) 
            return false;
        
        // 3*3 matrix
        if(grid[3*(row/3)+i/3][3*(col/3)+i%3] == val) 
            return false;

    }
    return true; 
}


bool solveSudoku(int grid[N][N], int row, int col)
{

	if (row == N - 1 && col == N)
		return true;

	if (col == N) {
		row++;
		col = 0;
	}

	if (grid[row][col] > 0)
		return solveSudoku(grid, row, col + 1);

	for (int num = 1; num <= N; num++) {

		if (isSafe(grid, row, col, num)) {
		    
			grid[row][col] = num;

			if (solveSudoku(grid, row, col + 1))
				return true;
		}

		grid[row][col] = 0;
	}
	return false;
}


int main() {
	
	int grid[N][N] = { {0, 2, 0, 0, 9, 6, 0, 0, 1},
	                   {7, 9, 4, 0, 5, 1, 8, 0, 0}, 
	                   {0, 0, 6, 4, 7, 0, 0, 2, 5},
	                   {8, 7, 2, 1, 3, 0, 5, 6, 0},
	                   {1, 0, 5, 0, 0, 7, 0, 8, 4},
	                   {4, 6, 9, 0, 2, 5, 3, 1, 0},
	                   {0, 0, 7, 6, 0, 9, 0, 5, 3},
	                   {0, 0, 0, 7, 8, 3, 4, 9, 0},
	                   {9, 4, 3, 0, 1, 0, 6, 0, 8} };
					
	cout<<"\n Unsolved Suduku\n"<<endl;
    print(grid);
	
	cout<<"\n Solved Suduku\n"<<endl;

	if (solveSudoku(grid, 0, 0))
		print(grid);
	else
		cout << "no solution exists " << endl;

	return 0;
	
}
