class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int el_sum=0,di_sum=0;
        int dum=0;

        for(int i=0;i<nums.size();i++){
            el_sum+=nums[i];
            dum=nums[i];
            while(dum>0){

                di_sum+=dum % 10;
                dum = dum / 10;
            }
        }
        return abs(el_sum-di_sum);

    }
};

// The time complexity of this code is O(n * log m), 
// where n is the number of elements in the input vector nums and m is the maximum value of any element in nums.

// The space complexity of this code is O(1) 
// because the function only uses a constant amount of additional space