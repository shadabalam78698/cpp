#include<iostream>
using namespace std;

int main(){
    int n;
cout<<"Please Give Me A Number"<<endl;
cin>>n;
for(int i=1;i<=n/2+1;i++){
    for(int j=n/2-i+1;j>=1;j--){
        cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++){
        cout<<"*";
    }
    cout<<endl;
    }
  for(int j=n/2;j>=1;j--){
      for(int k=n/2-j+1;k>=1;k--){
          cout<<" ";
      }
      for(int l=2*(j-1)+1;l>=1;l--){
          cout<<"*";
      }
      cout<<endl;
  }
  
return 0;
}
