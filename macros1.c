#include <stdio.h>
#define time2min(a,b) ((a)*60+b)

int main(void)
{
   int h, m, mm;
scanf("%d:%d", &h, &m);

mm = time2min(h, m);
printf("%d\n", mm);

mm = time2min(h, m)*2;
printf("%d\n", mm);

mm = time2min(h+1, m+5);
printf("%d\n", mm);
}

