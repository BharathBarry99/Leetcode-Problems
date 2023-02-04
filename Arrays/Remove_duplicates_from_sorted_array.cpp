class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    vector<int> todel;
        set<int> setu;
        int count=0;
        int n=nums.size();
        if (nums.empty()) return 0;
        if (nums.size()==1){
            return 1;
        }
        for (const auto &ele : nums){
            setu.insert(ele);
        }
        for(int i =0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=INT_MAX;
            }
        }
        sort(nums.begin(),nums.end());

        
     return setu.size();  
    }
};