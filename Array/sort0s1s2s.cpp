//heuristically programmed
//HAL 9000
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 20005;

void sort012(vector<int> &arr){
    int n = arr.size();

    int l=0,m=0,h=n-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        } else if(arr[m]==1){
            m++;
        } else{
            swap(arr[m],arr[h]);
            h--;
        }
    }

}


int32_t main() {
    int t=1;
    // cin >> t;

    while (t--) {
        vector<int> arr = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
        int n = arr.size();

        sort012(arr);

        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

    }
}