/* Programmer =  Roshan Mehra
Purpose = Q1 - Given a 2D matrix with m rows and n columns containing integers, find and print the
maximum value present in the array.
Date = 24/11/2022  */

#include<iostream>
using namespace std;

int main(){
    
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            cin>>arr[i][j];
        }
    }

    int max = INT_MIN;
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }

    cout<<"Biggest Element in a matrix is: "<<max;

    return 0;
}