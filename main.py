import random

decide = random.randint(1, 3)
computer = ''
user = str(input("Enter your move? (Rock, Paper, Scissors) Type Here: ")).lower()

if decide == 1:
    computer = 'rock'
if decide == 2:
    computer = 'paper'
if decide == 3:
    computer = 'scissors'

if user == "rock" and computer == "rock":
    print("User chose rock!")
    print("Computer chose rock!")
    print("It's a tie!")
if user == "rock" and computer == "paper":
    print("User chose rock!")
    print("Computer chose paper!")
    print("Computer wins!")
if user == "rock" and computer == "scissors":
    print("User chose rock!")
    print("Computer chose scissors!")
    print("User wins!")

if user == "paper" and computer == "rock":
    print("User chose paper!")
    print("Computer chose rock!")
    print("User wins!")
if user == "paper" and computer == "paper":
    print("User chose paper!")
    print("Computer chose paper!")
    print("It's a tie!")
if user == "paper" and computer == "scissors":
    print("User chose paper!")
    print("Computer chose scissors!")
    print("Computer wins!")

if user == "scissors" and computer == "rock":
    print("User chose scissors!")
    print("Computer chose rock!")
    print("Computer wins!")
if user == "scissors" and computer == "paper":
    print("User chose scissors!")
    print("Computer chose paper!")
    print("User wins!")
if user == "scissors" and computer == "scissors":
    print("User chose scissors!")
    print("Computer chose scissors!")
    print("It's a tie!")
