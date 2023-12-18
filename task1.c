#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


double first_task(double a, double n);
double my_pow(double n, double exp);


int main() {
    setlocale(LC_ALL, "ukr");

    int a, N;
    printf("Введіть a: ");
    scanf("%d", &a);
    printf("Введіть N (ціле число, N >= 0): ");
    scanf("%d", &N);

    if (N < 0) {
        printf("N має бути невід'ємним числом.\n");
        return 1;
    }
    printf("сумма %lf", first_task(a,N));

    return 0;
}

double my_pow(double n, double exp){
    double result = 1;

     for (int i = 0; i < exp; i++){
         result *= n;
     }
    return result;
}


double first_task(double a, double n){
    double sum_of_n = 0;
    double s = my_pow(a,n-1) / 3.0;

    for (int i = 1; i <= n; i++){
        sum_of_n += (double) i/2.0;
    }

    return s+sum_of_n ;
}
