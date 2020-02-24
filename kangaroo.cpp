#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;

    int count1 = x1 + v1;
    int count2 = x2 + v1;
    bool flag_true = 0;
    bool flag_false = 0;


    for(int i = 0; i<10000; i++){
        count1 = count1 +v1;
        count2 = count2 + v2;

        if(count1 == count2){
            flag_true = 1;
        }
    }

    if(flag_true == 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    
}
