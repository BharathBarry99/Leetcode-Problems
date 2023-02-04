class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int ind=0;
        int n=nums.size();

        if (nums.empty()) return 0;
        if (nums.size()==1){
            return 1;
        }

        
        for(int i = 1; i<n;i++){
            if(nums[ind]!=nums[i]){
                ind++;
                nums[ind]=nums[i];
            }
        }

     return ind+1;  
    }
};
// The time complexity of the removeDuplicates function is O(n), where n is the number of elements in the vector nums. 
// The function uses two pointers, one to keep track of unique elements and the other to traverse the vector. As a result, the function performs a constant amount of work for each element in the vector and thus has a linear time complexity.

// The space complexity of the function is O(1), as the function only uses a few variables to store intermediate values and does not require any additional data structures.
// The function modifies the input vector in-place, so no additional memory is allocated to store the results.