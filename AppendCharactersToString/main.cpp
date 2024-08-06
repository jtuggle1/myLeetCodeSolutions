#include <iostream>
#include <string>

using namespace std;
int appendCharacters(string s, string t) {
    int i = 0, j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            j++;
        }
        i++;
    }
    return t.size() - j;
}



int main() {
    int i = appendCharacters("coaching", "coding");
    cout << i << endl;
    return 0;
}
