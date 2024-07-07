#include<iostream>
#include<cstring>
using namespace std;

void reverseStringWordwise(char input[]){
int len=strlen(input);
int l=len;
int k=0;
char input2[100];
for(int i=len-1;i>=-1;i--){
    if(input[i]==' ' || i==-1){
        int index=i;
        for(int j=index+1;j<l;j++){
           input2[k]=input[j]; 
           k++;
        }
        input2[k]=' ';
        l=index+1;
    }
    else{
        continue;
    }
}
for(int i=0;i<len;i++){
    cout<<input2[i];
}
}
int main(){
char input[100]={"my name is md shadab alam"};
reverseStringWordwise(input);
return 0;
}