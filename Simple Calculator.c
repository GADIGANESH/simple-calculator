#include <stdio.h>   // first C project

int main() {
  int number1, number2, result;
  char operator;
  printf("Enter first number: ");
  scanf("%d", &number1);

  printf("Enter second number: ");
  scanf("%d", &number2);

  
  printf("Enter operator (+, -, *,/): ");
  scanf(" %c", &operator);

  switch (operator) {
    case '+':
      result = number1 + number2;
      break;
    case '-':
      result = number1 - number2;
      break;
    case '*':
      result = number1 * number2;
      break;
    case '/':
      result = number1 / number2;
      break;
    default:
      printf("Invalid operator.\n");
      return 0;
  }
  printf("%d %c %d = %d\n", number1, operator, number2, result);

  return 0;
}