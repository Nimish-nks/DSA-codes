#include<iostream>

using namespace std;


class Array
{
    private:
        int *A;
        int size;
        int length;
        void swap(int *x, int *y);

    public:
    //defined constructor
        Array()
        {
            size=10;
            length = 0;
            A=new int[size];
        }
    // Variable constructor    

        Array(int sz)
        {
            size=sz;
            length=0;
            A=new int[size];
        }

        //destructor
        ~Array()
        {
            delete []A;
        }

        //class functions
        void Display();
        void Append(int x);
        void Insert(int index, int x);
        int Delete(int index);
        int LinearSearch(int key);
        int BinarySearch(int key);
        int Get(int index);
        void Set(int index, int x);
        int Max();
        int Min();
        int Sum();
        float Avg();
        void Reverse();
        void Reverse2();
        void InsertSort(int x);
        int isSorted();
        void Rearrange();
        Array* Merge(Array arr2);
        Array* Union(Array arr2);
        Array* Diff(Array arr2);
        Array* Inter(Array arr2);
        
};

//Defining each function

void Array::Display()
{
    int i;
    cout<<"\nElements are\n";
    for(i=0;i<length;i++)
        cout<<A[i]<<" ";
}

void Array::Append(int x)
{
    if(length<size)
        A[length++]=x;
}

void Array::Insert(int )