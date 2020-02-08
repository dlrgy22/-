#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001],dp[1001],result, N;
int main() {
    cin >>N;
    for(int i = 1; i <= N; ++i) {
        cin >> arr[i];
        int count = 0;
        for(int j = 1; j < i; ++j) {
            if(arr[i] > arr[j])
                count = max(count, dp[j]);
        }
        dp[i] = count + 1;
        result = max(result, dp[i]);
    }
    cout << result;
    return 0;
}
