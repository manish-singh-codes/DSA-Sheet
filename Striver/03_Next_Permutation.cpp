    void nextPermutation(vector<int>& nums) {
        int idx1 = -1, idx2 = -1;
        int n = nums.size();
        for(int i = n-1; i>0; i--){
            if(nums[i]>nums[i-1]){
            idx1 = i-1;
            break;
            }
        }
        if(idx1 == -1){
            sort(nums.begin(),nums.end());
            return;
        }
        for(int i = n-1; i>0; i--){
            if( nums[i] > nums[idx1]) {
                idx2 = i;
                break;
            }
        }
        swap(nums[idx1], nums[idx2]);
        reverse(nums.begin()+idx1+1, nums.end());
    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
