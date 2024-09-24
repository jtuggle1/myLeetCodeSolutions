#include <iostream>
#include <string>
#include <map>

using namespace std;

int countConsistentStrings(string allowed, vector<string>& words) {
    unordered_map<char,bool> c;
    for (int i = 0; i < allowed.length(); i++){
        c[allowed[i]] = true;
    }

    int a = 0;
    for (int i = 0; i < words.size(); i++){
        int j = 0;
        while(c[words[i][j]] == true && j < words[i].length()){
            j++;
        }

        if (j == words[i].length()){
            a++;
        }

    }

    return a;
}

int main() {
    vector<string> w = {"a","b","c","ab","ac","bc","abc"};
    string a = "abc";
    cout << countConsistentStrings(a,w) << endl;
    return 0;
}
