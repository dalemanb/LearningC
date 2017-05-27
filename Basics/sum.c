/*
 * Program that adds two whole numbers
 * @author Dante Aleman
 */

#include <stdio.h>

int suma(int, int);

int main()
{
  int num1, num2, result; //Declaration of the varibles needed in the program
  
  printf("Enter the first number: ");
  scanf("%i", &num1);
  printf("Enter the second number: ");
  scanf("%i", &num2);
  
  result = suma(num1, num2);
  printf("The result of %i + %i is: %i", num1, num2, result);
  
  return 0;
}

int suma(int num1, int num2)
{
  return num1 + num2;
}
    

