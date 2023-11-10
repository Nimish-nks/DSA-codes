#include<iostream>
int main()
{
    char A[]="How are   you";
    int i=0, word=1;

    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==' '&& A[i-1]!=' ') //condition to check it only counts one space
        {
            word++;
        }

    }
    printf("%d",word);
    return 0;

}