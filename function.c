#include<stdio.h>
#include"printname.h"

void sum (int a, int b);
void strings (char massiv[]);
float mult (float x, float y);

int main(){
    printname();

    sum(1,2);

    char arr1[] = {'1', '2', 'p', 'W'};
    strings(arr1);
    char arr2[] = {"votermetr gospoda"};
    strings(arr2);

    float proizvedenie = mult(1.9,5.8);
    printf("%.2f\n", proizvedenie);
    return 0;
}

void sum(int a, int b){
    int res = a +b;
    printf("Результат сложения: %d\n", res);
}

void strings(char massiv[]){
    printf("%s\n", massiv);
}
float mult (float x, float y){
    float res = x * y;
    printf("Произведение х и y: %0.2f\n", res);
    return res;
}