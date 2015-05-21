#include "tictactoe.h"

using namespace std;

bool tictactoe::validmove(int x, int y) {
	if (!board[x-1][y-1].fill) {
		return false;
	}

	if ( 
		x >= 1 || x < 4 ||
		y >= 1 || y < 4
		) {
		return true;
	}

	cout << "Make a valid move!" << '\n';
	return false;
}

void tictactoe::makemove(int x, int y, char input) {
	if (validmove(x,y)) {
		board[x-1][y-1].val = input;
		board[x-1][y-1].fill = true;
	}

	return;
}


void tictactoe::printboard(){
	for (int i=0; i < 3; i++) {
		for (int j =0; j<3; j++) {
			cout << board[i][j].val << '|';
		}
		cout << '\n';
	}
}

bool tictactoe::victory() {
	return false;
}


int main() {
	char move;
	tictactoe game;
	
	while (!game.victory()) {
	}
	return 0;
}