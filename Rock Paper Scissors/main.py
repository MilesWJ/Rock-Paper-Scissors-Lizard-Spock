import random
from player_computer import Player, Computer


def computer_decide():

    Computer.random = random.randint(1, 3)

    if Computer.random == 1:
        Computer.move = "rock"

    elif Computer.random == 2:
        Computer.move = "paper"

    elif Computer.random == 3:
        Computer.move = "scissors"


def play_game():

    Player.move = str(input(
        "\n[MOVES: ROCK, PAPER, SCISSORS]\nWhat move would you like to use? ")).lower()

    computer_decide()

    if Player.move == "rock" and Computer.move == "rock":
        print("\nPlayer chose rock!")
        print("Computer chose rock!")
        print("It's a tie!")
    if Player.move == "rock" and Computer.move == "paper":
        print("\nPlayer chose rock!")
        print("Computer chose paper!")
        print("Computer wins!")
    if Player.move == "rock" and Computer.move == "scissors":
        print("\nPlayer chose rock!")
        print("Computer chose scissors!")
        print("Player wins!")

    if Player.move == "paper" and Computer.move == "rock":
        print("\nPlayer chose paper!")
        print("Computer chose rock!")
        print("Player wins!")
    if Player.move == "paper" and Computer.move == "paper":
        print("\nPlayer chose paper!")
        print("Computer chose paper!")
        print("It's a tie!")
    if Player.move == "paper" and Computer.move == "scissors":
        print("\nPlayer chose paper!")
        print("Computer chose scissors!")
        print("Computer wins!")

    if Player.move == "scissors" and Computer.move == "rock":
        print("\nPlayer chose scissors!")
        print("Computer chose rock!")
        print("Computer wins!")
    if Player.move == "scissors" and Computer.move == "paper":
        print("\nPlayer chose scissors!")
        print("Computer chose paper!")
        print("Player wins!")
    if Player.move == "scissors" and Computer.move == "scissors":
        print("\nUser chose scissors!")
        print("Computer chose scissors!")
        print("It's a tie!")


while True:
    play_game()
