#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "string.h"
#include <ctype.h>


int main() {

    setlocale(LC_ALL, "ukr");

    char input;
    char str[1024];

    printf("Введіть текст (завершіть введення, натиснувши Ctrl+Z):\n");


    while ((input = getchar() ) != EOF){
        putchar(input);
        strcat(str,&input);
    }

    int i = 0;
    int result = 0;

    while (str[i] != '\0'){
        if (isdigit(str[i]))
            result++;
        i++;
    }

    printf("знайдено %d цифр", result);
    FILE *open_file = fopen("result.txt", "w");
    fprintf(open_file, "%d", result);


}
