class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int curptr,nxtptr;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i+1]>prices[i]){
                curptr=i+1;
              while(curptr<prices.size()-1 && prices[curptr+1]>prices[curptr]){
                  curptr++;
              }
                profit+=prices[curptr]-prices[i];
                i=curptr;
            }
        }
        return profit;
    }
};
//  The time complexity of this code is O(n), where n is the size of the prices vector. This is because the code uses a single for-loop to traverse the prices vector, and the while-loop inside the for-loop takes constant time per iteration. 
//  The space complexity of this code is O(1), as it only uses a constant amount of extra space to store the profit and two pointers.