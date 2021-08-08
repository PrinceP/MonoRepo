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
