#include <iostream>
#include<vector>
using namespace std;
int main() {
    
int n;
cin>>n;

vector<int>v(n);

for(int i =0;i<n;i++){
    cin>>v[i];
}
int max = v[0];
int min = v[0];
int max_count = 0;
int min_count = 0;

for(int i = 1; i<v.size(); i++){
    
    if(max<v[i]){
        max = v[i];
        max_count++;
    }
    
    if(min>v[i]){
        min = v[i];
        min_count++;
    }
}

cout<<max_count<<" "<<min_count;
    return 0;
}
