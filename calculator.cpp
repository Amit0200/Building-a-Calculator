
#include <iostream>

int main() {

  char operator;
  double number1;
  double number2;
  double result;

  std::cout << "------------------ CALCULATOR --------------------" <<std::endl;

  std::cout << " Select one operation (+ - * /) : ";
  std::cin << operator;

  std::cout << "Enter number 1: ";
  std::cin number1;

  std::cout << "Enter number 2: ";
  std::cin number2;

  switch(operator){

    case '+':
       result = number1 + number2;
       std::cout << "result: " << result << std::endl;
       break;
    case '-':
       result = number1 - number2;
       std::cout << "result: " << result << std::endl;
       break;
    case '*':
       result = number1 * number2;
       std::cout << "result: " << result << std::endl;
       break;
    case '/':
       result = number1 / number2;
       std::cout << "result: " << result << std::endl;
       break;
    default:
       std::cout << "Enter a valid operator (+,-,*,/)" << std::endl;
       break;
  }
  return o;
}
