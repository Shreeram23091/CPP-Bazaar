#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int cnt=0;
bool issafe(int row,int col ,int n,int board[][20]){
    //case 1: check same row previous element
    int duprow=row;
    int dupcol=col;
    while(col>=0){
        if(board[row][col]==1)
        return false;
        col--;
    }
    row=duprow;
    col=dupcol;
    // case :2 check upper corner elements
    while(row>=0&&col>=0){
        if(board[row][col]==1)
        return false;
        row--;
        col--;
    }
    row=duprow;
    col=dupcol;
    //case :3 check lower corner elements
    while(col>=0&&row<n){
        if(board[row][col]==1)
        return false;
        row++;
        col--;
    }
    return true;
}
void NQueen(int col,int n,int board[][20]){
    if(col==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            cout<<board[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
        cnt++;
        return;
    }
    for(int row=0;row<n;row++){
        if(issafe(row,col,n,board)){
        board[row][col]=1;
        NQueen(col+1,n,board);
        board[row][col]=0;
        }
    }
}
int main(){
    int board[20][20]={0};
    int n;
    cout<<"Enter N-Queen size : ";
    cin>>n;
    NQueen(0,n,board);
    cout<<cnt;
}
