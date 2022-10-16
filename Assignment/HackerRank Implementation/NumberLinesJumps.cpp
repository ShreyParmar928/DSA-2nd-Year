#include <iostream>
#include<vector>
using namespace std;
int main() {
    
    int x1,v1,x2,v2;
    
    cin>>x1>>v1>>x2>>v2;
    int flag = 0;
    
    
    while(x1<100000000){
        
    x1 = x1+v1;
    x2 = x2+v2;
    
    if(x1 == x2){
            flag = 1;
             break;
    }
        
    }
    if(flag == 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}
