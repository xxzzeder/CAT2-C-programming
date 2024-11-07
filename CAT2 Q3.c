#include <stdio.h>

int main() {
    float hours, wage, gross, tax, net;
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);
 gross = (hours <= 40) ? hours * wage : (40 * wage) + ((hours - 40) * wage * 1.5);
tax = (gross <= 600) ? gross * 0.15 : (600 * 0.15) + ((gross - 600) * 0.20);
 net = gross - tax;
    printf("Gross Pay: $%.2f\n", gross);
    printf("Taxes: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", net);

    return 0
}