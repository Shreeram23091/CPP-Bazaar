// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
bool issafe(int row,int col,int n,int arr[][20],int vis[][20]){
    if((row>=0&&row<n)&&(col>=0&&col<n)&&(arr[row][col]==1)&&(vis[row][col]!=1))
    return true;
    else
    return false;
}
void Rat_Maz(int row,int col,int n,int arr[][20],int vis[][20]){
    //print the possible way
    if(row==n-1&&col==n-1){
        vis[row][col]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<vis[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        vis[row][col]=0;
    }
    //down 
    if(issafe(row+1,col,n,arr,vis)){
        vis[row][col]=1;
        Rat_Maz(row+1,col,n,arr,vis);
        vis[row][col]=0;
    }
    //Up
      if(issafe(row-1,col,n,arr,vis)){
        vis[row][col]=1;
        Rat_Maz(row-1,col,n,arr,vis);
        vis[row][col]=0;
    }
    //left
      if(issafe(row,col-1,n,arr,vis)){
        vis[row][col]=1;
        Rat_Maz(row,col-1,n,arr,vis);
        vis[row][col]=0;
    }
    //right
      if(issafe(row,col+1,n,arr,vis)){
        vis[row][col]=1;
        Rat_Maz(row,col+1,n,arr,vis);
        vis[row][col]=0;
    }
}
int main() {
   int arr[20][20]={0};
   int vis[20][20]={0};
   int n;
   cout<<"enter the value of n : ";
   cin>>n;
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++)
       cin>>arr[i][j];
   }
   cout<<endl<<endl;
   cout<<"output :"<<endl;
   if(arr[0][0]==0)
   return 0;
   if(arr[n-1][n-1]==0)
   return 0;
   Rat_Maz(0,0,n,arr,vis);

    return 0;
}
