#include<iostream>
using namespace std;

const int MAX=100;
void multiply(int mat1[][MAX],int mat2[][MAX],int res[][MAX],int r1,int c1,int r2,int c2){
    if(c1!=c2){
        cout<<"mul is not possible "<<endl;
        return ;

    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<c1;k++){
                res[i][j]+=mat1[i][k]+mat2[k][j];
            }
        }
    }

}
void display(int mat[][MAX],int ros,int cols){
        for(int i=0;i<ros;i++){
            for(int j=0;j<cols;j++){
                cout<<mat[i][j]<<" ";

            }
        }
}
int main(){
     int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;
     cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;

     cout << "Enter elements of first matrix: " << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cin >> mat1[i][j];
        }
    }
     cout << "Enter elements of second matrix: " << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cin >> mat2[i][j];
        }
    }
    multiply(mat1, mat2, result, r1, c1, r2, c2);
    cout<<"resutant "<<endl;
    display(result,r1,c2);
    return 0;

}