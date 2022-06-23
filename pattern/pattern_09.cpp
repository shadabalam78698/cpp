#include<iostream>
using namespace std;

int main(){
    cout<<"Enter A Number"<<endl;
    int n;
    cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int k = 1;k<=i;k++){
        cout<<"*";
    }
    for(int l=i-1;l>=1;l--){
        cout<<"*";
    }
    cout<<endl;
    }
    for(int m=1;m<=n-1;m++){
        for(int r = 1;r<=m;r++){
            cout<<" ";
        }
        for(int p = n-m;p>=1;p--){
            cout<<"*";
        }
        for(int q=n-m-1;q>=1;q--){
            cout<<"*";
        }
        cout<<endl;
    }

return 0;
}
