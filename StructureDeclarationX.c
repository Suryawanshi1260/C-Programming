#include<stdio.h>

//Declaration
struct Demo
{
    int i;
    char ch;
    float f;
};

int main()
{
    struct  Demo dobj;
    printf("%d\n",sizeof(dobj));
    
    
    return 0;
}