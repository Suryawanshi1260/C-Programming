#include<stdio.h>

struct Hello
{
    float f;
    int arr[3];
}hobj;             

int main()
{
   hobj.f = 10.0f;

   hobj.arr[0] =11;
   hobj.arr[1] =21;
   hobj.arr[2] =51;

   printf("%f\n",hobj.f);
   printf("%d\t%d\t%d\n",hobj.arr);
    return 0;
}