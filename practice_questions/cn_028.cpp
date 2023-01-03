#include<iostream>
using namespace std;
void printarray(int b[],int n){
for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
}
}

int main(){
int n;
cin>>n;
int b[100];
for(int i=0;i<n;i++){
    cin>>b[i];
}
printarray(b,n);
return 0;
}