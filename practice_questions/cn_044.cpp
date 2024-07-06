#include<iostream>
#include<cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
   int len=strlen(input);
    for(int i=1;i<len;i++){
        if(input[i]==input[i-1]){
            continue;
        }
        else{
            cout<<input[i-1];
        }
    }
}
int main(){
    char input[100]={"aabbabb"};
    removeConsecutiveDuplicates(input);
    return 0;
}