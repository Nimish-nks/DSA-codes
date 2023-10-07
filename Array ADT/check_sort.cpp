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

int Check_sort(struct Array arr)
{
    int i,j;
    for(i=0;i<arr.length-1;i++)
    {
        
            if(arr.A[i]>arr.A[i+1])
                return -1;

        
    }
    return 1;
}

    int main()
    {
        struct Array arr={{1,2,3,4,5},10,5};
        Display(arr);
        cout<<endl;
        cout<<Check_sort(arr);
    }