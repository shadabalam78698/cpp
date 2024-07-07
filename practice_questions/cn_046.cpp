#include<iostream>
#include<cstring>
using namespace std;

  void reverseStringWordWise(char input[]) {
   int len=strlen(input);
     for(int i=0;i<len/2;i++){
         int temp=input[i];
         input[i]=input[len-1-i];
         input[len-1-i]=temp;
     }
    int k=0;
   for(int i=0;i<=len;i++){
    int l=0;
       if(input[i]==' ' || i==len){
           int index=i;
           for(int j=k;j<=(k-1+(index-k)/2);j++){
               int temp=input[j];
               input[j]=input[index-1-l];
               input[index-1-l]=temp;
               l++;
           }
           input[index]=' ';
           k=index+1;
       }
       else{
           continue;
       }
   }
   for(int i=0;i<len;i++){
    cout<<input[i];
   }
 }
int main(){
    char input[100]={"hello world"};
    reverseStringWordWise(input);
    return 0;
}