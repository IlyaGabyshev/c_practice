#include<stdio.h>

    struct kvadrat //создали структуру 
    {
        int height, weight;
    };

    void calc (struct kvadrat *fish); /*прописали прототип функции чтобы саму функцию написать где угодно,
    а вызвать в маин. имя obj- произвольно любое название так как это   всего лишь параметр
    *obj принимает адрес создан указатель */

int main()
{   
    struct kvadrat u4astok= {5, 7}; //создали обьект на сонове структуры
    calc(&u4astok);// в функцию передаем адрес обьекта square
return 0;
}

void calc (struct kvadrat *fish){
    int res = fish-> height * fish-> weight;// надо бы * ставить чтобы через указатели обратиться к знчанию
    // но  ставим значки -> так как работаем с структурой
    printf("Result: %d\n", res);
}
