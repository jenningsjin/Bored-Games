#include "sudoku.h"

//Sudokuclass::
Sudokuclass::Sudokuclass(){
	for (int i =0; i < 9; i++){
		for (int j = 0; j < 9; j++) {
			board[i][j] = -1;
		}
	}
}

bool Sudokuclass::boundcheck(int x, int y) {
	return x < 10 && x > 0 && y < 10 && y > 0;
}

bool Sudokuclass::rowcheck(int x, int y){
	bool arr[9] = {false};

	for (int i = 1; i < 9; ++i) {
		if (board[x-1][i-1] != -1 ) {
			arr[i-1]= true;
		}
	}


	for (int i = 0; i<9; ++i) {
		if(arr[i] == false) return false;
	}
	return true;
}

bool Sudokuclass::columncheck(int x, int y) {
	bool arr[9] = {false};

	for (int i = 1; i < 9; ++i) {
		if (board[i-1][y-1] != -1 ) {
			arr[i-1]= true;
		}
	}


	for (int i = 0; i<9; ++i) {
		if(arr[i] == false) return false;
	}
	return true;
}


bool Sudokuclass::squarecheck(int x, int y){
	//int xend = (x/3)*3;
	//int yend = (y/3)*3;

	return true;
}


bool Sudokuclass::validcheck(int x, int y) {
	return false;
}	