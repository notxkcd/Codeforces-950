#include <iostream>
#include <vector>
#include <ranges>
#include <string>
#include <cmath>
#include <algorithm> // Include this for the find function
using namespace std;

#define ll long long
#define ld long double

int vfind(vector<int> vec, int n)
{
    auto idx = find(vec.begin(), vec.end(), n);
    if (idx != vec.end()){
            return (idx - vec.begin());
    }
    return -1;
}


void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) {
            solve();
    }

    return 0;
}
