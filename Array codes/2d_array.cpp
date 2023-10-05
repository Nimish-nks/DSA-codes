#include<iostream>
#include<stdlib.h>

int main()
{
    //array in stack
    int A[3][4];
    //array of pointers, partially in stack and partially in heap
    int *P[3];

    P[0]=new int[4];
    P[1]=new int[4];
    P[2]=new int[4];

    //double pointers
    int **M;
    M=(int**)malloc(3*sizeof(int *));
    M[0]=(int*)malloc(4*sizeof(int));
    M[1]=(int*)malloc(4*sizeof(int));
    M[2]=(int*)malloc(4*sizeof(int));

    //print 2D array P
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
            printf("%d ",P[i][j]);
        printf("\n");

    }
    printf("\n");

    //print 2D array M
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
            printf("%d ",M[i][j]);
        printf("\n");

    }



    return 0;
}