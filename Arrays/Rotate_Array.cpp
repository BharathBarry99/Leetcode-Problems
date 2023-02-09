class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int p=n-k-1;
        
        vector<int> temp(n);
        if(n==0 || k<0){
            return ;
        }
        
        for(int i=0;i<k;i++){
            temp[i]=nums[p+1+i];
        }
        for(int i=0;i<=p;i++){
            temp[k+i]=nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }

        
    }
};