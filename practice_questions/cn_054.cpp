#include<iostream>
using namespace std;
int max(int a, int b){
    return (a>b)? a:b;
}
int main(){
int x,y;
cout<<"Enter A Number"<<endl;
cin>>x>>y;
int c= max(x,y);
cout<<c;
return 0;
}