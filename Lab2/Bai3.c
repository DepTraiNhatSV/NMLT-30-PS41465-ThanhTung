#include<stdio.h>
int main ()
{
    int a , b;
    float x;
    printf ("Nhap a va b");
    scanf ("%d%d",&a,&b);
    x = -(float)b/a;
    printf ("Phuong trinh %dX + %d = o co nghiem x = %.2f", a,b,x);
    return 0;
}