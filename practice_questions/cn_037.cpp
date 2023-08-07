#include<iostream>
using namespace std;
int lenght(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}
void reversestring(char inpput[]){
    int len=lenght(input);
    int i=0;
    int j=len-1;
    while(i<j){
    int temp=input[i];
    input[i]=input[j];
    input[j]=temp;
    i++,j--;
    }
}
int main(){
char input[100];
cin.getline(input,10);
reversestring(input);
cout<<input<<endl;
return 0;
}