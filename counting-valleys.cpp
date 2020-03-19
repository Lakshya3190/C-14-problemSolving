/*
The Counting Valleys challenge is counting the number of valleys Gary the hiker goes though:
Gary = Hiker
Sea level is 0 — Also the starting level
S = Descriptive string that is the path of steps Gary the hiker takes
U and D are “Up” and “Down” respectively and the direction of Gary’s step
N = number of steps between 2 and 10⁶ (1,000,000)
AR is a single string of spaced numbers with values ranging between 1 and 100 — ex 10 11 20 31
N is the number of values in steps in the path between 2 and 1,000,000 (which could be useless if we’re just calculating the array length)
A valley is defined as going lower than sea level and then back to sea level
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int count=0,sum=0, count_int=0;
    int size;
    cin>>size;
    char arr[size];
    int track[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int j=0;j<size;j++){
        int up=0,down=0;
        bool flag = 0;
        if(arr[j] == 'D'){
            down = -1;
        }
        else if(arr[j] == 'U'){
            up = 1;
        }
        sum = sum + up + down;
        track[j] = sum;

        if(sum == 0 && track[j-1]<0){
            count++;
        }
    }

    cout<<count;

}
