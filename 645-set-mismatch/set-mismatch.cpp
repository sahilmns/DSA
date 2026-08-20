class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
        int n = arr.size();
       int duplicate = -1;
       int mising = -1;
       for(int i=1;i<=n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[j] == i){
                count++;
            }
        }
        if(count == 2){
            duplicate = i;
        }
         if(count == 0){
            mising = i;
        }
       }
       return {duplicate , mising};
    }
};