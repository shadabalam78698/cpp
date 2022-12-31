#include<iostream>
using namespace std;

int main(){
    int n,i;
cout<<" Take Any Number Of Your Choice"<<endl;
cin>>n;
    bool divided=false;
for ( i = 2; i < n; i++)
{
    if (n%i==0)
    {
        cout<<"no its not a prime number"<<endl;
        divided = true;
        break;
    }
}
  if(!divided){
      cout<<"Its A Prime Number"<<endl;
  }

return 0;
}
