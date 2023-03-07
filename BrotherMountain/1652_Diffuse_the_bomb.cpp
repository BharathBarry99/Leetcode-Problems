class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
    int n = code.size();
    vector<int> cpy(n);
    if(k>0){
        for(int i=0;i<n;i++){
            for(int j=1;j<=k;j++){
                cpy[i]+=code[(i+j)%n];
            }
        }
        return cpy;
    }
    else if (k==0){
        for(int i=0;i<n;i++){
            cpy[i]=0;
        }
        return cpy;
    }
    else if (k<0){
        for(int i=0;i<n;i++){
            for(int j=1;j<=abs(k);j++){
                cpy[i]+=code[(i-j+n)%n];
            }
        }
        return cpy;
    }
    
    return cpy;
    }
};

// The time complexity of this code is O(n*k) in the worst case, where n is the length of the input code vector and k is the value of the input integer k.
// The space complexity of this code is O(n), since it creates a new vector cpy of the same length as the input vector code. 