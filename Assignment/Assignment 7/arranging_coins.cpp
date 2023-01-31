class Solution {
public:
    int arrangeCoins(int n) {
     int start = 0;
     for(int i=1; i<=n; i++){
         if(n-i<0)break;
         start++;
         n=n-i;
     } 
     return start;  
    }
};
