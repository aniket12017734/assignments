#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
    int Roll;
    node *flink;
    node *plink;
};
node *head=NULL, *ptr, *nptr, *tail=NULL;
int n, i,p=1,c1,c2;
int main()
{
    cin>>n;
    if(n>=5&&n<15)
    {
        for(i=0;i<n;i++)
        {
            nptr=new node;
            cin>>nptr->Roll;
            if(head==NULL)
            {
                head=nptr;
                tail=nptr;
                nptr->flink=NULL;
                nptr->plink=NULL;
            }
            else
            {
                ptr=tail;
                nptr->plink=tail;
                ptr->flink=nptr;
                nptr->flink=NULL;
                tail=nptr;
            }
        }
        while(p<=n/2)
        {
            ptr=head;
            nptr=tail;
            c1=ptr->Roll/10;
            c2=nptr->Roll/10;
            c2=nptr->Roll-(10*c2);
            if(c1==c2)
            {
                c1=ptr->Roll-(10*c1);
                c2=(nptr->Roll-c2)/10;
                if(c1==c2)
                {
                    ptr=ptr->flink;
                    nptr=ptr->plink;
                    p++;
                }
                else
                {
                    cout<<"No";
                    return 0;
                }
            }
            else
            {
                cout<<"No";
                return 0;
            }
        }
        cout<<"Yes";
    }
    else
    {
        cout<<"Invalid Input";
    }  
    return 0;
}
// int orangesRotting(vector<vector<int>>& grid) {
        
//        int m = grid.size();
//        int n = grid[0].size();
        
        
//         queue<pair<pair<int,int>,int>> q;
        
//         int fresh0 = 0;
        
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(grid[i][j] ==  2){
//                     q.push({{i,j},0});
//                 }
//                 if(grid[i][j] ==  1){
//                     fresh0++;
//                 }
//             }
//         }
//         int ans = 0;
//         int count = 0;
// while(!q.empty()){
            
//             auto f = q.front();
//             int i = f.first.first;
//             int j = f.first.second;
//             q.pop();
//             int level = f.second;
            
//             ans  = max(ans,level);
//             int dx[] = {-1,0,0,1};
//             int dy[] = {0,1,-1,0};
            
//             for(int k=0;k<4;k++){
                
//                 int x = i + dx[k];
//                 int y = j + dy[k];
                
                
//                 if(x>=0 && y>=0 && x<m && y<n && grid[x][y] == 1){
//                     count++;
//                     grid[x][y] = 2;
//                     q.push({{x,y},level+1});
                    
//                 }
//             }
        // }
        // return fresh0 == count ? ans :-1;
                
    // }