class Solution{
public:
    int guessNumber(int n) {

        int low = 0+1;
        int high = n;
        
        while(low<high){
            
            int mid = low + (high - low)/2;
            int pick = guess(mid);
            if(pick <= 0){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        
        }
        return low;
    }
};
