#include <iostream>
#include <string>
using namespace std;
 
int main() 
{
    int N, A = 0, D = 0;
    string W;
    cin >> N >> W;
    for(int i= 0; i <= N - 1 ; i++){
	    if (W[i] == 'A') A++; else D++;
	}
    if (A > D)	{printf("Anton");}
    if (A < D)	{printf("Danik");}
    if (A == D)	{printf("Friendship");}
    return 0;
}
