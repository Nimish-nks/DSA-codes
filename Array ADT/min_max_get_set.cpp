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

//Get function
int Get(struct Array arr, int n)
{
    return arr.A[n];
}


//Set function
void Set(struct Array *arr, int ele, int n)
{
    arr->A[n]=ele;

}


//Min function
int Min(struct Array arr)
{
    int m=arr.A[0];

    for(int i=0; i<arr.length; i++)
    {
        if(arr.A[i]<m)
        {
            m=arr.A[i];
        }        
    }
    return m;
}

//Max function
int Max(struct Array arr)
{
    int m=arr.A[0];

    for(int i=0; i<arr.length; i++)
    {
        if(arr.A[i]>m)
        {
            m=arr.A[i];
        }        
    }
    return m;
}

//Sum function

int Sum(struct Array arr)
{
    int sum=0;
    for (int i=0; i<arr.length; i++)
    {
        sum+=arr.A[i];

    }
    return sum;
}

//Average function
float Avg(struct Array arr)
{
    float avg=0;
    int sum=0;
    for (int i=0; i<arr.length; i++)
    {
        sum+=arr.A[i];
        
    }
    avg=sum/arr.length;
    return avg;
}



    int main()
    {
        struct Array arr={{1,2,3,4,5},10,5};
        Display(arr);
        cout<<endl;

        cout<<Get(arr,2)<<endl;
        Set(&arr,4,1);
        Display(arr);
        cout<<Min(arr)<<endl;
        cout<<Max(arr)<<endl;
        cout<<Sum(arr)<<endl;
        cout<<Avg(arr)<<endl;


    }
