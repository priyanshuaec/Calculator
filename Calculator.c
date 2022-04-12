#include <stdio.h>

int main() {

  char n;
  double a, b;
  printf("Enter an operator=");
  scanf("%c", &n);
  printf("Enter two numbers ");
  scanf("%lf %lf", &a, &b);

  switch (n) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", a, b, a + b);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", a, b, a - b);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", a, b, a * b);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", a, b, a / b);
      break;
    
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}


