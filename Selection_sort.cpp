#include<iostream>
using namespace std;
void printArray(int A[] ,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"\n"<<endl;
}
void getArray(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
}
void insertionSort(int A[],int n)
{
    int key, j;
    for (int i = 1; i <= n-1; i++)
    {
        key=A[i];
        j=i-1;
        while(j>=0 && key<A[i])
        {
            A[j+1]=A[j];
            j--;
        }
        key=A[j+1];
    }
    cout<<A[j]<<endl;
}
main()
{
    int A[]={45,34,98,56,3};
    int n=5;
    insertionSort(A,n);
    printArray(A,n);
    return 0;
}