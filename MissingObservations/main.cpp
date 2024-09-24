#include <iostream>
#include <vector>

using namespace std;

int helperSum(vector<int> s){
    int j = 0;
    for (int i = 0; i < s.size(); i++){
        j += s[i];
    }
    return j;
}

vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
    //test if possible at max size
    int nMaxSize = n * 6;
    int totalSize = n + rolls.size();
    int currentSize = helperSum(rolls);
    if (totalSize * mean > currentSize + nMaxSize) {
        vector<int> a;
        return a;
    }

    //lowest case as well
    if (currentSize + n > totalSize * mean) {
        vector<int> a;
        return a;
    }

    int gs = totalSize * mean;
    int s = currentSize + n;

    //default to lowest size
    vector<int> r(n,1);

    int i = 0;
    while(s < gs) {
        r[i]++;
        s++;
        i++;
        if (i == n) {
            i = 0;
        }
    }







    return r;





}

void showVector(vector<int> h) {
    for(int i = 0; i < h.size(); i++) {
        cout << h[i];
        cout << " ";
    }
    cout << endl;
}

int main() {
    vector<int> rolls = {3,2,4,3};
    showVector(missingRolls(rolls, 4, 2));

    vector<int> r = {1,5,6};
    showVector(missingRolls(r, 3, 4));

    return 0;
}
