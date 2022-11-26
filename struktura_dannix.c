#include<stdio.h>

int main(){
struct book
{
    char avtor[10];
    int stranici;
    float price;
};
struct gods
{   char name[10];
    int age;
    float weight;
};
struct gods  bog1 = {"Zevs", 1000, 199.59};
printf("Бог %s, возраст %d лет, весовая категория до %.2f кг. \n", bog1.name, bog1.age, bog1.weight);

struct book dubrovskui;
// dubrovskui.avtor = "А.С.Пушкин";
strcpy(dubrovskui.avtor, "Pushkin");
dubrovskui.stranici = 300;
dubrovskui.price = 65.23;
printf("Автор книги %s, страниц %d, стоимость %.1f\n", dubrovskui.avtor, dubrovskui.stranici, dubrovskui.price);
}