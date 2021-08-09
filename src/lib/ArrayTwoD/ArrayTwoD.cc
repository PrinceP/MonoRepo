#include "ArrayTwoD.h"

std::string ArrayTwoD::getArrayTwoDSpiralMessage(int TwoDArray[][10], int n, int m){

	int startRow = 0, startCol = 0;
	int endRow = n-1, endCol = m-1;

	while(startRow <= endRow && startCol <= endCol ){

		//Print 1st Left
		for(int i = startCol; i <= endCol; i++){
			std::cout << TwoDArray[startRow][i] << " ";
		}

		//Print 2nd Down
		for(int i = startRow+1; i <= endRow; i++){
			std::cout << TwoDArray[i][endCol] << " ";
		}

		//Print 3rd Right
		for(int i = endCol - 1; i >= startCol; i--){
			if(startRow == endRow){
				break;
			}
			std::cout << TwoDArray[endRow][i] << " ";
		}

		//Print 4th Up
		for(int i = endRow - 1; i >= startRow+1; i--){
			if(startCol == endCol){
				break;
			}
			std::cout << TwoDArray[i][startCol] << " ";
		}
		startRow++;
		startCol++;
		endRow--;
		endCol--;
	}
	return "";
}

 std::vector<int> ArrayTwoD::getArrayTwoDWaveMessage(int n, int m, std::vector<std::vector<int>> arr){

	int startRow = 0, startCol = 0;
	int endRow = n-1, endCol = m-1;
	int i = endCol;
	std::vector<int> res;

	while(i >= startCol){

		if(i % 2){
			//Down
			for(int j = startRow; j <= endRow; j++){
				res.push_back(arr[j][i]);
			}
		}else{
			//Up
			for(int j = endRow; j >= startRow; j--){
				res.push_back(arr[j][i]);
			}
		}
		i--;	
	}
	return res;
}

 std::vector<int> ArrayTwoD::getArrayTwoDStaircaseMessage(int n, int m, std::vector<std::vector<int>> arr, int key){

	int x = 0;
	int y = m-1;
	std::vector<int> res;

	while(x <= n - 1 || y >= 0){

		if(arr[x][y] == key){
			std::cout << x << " " << y << std::endl; 
			return res; 
		}else if(arr[x][y] > key){
			y--;
		}
		else{
			x++;
		}

	}
	std::cout << "Not FOUND"<< std::endl; 
	return res;
}

//C(line, i) = C(line, i-1) * (line - i + 1) / i
// Pascal triangle
std::vector<std::vector<int>> printPascal(int n){
	
	std::vector<std::vector<int>> result;
	
	for (int line = 1; line <= n; line++){
		int C = 1; // used to represent C(line, i)
		std::vector<int> row;
		for (int i = 1; i <= line; i++){
			// The first value in a line is always 1
			std::cout<< C<<" ";
			row.push_back(C);
			C = C * (line - i) / i;
		}
		result.push_back(row);
		std::cout<<"\n";
	}
	return result;
}

// Submatrix sum
// M rows N columns
int preProcess(std::vector<std::vector<int>> mat, std::vector<std::vector<int>> &aux, int M, int N)
{
   // Copy first row of mat[][] to aux[][]
   for (int i=0; i<N; i++)
      aux[0][i] = mat[0][i];
  
   // Do column wise sum
   for (int i=1; i<M; i++)
      for (int j=0; j<N; j++)
         aux[i][j] = mat[i][j] + aux[i-1][j];
  
   // Do row wise sum
   for (int i=0; i<M; i++)
      for (int j=1; j<N; j++)
         aux[i][j] += aux[i][j-1];
    return 1;
}


int sum(std::vector<std::vector<int>> v, int tli, int tlj, int rbi,
                                              int rbj){
    // your code goes here
    int M = v.size();
	int N = v[0].size();
	
    std::vector<std::vector<int>> aux( M , std::vector<int> (N, 0));
    
	
	preProcess(v, aux, M, N);

	int res = aux[rbi][rbj];

	 // Remove elements between (0, 0) and (tli-1, rbj)
    if (tli > 0)
       res = res - aux[tli-1][rbj];
  
    // Remove elements between (0, 0) and (rbi, tlj-1)
    if (tlj > 0)
       res = res - aux[rbi][tlj-1];
  
    // Add aux[tli-1][tlj-1] as elements between (0, 0)
    // and (tli-1, tlj-1) are subtracted twice
    if (tli > 0 && tlj > 0)
       res = res + aux[tli-1][tlj-1];

	return res;
}