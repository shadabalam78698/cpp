// Using Function To Check Whether A Number Is Prime Or Not 
#include<iostream>
using namespace std;
bool isprime(int n){
    int d;
    for(d=2;d<n;d++){
    if(n%d==0){
        return false;
    }
    }
    // if we reach at return then after that we comes out of the function
    return true;
}
int main(){
    int n;
    cout<<"Entetr A Number"<<endl;
    cin>>n;
int a = isprime(n);
cout<<a;
return 0;
}
