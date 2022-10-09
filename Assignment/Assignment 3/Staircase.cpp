#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    
    for(int i = 0;i<n;i++){
        int space;
        space = n-1-i;
        while(space){
            cout<<" ";
            space--;
        }
        for(int j = 0; j<=i ; j++){
            cout<<"#";
        }
        cout<<endl;
    }

    return 0;
}
