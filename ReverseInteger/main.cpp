#include <string>
#include <iostream>

using namespace std;

int reverse(int x) {
    string s = to_string(x);
    string r = "";

    //check if negative
    if (s[0] == '-') {
        r += "-";
        s.erase(0, 1);
    }

    //loop through
    for (int i = s.length() - 1; i >= 0; i--) {
        r += s[i];

    }

    long int o = stol(r);

    if (o > 2147483647 || o < -2147483647) {
        return 0;
    }

    return o;
}

int main() {
    int i = reverse(12345);
    cout << i << endl;
	return 0;
}

