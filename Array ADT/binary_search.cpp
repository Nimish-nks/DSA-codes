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

//Binary Search
int binary_search(struct Array arr, int p)
{
    int l,h,m;
    l=0;
    h=arr.length-1;
    
    while(l<h)
    {
        m=(l+h)/2;
        if(p==arr.A[m])
        {
            return m;
        }
        else if(p>arr.A[m])
        {
            l=m;
        }
        else
        {
            h=m;
        }
    }
    return -1;
   
}







    int main()
    {
        struct Array arr={{1,2,3,4,5,6,7,8,9},10,9};
        Display(arr);
        cout<<endl;
        cout<<binary_search(arr,7);
        return 0;
    }