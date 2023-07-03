#include<iostream>
using namespace std;
void sortZeroesAndOne(int *input, int size)
{
    
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(i==j){
                continue;
            }
            if(input[i]>input[j]){
                int a=input[i];
                input[i]=input[j];
                input[j]=a;
                break;
            }
        }
    }
}
int main(){
int input[]={1,1,1,1,1,1,1};
sortZeroesAndOne(input,7);
for(int i=0;i<7;i++){
    cout<<input[i]<<" ";
}
return 0;
}