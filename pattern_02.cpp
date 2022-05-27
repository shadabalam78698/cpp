#include<iostream>
using namespace std;

int main(){
    int i,j;
    int var = 1;
    for ( i = 1; i < 5; i++)
    {


        for ( j =1 ; j <=i ;j++)
        {
            cout<<var;
            var = var + 1;
            
        }
        

      cout<<endl;  
    }
    
    return 0;
}