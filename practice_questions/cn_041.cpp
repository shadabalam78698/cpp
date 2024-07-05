#include<iostream>
using namespace std;

int main(){
int m,n;
int input[1000][1000];
cin>>m>>n;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>input[i][j];
    }
}
for(int j=0;j<n;j++){
    int sum=0;
    for(int i=0;i<m;i++){
        sum=sum+input[i][j];
    }
    cout<<sum<<" ";
}

return 0;
}