#include<iostream>
#include<cstring>
using namespace std;
void reverseStringWordWise(char input[]) {
    int len=strlen(input);
    int i=0;
    int j=0;
 for(int l=0;l<len;l++){
     int temp=input[i];
     input[l]=input[len-1-l];
     input[len-1-l]=temp;
     }
    while(input[j]!='\0'){
        while(input[i]!=' ' && i<len){
            i++;
        }
        for(int k=j;k<i/2;k++){
            int temp=input[k];
            input[k]=input[i-1-k];
            input[i-1-k]=temp;
        }
        cout<<' ';
        if(i<len){
            i++;
        }
        j=i;
    }
    for(int m=0;m<len;m++){
        cout<<input[m];
    }
}
int main(){
char input[100]={"hello i am shadab"};
reverseStringWordWise(input);
return 0;
}