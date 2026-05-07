#include<iostream>
using namespace std;


int main()
{
    int Size=0;
    float *Marks=NULL;
    int i=0;               //loop counter
    //float Marks[5];      //20 Byte

    cout<<"Enter number of element: \n";
    cin>>Size;
    
    //Dynamic memory allocation
    Marks = new float[Size];
   

    cout<<"Enter Your Marks : \n";
    //Iteration
    //       1      2     3
    for ( i = 0; i < Size; i++)
    {
        cin>>Marks[i];
    }
    
    

    cout<<"Enter marks are :\n";

     //      1      2     3
    for ( i = 0; i < Size; i++)
    {
        cout<<Marks[i]<<"\n";

    }

    delete [] Marks;
    return 0;
}