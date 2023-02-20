#include <iostream>
using namespace std;

int main()
{
    int count=0;
    int Average;
    int a[5]={11,12,13,14,15};
    for (int i=4;i>=0;i--)
    {

        cout<<a[i]<<" ";
        count=count+a[i];
        
    }
    cout<<endl;
    cout<<count<<endl;
    Average=count/(end(a)-begin(a));
    cout<<Average<<endl;
    cout<<end(a)-begin(a)<<endl;
    cout<<sizeof(a);
}