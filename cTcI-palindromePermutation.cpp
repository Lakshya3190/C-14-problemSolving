/*Given a string, check if it is a permutation of a palindrome*/

/*
Palindrome:
    aabbaa
    aabaa
    
if str.length() => odd
    n-1 chars in string occur even no. of times
    at most 1 char can occur odd no. of times

if str.length() => even
    all chars will occur even no. of times
*/

#include<string>
#include<vector>
#include<iostream>

using namespace std;

int getCharNumber(const char &c){
    
    int a = (int) 'a';
    int z = (int) 'z';
    int A = (int) 'A';
    int Z = (int) 'Z';
    int val = (int) c;
    if(a<= val && val<= z){
        return val - 'a';
    }
    if(Z<=val && val <= Z){
        return val - 'A';
    }
    
    return -1;
}

vector <int> buildCharFrequencyTable(string phrase){
    vector <int> table(getCharNumber('z') - getCharNumber('a') + 1, 0);
    
    for(char &c: phrase){
        int x = getCharNumber(c);
        if(x != -1){
            table[x]++;
        }
    }
    
    return table;
}

bool checkMaxOneOdd(vector<int> &table){
    bool foundOdd = false;
    for(auto count: table){
        if(count%2 == 1){
            if(foundOdd){
                return false;
            }
            foundOdd = true;
        }
    }
    return true;
}

bool isPermutationOfPalindrome(const string &phrase){
    vector<int> table = buildCharFrequencyTable(phrase);
    return checkMaxOneOdd;
}

int main(int argc, const char *argv[])
{
    string pali = "Rats live on no evil star";
    string isPermutation = isPermutationOfPalindrome(pali) ? "yes" : "no";
    cout << isPermutation << endl;
    return 0;
}








