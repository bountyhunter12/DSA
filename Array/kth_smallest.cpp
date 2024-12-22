//heuristically programmed
//HAL 9000
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 20005;

void kth(vector<int> &arr, int k){
    int n = arr.size();

    for(int i =0; i < n; i++)
    {
        int mini = i;

        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }

    cout << arr[k-1];

    


}


int32_t main() {
    int t=1;
    // cin >> t;

    while (t--) {
        vector<int> arr = { 7, 10, 4, 3, 20, 15};
        int n = arr.size();
        int k = 3;
        kth(arr,k);

        

    }
}