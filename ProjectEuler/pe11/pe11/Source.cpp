#include<iostream>
#include<fstream>

using namespace std;


int horzCheck(int grid[20][20]){
	int largestproduct = 0;
	int product = 0;
	int x;
	int y;
	for(x=0;x<16;x++){
		for(y=0;y<20;y++){
			product = grid[x][y] * grid[x+1][y] * grid [x+2][y] * grid[x+3][y];
			if(product>largestproduct){
				largestproduct = product;
			}
		}
	}
	return largestproduct;
}

int vertCheck(int grid[20][20]){
	int largestproduct = 0;
	int product = 0;
	int x;
	int y;
	for(x=0;x<20;x++){
		for(y=0;y<16;y++){
			product = grid[x][y] * grid[x][y+1] * grid [x][y+2] * grid[x][y+3];
			if(product>largestproduct){
				largestproduct = product;
			}
		}		
	}

	return largestproduct;
}

int leftDCheck(int grid[20][20]){
	int largestproduct = 0;
	int product = 0;
	int x;
	int y;
	for(x=3;x<20;x++){
		for(y=0;y<16;y++){
			product = grid[x][y] * grid[x-1][y+1] * grid [x-2][y+2] * grid[x-3][y+3];
			if(product>largestproduct){
				largestproduct = product;
			}
		}
	}
	return largestproduct;
}

int rightDCheck(int grid[20][20]){
	int largestproduct = 0;
	int product = 0;
	int x;
	int y;
	for(x=0;x<16;x++){
		for(y=0;y<16;y++){
			product = grid[x][y] * grid[x+1][y+1] * grid [x+2][y+2] * grid[x+3][y+3];
			if(product>largestproduct){
				largestproduct = product;
			}
		}
	}
	return largestproduct;
}

int main() {
	ifstream inGrid;
	inGrid.open("grid.txt");

	int largestProduct = 0;
	int returnProduct = 0;
	int grid[20][20];

	int x;
	int y;

	for(x=0;x<20;x++){
		for(y=0;y<20;y++){
			inGrid >> grid[x][y];
		}
	}
	largestProduct = horzCheck(grid);

	returnProduct = vertCheck(grid);

	if(returnProduct > largestProduct)
		largestProduct = returnProduct;

		returnProduct = leftDCheck(grid);

	if(returnProduct > largestProduct)
		largestProduct = returnProduct;
	
		returnProduct = rightDCheck(grid);

	if(returnProduct > largestProduct)
		largestProduct = returnProduct;

	cout << largestProduct << endl;
	
	return 0;
}