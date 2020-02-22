/*
Given a time in AM/PM format, convert it to military (24-hour) time.
*/

#include <bits/stdc++.h>
#include <string.h>

using namespace std;

void convert24(string t){
    //For AM
    if(t[8]=='A'){
        string hour = t.substr(0,2);
        int int_hour = stoi(hour);
        if(int_hour==12){
            int_hour=00;
        hour = to_string(int_hour);
        cout<<hour;

        string updated_t = hour.append(t.substr(2,6));
        cout<<updated_t;}
        else {
            cout<<t.substr(0,8);
        }
    }

    //For PM
    if(t[8]=='P'){
        string change = t.substr(0,2);
        int int_change = stoi(change);
        if(int_change == 12){
            int_change = int_change+0;
        }
        else{
        int_change = int_change+12;
        }
        change = to_string(int_change);
        string t1 = t.substr(2,6);
        change.append(t1);
        cout<<change;
}
}

int main(){
     string time;
     cin>>time;

     convert24(time);
}