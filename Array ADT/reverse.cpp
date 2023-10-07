#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

//Display function
void Display(struct Array arr){
    cout<<"The elemnts are"<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}

//Swap function
void Swap(int *a , int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
  
}

//Reverse array function

void Reverse(struct Array *arr)
{
    
    for (int i=0;i<(arr->length/2);i++)
    {
        Swap(&arr->A[i],&arr->A[arr->length-i-1]);
        
    }
}

//Reverse array function using secondary array

void Reverse_2(struct Array *arr)
{
    int *temp;
    int i,j;
    temp= new int[arr->length];
    for(i=arr->length-1,j=0;i>=0;i--,j++)
    {
        temp[j]=arr->A[i];
    }
    for(i=0;i<arr->length;i++)
    {
        arr->A[i]=temp[i];
    }

}

    int main()
    {
        struct Array arr={{1,2,3,4,5,6},10,6};
        Display(arr);
        cout<<endl;
        Reverse(&arr);
        Display(arr);
        Reverse_2(&arr);
        Display(arr);

    }