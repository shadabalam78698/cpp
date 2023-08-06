#include<iostream>
using namespace std;


int binarySearch(int input[], int n, int val)
{
    int start=0;
    int end=n-1;
     
   for(int i=0;i<n;i++){
       int mid=(start+end)/2;
       if(val==input[mid]){
           return mid;
       }
       else if(val>input[mid]){
           start=mid+1;
       }
       else if(val<input[mid]){
           end=mid-1;
       }
       if(start>=n || end<=0){
        return -1;
       }
   } 
}
int main(){
    int input[3]={1,1,1};
    int b=binarySearch(input,3,1);
    cout<<b;

    return 0;
}