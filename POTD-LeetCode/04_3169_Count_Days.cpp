    int countDays(int days, vector<vector<int>>& meetings) {
        int result =0;
        int start = 0, end =0;
        
        int column =0;
        stable_sort(meetings.begin(), meetings.end(), [column](const vector<int>& a, const vector<int>& b) {
        return a[column] < b[column]; // Ascending order
    });

        for(int i = 0; i<meetings.size(); i++){
            if(meetings[i][0] > end){
                result += meetings[i][0]-end-1;
                // start = meetings[i][0];
            }
            end = max(end,meetings[i][1]);
        }
        if(end < days){
            result += days-end;
        }
        return result;
    }

// Time Complexity :- O(N * logN) 
// Space Complexity :- O(logN)   // just because of sorting otherwise o(1) space is occupied
