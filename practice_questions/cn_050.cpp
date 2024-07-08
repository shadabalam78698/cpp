#include<iostream>
using namespace std;
int sum(int *a,int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=a[i];
    }
    return ans;
}
int main(){
int a[5]={2,2,2,2,2};
int b=sum(a+2,3);
cout<<b;
return 0;
}