//heuristically programmed
//HAL 9000
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 20005;

void rev(vector<int> &arr){
    int n = arr.size();

    for(int i = 0; i < n/2; i++)
    swap(arr[i], arr[n-i-1]);


}


int32_t main() {
    int t=1;
    // cin >> t;

    while (t--) {
        vector<int> arr = { 1, 4, 3, 2, 6, 5 };
        int n = arr.size();

        rev(arr);

        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

    }
}