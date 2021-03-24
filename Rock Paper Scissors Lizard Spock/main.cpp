#include <iostream>
#include "Game.h"

int main()
{
	Game Game; Player Player; Computer Computer;

	Game.turn = 1;

	while (true) {
		std::cout << "Turn: " << Game.turn << "\n" << std::endl;

		Player.move = Player.pick_move();
		Computer.move = Computer.pick_move();

		Game.check_rules(Player.move, Computer.move);
		Game.turn++;
	}
}
