#include<iostream>
using namespace std;
float getMin(float arr[], int n)
{
    float res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}
float getMax(float arr[], int n)
{
    float res = arr[0];
    for (int i = 1; i < n; i++)
        res = max(res, arr[i]);
    return res;
}
void findRangeAndCoefficient(float arr[], int n)
{
    float max = getMax(arr, n);
    float min = getMin(arr, n);
    float range = max - min;
    float coeffOfRange = range / (max + min);
    cout << "Range : " << range << endl;
}
int main()
{
    float arr[] = { 5, 10, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findRangeAndCoefficient(arr, n);
    return 0;
}
