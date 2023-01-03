#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

for(int i=1;i<=n;i++){
    int k=1;
    for(int j=n;j>=i;j--){
        cout<<k;
        k++;
    }
    for(int k=2;k<=2*i-1;k++){
        cout<<"*";
    }
    for(int m=n-i+1;m>=1;m--){
        cout<<m;
    }
    cout<<endl;
}
return 0;
}