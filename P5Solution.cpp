#include <iostream>
#include <vector>
using namespace std;


int dfs(vector<vector<int>>&grid, int i, int j) {
    if(i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size() || grid[i][j] == 0) {
        return 0;
    }
    grid[i][j] = 0;

    dfs(grid, i+1, j);
    dfs(grid, i-1, j);
    dfs(grid, i, j+1);
    dfs(grid, i, j-1);

    return 1;
}


int countingStarships(int n,int m,vector<vector<int>> grid) {
    if (grid.empty() || grid.size() == 0) {
        return 0;
    }
    int numStarShips = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if(grid[i][j] == 1) {
                numStarShips += dfs(grid,i,j);
            }
        }
    }
    return numStarShips;
}


int main() {
    
   int n,m;
    cin >> n >> m;


    vector<vector<int>> grid;
    for (int i = 0; i < n; i++) {
        // vector<int>* row = new vector<int>(m);
        vector<int> row = {};
        for (int j = 0; j < m; j++) {
            int temp;
            cin >> temp;
            row.push_back(temp);
        }
        grid.push_back(row);
    }
    int result = countingStarships(n,m,grid);
    cout << result;

      // Displaying the 2D vector 
//     for (int i = 0; i < grid.size(); i++) { 
//         for (int j = 0; j < grid[i].size(); j++) {
//             cout << grid[i][j] << " "; 
//         }
//         cout << endl; 
// } 
    return 0;
}