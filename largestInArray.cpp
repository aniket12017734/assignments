#include<iostream>
using namespace std;
int Sumation(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int Smallest(int arr[],int n)
{
    int min = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}
int Largest(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int main()
{
    int arr[]={34,3,56,98,23,34,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The Largest value in Array is : "<<Largest(arr,n)<<endl;
    cout<<"The Smallest value in Array is : "<<Smallest(arr,n)<<endl;
    cout<<"The Sum of all value present in Array is : "<<Sumation(arr,n)<<endl;
    cout<<"The number of element present in Array is : "<<n<<endl;          
}