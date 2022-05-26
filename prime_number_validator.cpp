#include<iostream>
using namespace std;

int main(){
    int n,i;
cout<<" Take Any Number Of Your Choice"<<endl;
cin>>n;
for ( i = 2; i <= n-1; i++)
{
    if (n%i==0)
    {
        cout<<"no its not a prime number"<<endl;
        
    }
    else{
        cout<<"its a prime number";
    }
    break;
}

return 0;
}