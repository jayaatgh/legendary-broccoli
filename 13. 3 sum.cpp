class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ansSet;
        map<int, int> lookup;
        int N = nums.size();
        
        //map from the value to its index
        for(int i = 0; i < N; i++){
            lookup[-nums[i]] = i;
        }
        
        for(int i = 0; i < N; i++){
            for(int j = i+1; j < N; j++){
                auto it = lookup.find(nums[i] + nums[j]);
                if(it != lookup.end() && it->second != i && it->second != j){
                    vector<int> triplet = {nums[i], nums[j], nums[it->second]};
                    //sort it so that we can check if it's unique in the set
                    sort(triplet.begin(), triplet.end());
                    ansSet.insert(triplet);
                }
            }
        }
        
        vector<vector<int>> ans(ansSet.begin(), ansSet.end());
        
        return ans;
    }
};
