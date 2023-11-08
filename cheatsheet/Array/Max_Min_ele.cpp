#include<iostream>
int main()
{
int A[5] = {2,11,1,8,10};
int length=5,i=0;
int min=A[0];
int max=A[0];



for(i=0;i<length;i++)
{
    if (A[i]<min)
        min=A[i];
    else if (A[i]>max)
        max=A[i];
    else
        continue;

}

printf("%d is min",min);
printf(" %d is max",max);


return 0;
}
