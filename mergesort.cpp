#include<iostream>
using namespace std;
void merge(int arr[],int left,int mid,int right)
{
    int n1= mid - left + 1;
    int n2= right -mid;
    int *leftarr=new int[n1];
    int *rightarr=new int[n2];
    for(int i=0;i<n1;i++)
    {
        leftarr[i]=arr[left+i];
    }
    for(int j=0;j<n2;j++)
    {
        rightarr[j]=arr[mid+1+j];
    }
    int i =0;
    int j =0;
    int k=left;
    while (i < n1 && j < n2)
    {
        if (leftarr[i] <= rightarr[j])
        {
            arr[k] = leftarr[i];
            i++;
        }
        else
        {
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }
    while (i < n1)
        {
        arr[k] = leftarr[i];
        i++;
        k++;
     }
         while (j < n2)
    {
        arr[k] = rightarr[j];
        j++;
        k++;
     }
     delete[] leftarr;
     delete[] rightarr;
}
void mergeSort(int array[], int left, int right)
{
    if (left >= right)
    {
        return; 
    }
    int mid = left + (right-left) / 2;
    mergeSort(array, left, mid);
    mergeSort(array, mid + 1, right);
    merge(array, left, mid, right);
}
void display(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
}
int main()
{
    int arr[] = { 18, 11, 12, 2, 5, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "Given array:\n";
    display(arr, arr_size);
    mergeSort(arr, 0, arr_size - 1);
    cout << "\nSorted array:\n";
    display(arr, arr_size);
    return 0;
}
