#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int a[n][n];
    
   for(int i = 0;i<n; i++){
       for(int j = 0;j<n;j++){
           cin>>a[i][j];
       }
   }
    int sum1 = 0;
    int sum2 = 0;
    int k = n-1;
    for(int i = 0;i<n;i++ ){
        
        for(int j = 0;j<n;j++){
            if(i==j){
                sum1 = sum1+a[i][j];
            }
         if(j==k){
                sum2 = sum2+a[i][k];
        }
        }
        k--;
    }
    int ans;

    ans = sum1 - sum2;
    // cout<<sum1<<" "<<sum2;
    cout<<abs(ans);
    return 0;
}
