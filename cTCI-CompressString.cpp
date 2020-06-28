#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

string stringCompress(string s1){
    sort(s1.begin(), s1.end()); //O(nlog(n)
    string s2;
    int count_unique = 0;
    int count_rep = 1;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] != s1[i+1]){
            count_unique++;
        }
    }
    
    if(2*count_unique > s1.length()){
        return s1;
    }
        
    for(int i = 0; i < s1.length(); i++){
        while(s1[i] == s1[i+1]){
            count_rep++;
        }
        s2.append(to_string(s1[i]));
        s2.append(to_string(count_rep));
    }
    
    return s2;
}
    
int main(){
    string s1 = "hellobello";
    string a = stringCompress(s1);
    cout<<a;
}
    