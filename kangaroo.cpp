/*
There are two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity). The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump. The second kangaroo starts at location x2 and moves at a rate of v2 meters per jump. Given the starting locations and movement rates for each kangaroo, 
can you determine if they’ll ever land at the same location at the same time?
*/


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
