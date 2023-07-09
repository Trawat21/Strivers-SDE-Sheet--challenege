class Solution {
public:
    int Sumofdivisor(vector<int>& nums, int div){
        int sum =0;
        for(int i =0;i<nums.size();i++){
            sum += ceil((double)(nums[i]) / (double)(div));
        }
        return sum;
        
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans = -1;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi = max(nums[i],maxi);
        }
        int low = 1;
        int high = maxi;
        while(low<=high){
            int mid = (low+high)/2;
            if(Sumofdivisor(nums,mid) <= threshold){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};