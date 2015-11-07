#include <utility>
#include "tictactoe.h"

using namespace std;

bool tictactoe::validmove(int x, int y) {
	if (board[x-1][y-1].fill) {
		return false;
	}

	if ( 
		x >= 1 && x < 4 &&
		y >= 1 && y < 4
		) {
		return true;
	}

	cout << "Make a valid move!" << '\n';
	return false;
}


void tictactoe::makemove(int x, int y, char input) {
	if (validmove(x,y)) {
		cout << "move made" << endl;
		board[x-1][y-1].val = input; 
		board[x-1][y-1].fill = true;
		return;
	}

	cout << "move not made" << endl;
	return;
}


void tictactoe::printboard(){
	for (int i=0; i < 3; i++) {
		cout << '|';
		for (int j =0; j<3; j++) {
			cout << board[i][j].val << '|';
		}
		cout << '\n';
	}
}

bool tictactoe::victory() {
	//check horizontal
	//check vertical
	//check 
	return false;
}


int main() {
	char move;
	pair<int,int> playerMove;
	tictactoe game;
	while (!game.victory()) {

		game.printboard();
		cout << "MAKE YOUR MOVE X: ";
		move = 'x';
		cin >> playerMove.first >> playerMove.second;
		game.makemove(playerMove.first, playerMove.second, move);
		
		game.printboard();
		cout << "MAKE YOUR MOVE O: ";
		move = 'o';
		cin >> playerMove.first >> playerMove.second;
		game.makemove(playerMove.first, playerMove.second, move);
	}
	return 0;
}