    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int idx = n-1;
        vector<vector<int>>ans(n,vector<int>(n,0));
        for(int i =0; i<n; i++){
            for(int j =0; j<n; j++){
                ans[j][idx] = matrix[i][j];
            }
            idx--;
        }
        matrix = ans;
    }

// Time Complexity :- O(N*M)
// Space Complexity :- O(N*M)
