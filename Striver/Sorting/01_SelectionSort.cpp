// <<<<<<<<<<<<<<<<<============================ Approach ==============================>>>>>>>>>>>>>>
// basically jo inner loop hai wo minimum find kar raha hai.
// aur outer loop minimum number ko 0 se last index tak push kar raha hai.
// aur fir i ko ++ kar raha hai kyunki i tak array sorted hai.


    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        int i = 0;
        while(i < n){
            int index= 0;
            int mini =INT_MAX;
            int j = i;
            while(j <n){
                if(arr[j] < mini){
                    mini = arr[j];
                    index = j;
                }
                j++;
            }
            swap(arr[i],arr[index]);
            i++;
        }
        
    }

// Time Complexity :- O(N^2)
// Space Compleixty :- O(1)
