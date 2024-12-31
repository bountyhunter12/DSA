//heuristically programmed
//HAL 9000
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 20005;

void sortnp(vector<int> &arr){
    int n = arr.size();

    int l=0,m=0,h=n-1;
    while(m<=h){
        if(arr[m]<0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        }else{
            swap(arr[m],arr[h]);
            h--;
        }
    }
    


}


int32_t main() {
    int t=1;
    // cin >> t;

    while (t--) {
        vector<int> arr = { -12, 11, -13, -5, 6, -7, 5, -3, -6};
        int n = arr.size();
        
        sortnp(arr);

        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

    }
}