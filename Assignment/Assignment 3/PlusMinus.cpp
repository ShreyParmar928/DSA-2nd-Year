#include <iostream>
#include<vector>
using namespace std;

int main() {

int n;
cin>>n;

int value;
vector<int>v;

for(int i = 0;i<n;i++){
    cin>>value;
    v.push_back(value);;
}

float positive = 0;
float negative = 0;
float zero = 0;
for(int i =0; i<v.size();i++){
    
    if(v[i]<0){
        negative++;
    }
    if(v[i]==0){
        zero++;
    }
    if(v[i]>0){
        positive++;
    }
}
float r1,r2,r3;
r1 = positive/v.size();
r2 = negative/v.size();
r3 = zero/v.size();

cout << r1 << endl << r2 << endl << r3 << endl;
    return 0;
}
