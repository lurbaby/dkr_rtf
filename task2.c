#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

double find_max(double *arr, int size);

int main(){

    setlocale(LC_ALL, "ukr");
    const int size = 5;
    double arr[size];

    for (int i = 0; i < size ; i++){
        printf("Введіть %d елемент:", i+1);
        scanf("%lf", &arr[i]);
    }

    printf("Найбільший елемент: %lf", find_max(arr,size));


    return 0;
}

double find_max(double *arr, int size){
    int max= arr[0];

    for (int i = 0; i < size ; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
