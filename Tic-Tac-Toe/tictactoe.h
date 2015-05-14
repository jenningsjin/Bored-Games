#include <iostream>

struct space{
	char val;
	bool fill;

	space() {
		val = 'n';
		fill = false;
	}
};

class tictactoe {
private:

public:
	space board[3][3];

	bool validmove(int x, int y);
	void makemove(int x, int y, char input);
	bool victory();
	void printboard();

	void solvedAI();

};

