class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int curr =0;
        int count =0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(!pq.empty()){
            if(pq.top()==0) pq.pop();
            else{
                int top = pq.top()-curr;
                if(top!=0){
                    curr+= top;
                    count++;
                }
                pq.pop();
            }
        }
        return count;
    }
};