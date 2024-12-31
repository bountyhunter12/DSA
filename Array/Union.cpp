//heuristically programmed
//HAL 9000
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 20005;

vector<int> sortnp(vector<int> &a, vector<int> &b){
    int n = a.size();
    int m = b.size();

    int i=0,j=0;
    vector<int> c;
    while (i < n && j < m)
    {
        if(a[i] < b[j]){
            c.push_back(a[i]);
            i++;
        }
        else if(b[j] < a[i]){
            c.push_back(b[j]);
            j++;
        }else{
            c.push_back(a[i]);
            i++;
            j++;
        }
        
    }
    while (i < n) {

      	if(i > 0 && a[i - 1] == a[i]) {
            i++;
            continue;
        }
      	c.push_back(a[i]);
      	i++;
    }
    while (j < m) {
      	
      	if(j > 0 && b[j - 1] == b[j]) {
            j++;
            continue;
        }
      	c.push_back(b[j]);
      	j++;
    }
    
    return c;
    


}


int32_t main() {
    int t=1;
    // cin >> t;

    while (t--) {
        vector<int> a = { 1, 2, 3, 4, 5};
        vector<int> b = { 1, 2, 3};
        int n = a.size();
        int m = b.size();


        vector<int> c;
        c = sortnp(a,b);

        cout << c.size() << endl;

    }
}