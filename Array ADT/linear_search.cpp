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

int Swap(int a , int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

    return a,b;

}

//normal linear search
int L_search(struct Array arr, int n)
{
    for(int i=0;i<arr.length;i++)
    {
        if (arr.A[i] == n)
         return i;
    }
    return -1;  //if not found in array
}

//if we want to search again-Improvement 1
int L_search(struct Array *arr)






int main()
{
    struct Array arr={{1,2,3,4,5},10,5};
    Display(arr);
    cout<<endl;
        
    cout<<L_search(&arr, 4);
}