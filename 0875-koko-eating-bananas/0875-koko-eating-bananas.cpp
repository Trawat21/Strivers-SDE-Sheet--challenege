class Solution {
public:
    
    
    long long totalHours(vector<int>& piles, int h){
        long long totalhours=0;
        for(int i=0;i<piles.size();i++){
           totalhours += ceil(piles[i]/(double)h);  
        }
        return totalhours;
    }
    int findmaxi(vector<int> &piles){
        int maxi = INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi = max(maxi,piles[i]);
        }
        return maxi;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findmaxi(piles);
        while(low<=high){
            int mid = (low+high)/2;
            long long totalhours = totalHours(piles,mid);
            if(totalhours <= h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};