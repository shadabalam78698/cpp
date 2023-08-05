#include<iostream>
using namespace std;

void sort012(int *arr, int n)
{
    int count1=0;
    int count2=0;
    int count3=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count1++;
        }
        else if(arr[i]==1){
            count2++;
        }
        else if(arr[i]==2){
            count3++;
        }
    }
    for(int i=0;i<count1;i++){
        arr[i]=0;
    }
    for(int i=count1;i<count2;i++){
        arr[i]=1;
    }
    for(int i=count2;i<count3;i++){
        arr[i]=2;
    }
}
int main(){
    int arr[6]={0,1,0,1,2,2};
    sort012(arr,6);
    for(int i=0;i<6;i++){
    cout<<arr[i];
    }
}