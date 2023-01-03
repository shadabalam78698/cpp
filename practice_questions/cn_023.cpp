#include<iostream>
using namespace std;

int main(){
int n,i;
int k;
cin>>n;
for( i=1;i<=n;i++){
     k=i;
    for(int j=n-i;j>=1;j--){
     cout<<" ";
    }
    for(int k=i;k>=1;k--){
        cout<<k;
    }
for(int k=2;k<=i;k++){
    cout<<k;
}
cout<<endl;
}
return 0;
}