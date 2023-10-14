#include <iostream>
using namespace std;

int main() {
    // Write C++ code here

    int N, H, T, W;
    W = 0;
    cin >> N >> H;
    while(N--){
        cin >> T;
        if (T > H){ W = W + 2;}
        else{ W++;}
    }
    
    printf("%d", W);
    return 0;
}
