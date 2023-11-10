#include<iostream>
int main()
{
    char B[]="WELCOME";
    char A[]="wElCome";
    int i;
    for(i=0;B[i]!='\0';i++)
        B[i]=B[i]+32; //change case by  adding 32 or substracting 32


//toggling the case
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]>=65 && A[i]<=90)
        {
            A[i]+=32;
        }
        else if(A[i]>='a' && A[i]<=122)
        {
            A[i]-=32;
        }
    }
    printf("%s",A);
    printf("  %s",B);
    return 0;
}