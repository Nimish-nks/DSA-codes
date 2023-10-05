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

void Swap(int *a , int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

    

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
int Limp_search(struct Array *arr,int n)
{
    for(int i=0;i<arr->length;i++){
        if(arr->A[i]==n)
        {
          Swap(&arr->A[i-1],&arr->A[i]); 
          return i-1; 
        }
        
    }
    return -1;
    
}

//if we want more improvement - move to start
int LHimp_search(struct Array *arr, int n)
{
    for(int i=0; i<arr->length; i++)
    {
        if(arr->A[i]==n)
        {
            Swap(&arr->A[i],&arr->A[0]); 
            return i;
        }
    }
    return -1;
}




//here n is the key i.e element that is to be searched

int main()
{
    struct Array arr={{1,2,3,4,5},10,5};
    Display(arr);
    cout<<endl;

    //improvement 1, shift frequently searched element to back

    cout<<LHimp_search(&arr, 4);
    cout<<endl;
    Display(arr);

    //improvement 2, shift frequently searched elemnt to front
        
    cout<<Limp_search(&arr, 4);
    cout<<endl;
    Display(arr);

    
}