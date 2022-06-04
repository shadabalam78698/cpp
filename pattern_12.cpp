#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=4;i++){
        char a = 'a';
        for(int j=1;j<=4;j++){
            
            cout<<a;
            a=a+1;
        }
        cout<<endl;
    }
    return 0;
}