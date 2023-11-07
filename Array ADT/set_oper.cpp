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

//Union
struct Array* Union(struct Array *arr1, struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length)
    {
        
        if(arr1->A[i] < arr2->A[j])
            arr3->A[k++]=arr1->A[i++];    //it is doing k++ after storing in k, just a shortcut way to write
        else if(arr2->A[j]<arr1->A[i])
            arr3->A[k++]=arr2->A[j++];
        else
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];

    arr3->length=k;
    arr3->size=10;

    return arr3;
    
}

//intersection function
struct Array* Intersection(struct Array *arr1, struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length)
    {
        
        if(arr1->A[i]<arr2->A[j])
            i++;   
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else
        {
            arr3->A[k++]=arr1->A[i++];
            
        }
    }
   
    arr3->length=k;
    arr3->size=10;

    return arr3;
    
}

//Difference
struct Array* Difference(struct Array *arr1, struct Array *arr2)  //array1-array2
{
    int i,j,k;
    i=j=k=0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length)
    {
        
        if(arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i++];          
            
        }
        else if (arr2->A[j]<arr1->A[i])
    {
            j++;
            
        }
        else{
            i++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    

    arr3->length=k;
    arr3->size=10;

    return arr3;
    
}



int main()
{
    struct Array arr1={{2,6,10,15,25},10,5};
    struct Array arr2={{3,4,15,18,20},10,5};
    struct Array *arr3;

    arr3=Union(&arr1,&arr2);
    Display(*arr3);
    arr3=Intersection(&arr1,&arr2);
    Display(*arr3);
    arr3=Difference(&arr1,&arr2);
    Display(*arr3);

    return 0;
}