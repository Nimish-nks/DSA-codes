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

//Append function
void Append(struct Array *arr, int n){
    if(arr->length < arr->size)
    arr->A[arr->length]=n;
    arr->length++;
}

//Insert function
void Insert(struct Array *arr, int n, int ele)
{
    if(arr->length < arr->size){
        for(int i=arr->length;i>n;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
    
        arr->A[n]=ele;
        arr->length++;


    }
}

    int main()
    {
        struct Array arr={{1,2,3,4,5},10,5};
        Display(arr);
        cout<<endl;
        Append(&arr,8);
        Display(arr);
        cout<<endl;
        Insert(&arr,2,90);
        Display(arr);
        cout<<endl;
        return 0;
    }

    



