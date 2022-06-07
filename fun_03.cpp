#include<iostream>
using namespace std;
// we use void for the function which does not return
void print_numbers(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}
int main(){
print_numbers(5);
return 0;
}