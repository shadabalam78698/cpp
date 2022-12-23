#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter A Number"<<endl;
    cin>>n;
for(int i=0;i<=n;i++){
    char a = 'a'+i;
    for(int j=i;j<=n;j++){
    cout<<a;
    a=a+1;
    }
    cout<<endl;
}
return 0;
}
