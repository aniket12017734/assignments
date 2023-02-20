#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> FactDigit(int N)
	{
	    vector<int>ans;
    vector<int>fact(10,0);
    fact[0]=1;
    for(int i=1;i<10;i++){
        fact[i]=i*fact[i-1];
    }
    for(int i=9;i>=1;i--){
        while(N>=fact[i]){
            ans.push_back(i);
            N-=fact[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
	}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int factSum(int n)
{
    if(n==0)
    return 1;
    else
    return fact(n)+factSum(n-1);
}
int main()
{
    int k;
    cin>>k;
    cout<<factSum(k);
}