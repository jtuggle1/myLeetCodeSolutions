#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string firstPalindrome(vector<string>& words) {

    for (int i = 0; i < words.size(); i++){
        string r = words[i];
        reverse(r.begin(), r.end());
        if (words[i] == r){
            return words[i];
        }

    }

    return "";
}
int main() {
    vector<string> s;
    s.push_back("dog");
    s.push_back("ada");
    s.push_back("racecar");
    cout << firstPalindrome(s) << endl;
    return 0;
}
