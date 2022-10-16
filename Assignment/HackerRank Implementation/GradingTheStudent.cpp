#include <iostream>
#include<vector>
using namespace std;

int main() {
  int n;
  cin>>n;
  int g;
  vector<int>v(n);

  for(int i = 0; i<n ; i++){
      cin>>v[i];
  }

  for(int i = 0; i<v.size(); i++){

      if(v[i]>=38){
        g = v[i]%5;
      
        if(g>=3){
          v[i] += 5-g;
        }
      }
  }

  for(int i = 0; i<n ; i++){
      cout<<v[i]<<endl;
  }

  return 0;
}
