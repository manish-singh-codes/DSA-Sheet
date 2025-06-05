    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        // base case
        if(low == high) return;
        
        int index = partition(arr,low,high);
        
        // recursive calls
        //left part
        quickSort(arr,low,index-1);
        // right part
        quickSort(arr,index+1,high);
        
    }

// Align the pivot to it's actual position and smaller element in the left side, greater element in right side
    int partition(vector<int>& arr, int low, int high) {
      // code here
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[i + 1], arr[high]);  
        return i + 1;
    }
};

// Time Complexity :- O(N Log N)
// Space Complexity :- O(1)
