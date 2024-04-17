// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
    int t;
    cout<<"Enter the number of test case:";
    cin>>t;
    int s,e,n;
    while(t--){
        cout<<"Enter the value of n : ";
        cin>>n;
        int *arr=new int[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        s=0;e=n-1;
        while(s<e){
            swap(arr[s++],arr[e--]);
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}

//Time complexity=O(t*n)
