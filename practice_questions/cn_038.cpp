#include<iostream>
#include<cstring>
using namespace std;

int main(){
char input1[100]="abcd";
char input2[100]="gef";
cout<<"After Copying "<<endl;
// strcpy(input1,input2);
// strcpy(input1,"hello");
strncpy(input1,input2,2);
cout<<input1;

return 0;
}