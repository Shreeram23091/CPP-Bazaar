// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
    int n;
    cout<<"enter the value of n : ";
    int *arr=new int[n];
    for(int i=0;i<n;i++) // O(n)
    cin>>arr[i];
    int q;
    cout<<"Enter number of query : ";
    cin>>q;
    while(q--){                   // O(q*n)
        int sum=0;
        int a,b;
        cout<<"Enter the range of index you want to sum : ";
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        sum+=arr[i];
        cout<<sum;
    }
    return 0;
}
// time complexity=O(q*n)+O(n)
