/*
At HackerLand University, a passing grade is any grade 40 points or higher on a 100 point scale. Sam is a professor at the university 
and likes to round each student’s grade according to the following rules:
If the difference between the grade and the next higher multiple of 5 is less than 3,
 round to the next higher multiple of 5
If the grade is less than 38, don’t bother as it’s still a failing grade
Automate the rounding process then round a list of grades and print the results.

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cin>>size;
    int grades[size];
    int rounded;
    int remainder;

    for(int i=0;i<size;i++){
        cin>>grades[i];
    }

    for(int j=0; j<size; j++){
        if(grades[j]>=38){
            remainder = grades[j]%5;
            if(remainder == 4 or remainder == 3 )
            {
                rounded = grades[j]+(5-remainder);
                grades[j] = rounded;
            }     
        }
    }

    for(int k=0;k<size;k++){
        cout<<grades[k]<<"\n";
    }

    return 0;
}
