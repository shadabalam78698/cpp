#include<iostream>
using namespace std;

int main(){
    int i,n,j;
    cout<<"Taking Input From The User"<<endl;
    cin>>n;
    
for ( i = 1; i < n; i++)
{
    char var = 'a';
    for ( j = 1; j < n; j++)
    {
        cout<<var;
        var = var +1;
    }
    cout<<endl;
}

return 0;
}
