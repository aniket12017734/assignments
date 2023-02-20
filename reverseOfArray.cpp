#include<iostream>
using namespace std;
int multiplicationOfArray(int arr[], int size)
{
    int start=0;
    int M=1;
    for(int i=0;i<size;i++)
    {
        M=M*arr[i];
    }
    return M;
}
int main()
{
    int arr[5]={3,4,5,8,2};
    cout<<multiplicationOfArray(arr,5);
}