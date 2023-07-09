class Solution {
public:
    bool possible(vector<int>& bloomDay,int day, int m, int k){
        int count =0;
        int noofBouq =0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i] <= day){
                count++;
            }
            else{
                noofBouq += count/k;
                count =0;
            }
            
        }
        noofBouq += (count/k);
        return (noofBouq >=m);
       }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long value = m* 1LL*k* 1LL;
        if(value > bloomDay.size()) return -1;
        int mini = INT_MAX; int maxi = INT_MIN;
        for(int i =0;i<bloomDay.size();i++){
            maxi = max(maxi, bloomDay[i]);
            mini = min(mini, bloomDay[i]);
        }
        int low = mini;
        int high = maxi;
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};