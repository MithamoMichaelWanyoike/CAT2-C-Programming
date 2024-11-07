#include <stdio.h>

int main() {
  // Declare variables
  float hoursWorked, hourlyWage, grossPay, taxes, netPay;

  // Prompt user for input
  printf("Enter the number of hours worked this week: ");
  scanf("%f", &hoursWorked);

  printf("Enter your hourly wage: ");
  scanf("%f", &hourlyWage);

  // Calculate gross pay
  if (hoursWorked <= 40) {
    grossPay = hoursWorked * hourlyWage;
  } else {
    grossPay = (40 * hourlyWage) + ((hoursWorked - 40) * hourlyWage * 1.5);
  }

  // Calculate taxes
  if (grossPay <= 600) {
    taxes = grossPay * 0.15;
  } else {
    taxes = (600 * 0.15) + ((grossPay - 600) * 0.2);
  }

  // Calculate net pay
  netPay = grossPay - taxes;

  // Print results
  printf("\nGross Pay: $%.2f\n", grossPay);
  printf("Taxes: $%.2f\n", taxes);
  printf("Net Pay: $%.2f\n", netPay);

  return 0;
}