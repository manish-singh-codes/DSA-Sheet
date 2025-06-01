    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i = 1;i<n; i++){
            int j = i;
            while(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
    }
