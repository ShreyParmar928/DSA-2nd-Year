#include <iostream>
#include<vector>
using namespace std;
int main() {

int size;
cin>>size;
int value;

vector<int>v;

for(int i = 0; i<size; i++){
 
    cin>>value;
    v.push_back(value);
}

int max=0;
for(int i = 0;i<v.size();i++){

    if(v[i]>max){
        max = v[i];
    }
    }
    
int ans = 0;
for(int i = 0; i<v.size();i++){
    if(max==v[i]){
        ans++;
    }
}
cout<<ans;
    return 0;
}
