/* REVERSE A STRING USING A STACK*/
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#include <stack>
void reverse(char *C, int n){
    stack<char> S;
    for(int i=0;i<n;i++){
        S.push(C[i]);
    }
    //loop for pop
    for(int i=0;i<n;i++){
        C[i]=S.top();
        S.pop(); 
    }
}

int main(){
    char C[51];
    cout<<"enter a string:";
    cin>>C;
    reverse(C, strlen(C));
    cout<<"reversed: "<<endl;
    cout<<C<<endl;;
}