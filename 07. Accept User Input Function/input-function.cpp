#include <iostream>

int main () {

  //?   cout << → Insertion Operator (outputs data to screen)
  //?   cin >> → Extraction Operator (takes input from user)

  std::string patientName;
  int patientAge;


    std::cout << "What's your age?: ";
    std::cin >> patientAge;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, patientName);




  std::cout << "Hello " << patientName << '\n';
  std::cout << "You are " << patientAge << " years old";

  return 0;
}