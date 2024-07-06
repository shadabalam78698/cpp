#include<iostream>
#include<cstring>
using namespace std;

void reverseEachWord(char input[]) {
    int len=strlen(input);
    int k=0;
   for(int i=0;i<=len;i++){
    int l=0;
       if(input[i]==' ' || input[i]=='\0'){
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
    char input[100]={"hello in my world"};
    reverseEachWord(input);
    return 0;
}