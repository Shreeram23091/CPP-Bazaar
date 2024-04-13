// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int cnt=0;
void permute(int index,string input,vector<string>&output){
    if(index==input.size()){
    if(find(output.begin(),output.end(),input)==output.end())
        output.push_back(input);
        return;
    }
    for(int i=index;i<input.size();i++){
        swap(input[index],input[i]);
        permute(index+1,input,output);
        swap(input[index],input[i]);
    }
}
int main() {
   string input;
   cout<<"enter input string: ";
   getline(cin,input);
   vector<string>output;
   permute(0,input,output);
   for(auto res:output)
   cout<<res<<endl;
   cout<<cnt;
}
//time complexity = O(n!);
