/*
A Discrete Mathematics professor has a class of students. 
Frustrated with their lack of discipline, he decides to cancel class if 
fewer than some number of students are present when class starts. 
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int N,K,a,cnt = 0;
        cin >> N >> K;
        for(int i = 0; i < N; i++){
            cin >> a;
            if(a <= 0)cnt++;
        }
        if(cnt >= K)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}