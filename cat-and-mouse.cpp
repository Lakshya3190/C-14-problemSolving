/*
Two cats and a mouse are at various positions on a line. You will be given their starting positions. 
Your task is to determine which cat will reach the mouse first, assuming the mouse doesn't move 
and the cats travel at equal speed. If the cats arrive at the same time, the mouse will be allowed 
to move and it will escape while they fight.
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int case_test;
    cin>>case_test;
    for(int i=0;i<case_test;i++){
        int catA, catB, mouseC;
        cin>>catA>>catB>>mouseC;

        int case1 = abs(catA-mouseC);
        int case2 = abs(catB-mouseC);

        if(case1<case2){
            cout<<"Cat A"<<"\n";
        }
        else if(case2<case1){
            cout<<"Cat B"<<"\n";
        }
        else if(case2 == case1)
            cout<<"Mouse C"<<"\n";
        }
}
