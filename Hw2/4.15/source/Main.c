#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double principal = 5000.0;
    int years = 15;
    double interestRates[] = { 0.10, 0.105, 0.11, 0.115, 0.12 };
    int Rates = sizeof(interestRates) / sizeof(interestRates[0]);

    printf("%s%21s\n", "Interest Rate", "Amount on deposit");

    for (int i = 0; i < Rates; i++) {
        double rate = interestRates[i];
        double amount = principal * pow(1.0 + rate, years);

        printf("%.1f%%%20.2f\n", rate * 100, amount);
    }

    system("pause");
    return 0;
}