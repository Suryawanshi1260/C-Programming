#include<Stdio.h>
#include<stdlib.h>

int main()
{
    int Size=0;
    float *Marks=NULL;
    int i=0; //loop counter
    //float Marks[5];      //20 Byte

    printf("Enter number of element: \n");
    scanf("%d",&Size);
    
    //Dynamic memory allocation
    Marks = (float *)malloc(Size * sizeof(float));
   

    printf("Enter Your Marks : \n");
    //Iteration
    //       1      2     3
    for ( i = 0; i < Size; i++)
    {
        scanf("%f",&Marks[i]);
    }
    
    

    printf("Enter marks are :\n");

     //      1      2     3
    for ( i = 0; i < Size; i++)
    {
        printf("%f",Marks[i]);

    }

    free(Marks);
    return 0;
}