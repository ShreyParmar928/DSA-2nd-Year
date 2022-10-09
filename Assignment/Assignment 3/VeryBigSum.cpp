#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'aVeryBigSum' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_ARRAY ar as parameter.
 */

long aVeryBigSum(vector<long> ar) {
    int n = ar.size();
    long sum = 0; 

    for (int i = 0; i < n; ++i) {
        sum += ar[i];
    }
    return sum;

}

int main(){
    
    int a;
    int n;
    cin >> n; 
    vector<long> arr;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        arr.push_back(a);
    }
    
    long result = aVeryBigSum(arr);
    cout << result;
    
    return 0;
}
