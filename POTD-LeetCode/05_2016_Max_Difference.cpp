
    int maximumDifference(vector<int>& nums) {
        int ans = -1;
        int n = nums.size();
        int mini = nums[0];
        for(int i =1 ; i<n; i++){
            if(nums[i] > mini){
                ans = max((nums[i]-mini) , ans);
            }
            else{
                mini = nums[i];
            }
        }
        return ans;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
