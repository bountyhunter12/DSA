//heuristically programmed
//HAL 9000
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
// const int N = 20005;

int maxi(int A[], int N){
    sort(A, A+N);
    return A[N-1];
}

int mini(int A[], int N){
    sort(A, A+N);
    return A[0];
}

int32_t main() {
    int t=1;
    // cin >> t;

    while (t--) {
        int A[] = { 4, 9, 6, 5, 2, 3 };
        int N = 6;
        cout <<"Minimum element is: " << mini(A, N) << endl;
        cout <<"Miximum  element is: "<< maxi(A, N) << endl;

    }
}