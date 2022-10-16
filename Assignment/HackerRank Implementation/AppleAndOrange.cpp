#include <iostream>
#include<vector>
using namespace std;
int main() {
    
int s,t,a,b,m,n;
// s = starting point of house
// t = end point of house
// a = apple location
// b - orange location
// m = number of apples drop
// n = number of oranges drop

cin >> s >> t;

cin >> a >> b;

cin >> m >> n;

vector<int>v1(m);
// vector<>v1 = gire hue apple ki location

vector<int>v2(n);
// vector<>v2 = gire hue orange ki location

for(int i =0; i<m ;i++){
    cin>>v1[i];
}

for(int i =0; i<n ;i++){
    cin>>v2[i];
}

int apple_count = 0;
int orange_count = 0;

// for the apples
for(int i =0; i<v1.size();i++){
    if( (a + v1[i] >= s) && (a + v1[i] <= t) ){
        apple_count++;
    }
}

// for the oranges
for(int i =0; i<v2.size();i++){
    if( (b + v2[i] >= s) && (b + v2[i] <= t) ){
      orange_count++;
    }
}

cout<<apple_count<<endl<<orange_count;
    return 0;
}
