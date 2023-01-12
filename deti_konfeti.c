#include <stdio.h>
int delim_konfety(int n){ 
    static int count = 0;
    count = count +1;//кол-ва вызовов функции = кол-ву детей 
        if (n == 1)
        {
        printf("%d\n", count);
        return 1;
        }

    int res = delim_konfety(n-(n/2));
    //printf("%d конфет попалам будет %d\n", n,n-(n/2));
    return res;
}

int main()
{   
    int a;
   // printf("введите количество конфет: \n");
    scanf("%d", &a);
    delim_konfety(a);
    //printf("количество детей евших конфеты: %d\n", delim_konfety(a));
    return 0;
}

