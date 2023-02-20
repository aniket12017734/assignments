#include<iostream>
using namespace std;
void leftRotation(int arr[],int n,int d)
{
    int y;
    for(int i=0;i<n;i++)
    {
        y=(i+d)%n;
        arr[i]=arr[y];
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
   int arr[]={2,4,5,6,7,8,1};
   int n=sizeof(arr)/sizeof(arr[0]);
   int d = 3;
   leftRotation(arr,n,d);
   display(arr,n);

}