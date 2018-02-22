#include <iostream>
#include <vector>

using namespace std;

long long product(vector<vector<int>> grid){
    long long max=0, temp;
    for(auto i=0; i<20;i++){
        for(int j=0;j<20;j++){
            if(j<17){
                if(max<grid[i][j]*grid[i][j+1]*grid[i][j+2]*grid[i][j+3])
                    max=grid[i][j]*grid[i][j+1]*grid[i][j+2]*grid[i][j+3];
            }
            if(i<17){
                temp=grid[i][j]*grid[i+1][j]*grid[i+2][j]*grid[i+3][j];
                if(max<temp)
                    max=temp;
            }
            if(i<17&&j<17){
                temp=grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
                if(max<temp)
                    max=temp;
            }
            if(j>2&&i<17){
                temp=grid[i][j]*grid[i+1][j-1]*grid[i+2][j-2]*grid[i+3][j-3];
                if(max<temp)
                    max=temp;
            }
        }
    }
    return max;
}

int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0;grid_i < 20;grid_i++){
       for(int grid_j = 0;grid_j < 20;grid_j++){
          cin >> grid[grid_i][grid_j];
       }
    }
    cout<<product(grid);
    return 0;
}
