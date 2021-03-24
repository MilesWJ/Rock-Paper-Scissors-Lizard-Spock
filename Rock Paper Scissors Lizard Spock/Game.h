#pragma once

class Game {
public:
	int turn;

	void check_rock(int computer_move);
	void check_paper(int computer_move);
	void check_scissors(int computer_move);
	void check_lizard(int computer_move);
	void check_spock(int computer_move);

	void check_rules(int player_move, int computer_move);
};

class Player {
public:
	int move;

	int pick_move();
};

class Computer {
public:
	int move;

	int pick_move();
};