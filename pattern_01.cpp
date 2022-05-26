#include<iostream>
using namespace std;
// pattern in c ++
int main(){
    int i,j;
    for ( i = 1; i <6 ; i++)
    {
        for ( j = 1; j <=i ; j++)
        {
           cout<<i;
        }
        cout<<endl;
    }
    int k,l;
    for ( k = 0; k < 11; k++)
    {
        for ( l = 1; l <k ; l++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    
    
    return 0;
}