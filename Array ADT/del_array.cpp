  

void Delete(struct Array *arr,int n)
{
    //arr->A[n]=0;
    for(int i=n;i<arr->length;i++)
    {
        arr->A[i]=arr->A[i+1];
    }
    arr->length--;
}

    int main()
    {
        struct Array arr={{1,2,3,4,5},10,5};
        Display(arr);
        cout<<endl;
        Delete(&arr, 2);
        Display(arr);
        cout<<endl;
    }