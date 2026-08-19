class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {
        int n = arr.size();
        
        int mini = arr[0];
        int maxi = arr[0];
        for(int i=0;i<n;i++){
            mini = min(mini , arr[i]);
            maxi = max(maxi , arr[i]);
        }
        vector<int> ans;

        for(int i = mini; i < maxi; i++){
            bool found = false;
            for(int j=0; j<n; j++){
                if(arr[j] == i){
                    found = true;
                    break;
                }
            }
            if(found == false){
                ans.push_back(i);
            }
        }
        return ans;
    }
};