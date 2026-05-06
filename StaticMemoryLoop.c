#include<Stdio.h>

int main()
{
    //Static memory allocation
    float Marks[5];      //20 Byte
    int i=0; //loop counter

    printf("Enter Your Marks : \n");
    //Iteration
    //       1      2     3
    for ( i = 0; i < 5; i++)
    {
        scanf("%f",&Marks[i]);
    }
    
    

    printf("Enter marks are :\n");

     //      1      2     3
    for ( i = 0; i < 5; i++)
    {
        scanf("%f"\n,Marks[i]);

    }


    return 0;
}