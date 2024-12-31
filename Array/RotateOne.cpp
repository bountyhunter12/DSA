//heuristically programmed
//HAL 9000
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 20005;

void rotate(vector<int> &a){
    int n = a.size();
    int x = a[n-1];
    for (int i = n-1; i >= 1; i--)
    {
        
        a[i] = a[i-1];
    }
    a[0] = x;
    
    


}


int32_t main() {
    int t=1;
    // cin >> t;

    while (t--) {
        vector<int> arr = { 1, 2, 3, 4, 5};
        int n = arr.size();
        
        rotate(arr);

        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

    }
}