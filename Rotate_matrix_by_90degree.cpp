/* Programmer =  Roshan Mehra
Purpose = Q2 - You are given a n*n square matrix, you need to rotate the matrix by 90 degrees in
clockwise direction. You need to do it in-place i.e. you are not allowed to make a new
matrix and allocate the elements to it. Make the changes in the same matrix and print it.
Date = 21/11/2022  */

#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){

        for(int j=0; j<i; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i=0; i<n; i++){

        for(int j=0; j<n/2; j++){
                swap(arr[i][j], arr[i][n-j-1]);
            }
        }
    
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}