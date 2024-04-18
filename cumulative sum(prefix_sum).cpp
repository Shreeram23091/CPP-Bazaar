// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int *prefix=new int[n];
    for(int i=0;i<n;i++){
        if(i==0)
        prefix[i]=arr[i];
        prefix[i]=prefix[i-1]+arr[i];
    }
    int q;
    cout<<"Enter number of query : ";
    cin>>q;
    while(q--){
        int sum=0;
        int a,b;
        cout<<"Enter the range of index you want to sum : ";
        cin>>a>>b;
        sum=prefix[b];
        if(a-1>=0)
        sum=sum-prefix[a-1];
        cout<<sum<<endl;
    }
    return 0;
}
