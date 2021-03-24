#include <iostream>
#include "Game.h"

int Player::pick_move() {
	while (true) {
		int move;
		std::cout << "1. ROCK\n2. PAPER\n3. SCISSORS\n4. LIZARD\n5. SPOCK\nEnter move number: ";
		std::cin >> move;

		if (move <= 5) {
			return move;
		}
		else {
			std::cout << "Invalid move selector: " << move << ".\n" << std::endl;
			continue;
		}
	}
}

int Computer::pick_move() {
	srand(time(0));
	int move = rand() % 3;

	return move;
}

void Game::check_rules(int player_move, int computer_move) {
	switch (player_move) {
	case 1:
		Game::check_rock(computer_move);
		break;
	case 2:
		Game::check_paper(computer_move);
		break;
	case 3:
		Game::check_scissors(computer_move);
		break;
	case 4:
		Game::check_lizard(computer_move);
		break;
	case 5:
		Game::check_spock(computer_move);
		break;
	}
}

void Game::check_rock(int computer_move) {
	if (computer_move == 1) {
		std::cout << "\nPlayer chose ROCK!\nComputer chose ROCK!\nIt's a tie!\n" << std::endl;
	}
	else if (computer_move == 2) {
		std::cout << "\nPlayer chose ROCK!\nComputer chose PAPER!\nComputer wins!\n" << std::endl;
	}
	else if (computer_move == 3) {
		std::cout << "\nPlayer chose ROCK!\nComputer chose SCISSORS!\nPlayer wins!\n" << std::endl;
	}
	else if (computer_move == 4) {
		std::cout << "\nPlayer chose ROCK!\nComputer chose LIZARD!\nPlayer wins!\n" << std::endl;
	}
	else {
		std::cout << "\nPlayer chose ROCK!\nComputer chose SPOCK!\nComputer wins!\n" << std::endl;
	}
}

void Game::check_paper(int computer_move) {
	if (computer_move == 1) {
		std::cout << "\nPlayer chose PAPER!\nComputer chose ROCK!\nPlayer wins!\n" << std::endl;
	}
	else if (computer_move == 2) {
		std::cout << "\nPlayer chose PAPER!\nComputer chose PAPER!\nIt's a tie!\n" << std::endl;
	}
	else if (computer_move == 3) {
		std::cout << "\nPlayer chose PAPER!\nComputer chose SCISSORS!\nComputer wins!\n" << std::endl;
	}
	else if (computer_move == 4) {
		std::cout << "\nPlayer chose PAPER!\nComputer chose LIZARD!\nComputer wins!\n" << std::endl;
	}
	else {
		std::cout << "\nPlayer chose PAPER!\nComputer chose SPOCK!\nPlayer wins!\n" << std::endl;
	}
}

void Game::check_scissors(int computer_move) {
	if (computer_move == 1) {
		std::cout << "\nPlayer chose SCISSORS!\nComputer chose ROCK!\nComputer wins!\n" << std::endl;
	}
	else if (computer_move == 2) {
		std::cout << "\nPlayer chose SCISSORS!\nComputer chose PAPER!\nPlayer wins!\n" << std::endl;
	}
	else if (computer_move == 3) {
		std::cout << "\nPlayer chose SCISSORS!\nComputer chose SCISSORS!\nIt's a tie!\n" << std::endl;
	}
	else if (computer_move == 4) {
		std::cout << "\nPlayer chose SCISSORS!\nComputer chose LIZARD!\nPlayer wins!\n" << std::endl;
	}
	else {
		std::cout << "\nPlayer chose SCISSORS!\nComputer chose SPOCK!\nComputer wins!\n" << std::endl;
	}
}

void Game::check_lizard(int computer_move) {
	if (computer_move == 1) {
		std::cout << "\nPlayer chose LIZARD!\nComputer chose ROCK!\nComputer wins!\n" << std::endl;
	}
	else if (computer_move == 2) {
		std::cout << "\nPlayer chose LIZARD!\nComputer chose PAPER!\nPlayer wins!\n" << std::endl;
	}
	else if (computer_move == 3) {
		std::cout << "\nPlayer chose LIZARD!\nComputer chose SCISSORS!\nComputer wins!\n" << std::endl;
	}
	else if (computer_move == 4) {
		std::cout << "\nPlayer chose LIZARD!\nComputer chose LIZARD!\nIt's a tie!\n" << std::endl;
	}
	else {
		std::cout << "\nPlayer chose LIZARD!\nComputer chose SPOCK!\nPlayer wins!\n" << std::endl;
	}
}

void Game::check_spock(int computer_move) {
	if (computer_move == 1) {
		std::cout << "\nPlayer chose SPOCK!\nComputer chose ROCK!\nPlayer wins!\n" << std::endl;
	}
	else if (computer_move == 2) {
		std::cout << "\nPlayer chose SPOCK!\nComputer chose PAPER!\nComputer wins!\n" << std::endl;
	}
	else if (computer_move == 3) {
		std::cout << "\nPlayer chose SPOCK!\nComputer chose SCISSORS!\nPlayer wins!\n" << std::endl;
	}
	else if (computer_move == 4) {
		std::cout << "\nPlayer chose SPOCK!\nComputer chose LIZARD!\nComputer wins!\n" << std::endl;
	}
	else {
		std::cout << "\nPlayer chose SPOCK!\nComputer chose SPOCK!\nit's a tie!\n" << std::endl;
	}
}