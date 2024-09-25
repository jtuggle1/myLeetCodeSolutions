#include <iostream>
#include <vector>
#include <map>

using namespace std;

string kthDistinct(vector<string>& arr, int k) {
    unordered_map<string, int> m;

    for(int i = 0; i < arr.size(); i++){
        if (m[arr[i]] == 0){
            m[arr[i]] = 1;
        } else{
            m[arr[i]] += 1;
        }

    }
    vector<string> r;
    for (int i = 0; i < arr.size(); i++){
        if (m[arr[i]] == 1){
            r.push_back(arr[i]);
        }

    }
    if (r.size() >= k){
        return r[k-1];
    } else{
        return "";
    }

    return "";
}
int main() {

    vector<string> e = {"a", "b", "aa", "a"};
    cout << kthDistinct(e, 2);
    return 0;
}
