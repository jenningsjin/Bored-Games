
class Sudokuclass {
	int board[9][9];
	

	Sudokuclass();
	bool boundcheck(int x, int y); //Checks validity of move on board;

	bool rowcheck(int x, int y);
	bool columncheck(int x, int y);
	bool squarecheck(int x, int y);
	bool validcheck(int x, int y); // Checks valid on for
	bool winning();
	void printboard();

};