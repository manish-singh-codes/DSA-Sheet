    int minKBitFlips(vector<int>& nums, int k) {
        // approach 1
        int n = nums.size(); 
        int flipCount = 0;
        int flip = 0;
        vector<bool>isFlip(n,false);

        for(int i =0; i<n; i++){
            if(i>=k && isFlip[i-k] == true){
                flipCount -=1;
            }

            if( flipCount %2 == nums[i]){
                if(i+k > n) return -1; 
                flipCount +=1;
                flip +=1;
                isFlip[i] = true;
            }

        }
        return flip;
    }      

// Time Complexity :- O(N)
// Space Complexity :- O(N)
