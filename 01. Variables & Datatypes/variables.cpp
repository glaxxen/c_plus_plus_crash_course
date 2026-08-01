#include <iostream>

int main() {
  // int: stores whole numbers (no decimal)
  int userAge = 20;
  int birthYear = 1990;
  int totalBoooks = 12.5;

  // double: stores numbers with decimals
  double productPrice = 199.99;
  double examScore = 88.75;
  double bodyTemperature = 36.5;

  // std::cout << bodyTemperature << '\n';
  // std::cout << examScore << '\n';

  // char: stores a single character, wrapped in single quotes
  char userGrade = 'B';
  char gender = 'M';
  char symbol = '#';

  // bool: stores true or false values
  bool isLoggedIn = false;
  bool hasDiscount = true;
  bool online = true;

  // string: stores text (sequence of characters)
  std::string fullName = "John";
  std::string favoriteFood = "Jollof RIce";
  std::string homeAddress = "101 Ln Washington DC, USA";

  std::cout << "I live in " << homeAddress  << '\n';
  std::cout << "My name is " << fullName << " and my favorite food is " << favoriteFood << ".";

  return 0;
}