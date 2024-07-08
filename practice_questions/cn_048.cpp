#include<iostream>
using namespace std;
void print2DArray(int input[][3], int row, int col) {
    int k=0;
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<input[i][j];
        }
        cout<<endl;
        count++;
        if(count+k<row){
            i--;
        }
        
        else{
            k++;
            count=0;
        }
    }
}
int main(){
int input[3][3]={{1,2,3},{4,5,6},{7,8,9}};
print2DArray(input,3,3);
return 0;
}