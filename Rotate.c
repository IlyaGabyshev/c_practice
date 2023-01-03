#include <stdio.h>
void rotateC(int *x1, int *y1, int *x2, int *y2){
int A = *x2 - *x1;
int B = *y1 - *y2;
printf("A=%d B=%d\n", A, B);

 int x0 = (*x1+*x2)/2;
 int y0 = (*y1+*y2)/2;

*x1 = x0 + A/2;    
*y1 = B/4 + *y1;

*x2 = B/2 + A/2 + *x1;
*y2= *y2 - A/2;

printf("%d %d %d %d\n",*x1,*y1, *x2, *y2);
}
int main(){ 
int xlt, ylt, xrb, yrb;
scanf("%d%d%d%d", &xlt, &ylt, &xrb, &yrb);
rotateC(&xlt, &ylt, &xrb, &yrb);
return 0;
}




