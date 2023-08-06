#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
    int min=arr[i],minindex=i;
        for(int j=i+1;j<n;j++){
        if(min>arr[j]){
         min=arr[j];
         minindex=j;
    }
}
int temp=arr[i];
arr[i]=arr[minindex];
arr[minindex]=temp;
}
}
int main(){
int a[ ]={3,1,6,0,8,2};
selectionsort(a,6);
for(int i=0;i<6;i++){
    cout<<a[i]<<" ";
}
return 0;
}