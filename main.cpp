#include <iostream>
#include <stdlib.h>

/* 
    Scissors cuts Paper.
    Paper covers Rock.
    Rock crushes Lizard.
    Lizard poisons Spock.
    Spock smashes Scissors.
    Scissors decapitate Lizard.
    Lizard eats Paper.
    Paper disproves Spock.
    Spock vaporizes Rock.
    (and as it always has) Rock crushes Scissors.
*/

int main() {

srand(time(NULL));
int computer = std::rand() % 5 + 1;

int user = 0;

std::cout << "Rock Paper & Scissors!" << std::endl;
std::cout << "1) Rock\n" << "2) Paper\n" << "3) Scissors\n" << "4) Spock\n" << "5) Lizard\n";
std::cout << "Shoot!\n";
std::cin >> user;
std::cout << computer << std::endl;

int rock = 1;
int paper = 2;
int scissors = 3;
int spock = 4;
int lizard = 5;

if (user == scissors && computer == paper) {
  std::cout << "Scissors cuts paper!\n" << "You win!\n";
}
else if (user == paper && computer == rock) {
  std::cout << "Paper covers Rock\n" << "You win!\n";
}
else if (user == rock && computer == lizard) {
  std::cout << "Rock crushes Lizard\n" << "You win!\n";
}
else if (user == lizard && computer == spock) {
  std::cout << "Lizard poisons Spock\n" << "You win!\n";
}
else if (user == spock && computer == scissors) {
  std::cout << "Spock smashes Scissors\n" << "You win!\n";
}
else if (user == scissors && computer == lizard) {
  std::cout << "Scissors decapitate Lizard\n" << "You win!\n";
}
else if (user == lizard && computer == paper) {
  std::cout << "Lizard eats Paper\n" << "You win!\n";
}
else if (user == paper && computer == spock) {
  std::cout << "Paper disproves Spock\n" << "You win!\n";
}
else if (user == spock && computer == rock) {
  std::cout << "Spock vaporizes Rock\n" << "You win!\n";
}
else if (user == rock && computer == scissors) {
  std::cout << "Rock crushes Scissors\n" << "You win!\n";
}
else if (user == computer) {
  std::cout << "Its a draw, stand down\n";
}
else if (user == paper && computer == rock) {
  std::cout << "Paper covers Rock\n" << "You win!\n";
}
else {
  std::cout << "You lose!\n";
}
}
