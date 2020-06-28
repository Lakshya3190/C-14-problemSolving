#include<iostream>
#include<algorithm>

using namespace std;

/*Given two strings, write a method to decide if one is a permutation of 
the other*/

/*Solution 1: Sort strings, compare them char by char*/

bool sort_solution(string str1, string str2){
    
    if(str1.length() != str2.length()){
        return false;
    }
    
    
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
    for(int i = 0; i< str1.length(); i++){
        if(str1.length() == str2.length()){
            return true;
        }
    }
    
    return true;
}



// Solution2: Compare the presence of each character in the string
bool charCount_solution(const string &str1, const string &str2){
    if(str1.length() != str2.length()){
        return false;
    }
    
    int count[256] = {0};
    for(int i = 0; i< str1.length(); i++){
        int val = str1[i];
        count[val]++;
    }
    for(int j = 0; j< str2.length(); j++){
        int val = str2[j];
        count[val]--;
        
        if(count[val] < 0){
            return false;
        }
    }
    
    return true;
}


int main(){
    string str1 = "hello";
    string str2 = "elhlo";
    
    //Testing method1
    int output1 = sort_solution(str1, str2);
    //Testing method2
    int output2 = charCount_solution(str1, str2);
    
    
    cout<<output1<<" "<<output2;
}


