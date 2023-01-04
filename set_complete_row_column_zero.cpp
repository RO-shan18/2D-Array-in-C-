/* Programmer =  Roshan Mehra
Purpose = Q3 - Given a m*n integer matrix. If an element of the matrix is 0 then set the complete row and
column of that element to 0. Make the changes inplace and print the matrix.
Date = 27/12/2022  */

#include<iostream>
#include<vector>
#include<climits>
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

   vector<pair<int,int>> ans; 
     for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){
          if(arr[i][j] == 0){
            ans.push_back({i,j});
          }
    }
}

    for(int i=0; i<ans.size(); i++){
        int x = ans[i].first;
        int y = ans[i].second;
        int row=0;
        int col=0;

        while(row<n){
            arr[row][y] = 0;
            row++;
        }

        while(col<m){
            arr[x][col] = 0;
            col++;
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