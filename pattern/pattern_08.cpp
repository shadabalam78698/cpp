#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Please Give Me A Number"<<endl;
cin>>n;
for(int i=1;i<n;i++){
    for(int j=1;j<n-i;j++){
       cout<<" ";
    }
    for(int k=1;k<=i;k++){
        cout<<k;
    }
    for(int l=i-1;l>=1;l--){
        cout<<l;
    }
    // we can also used  2i-1 in second loop if we have to print *
    cout<<endl;
}
return 0;
}
