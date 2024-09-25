#include <iostream>
#include <vector>
#include <map>

using namespace std;

int mostFrequentEven(vector<int>& nums) {
    unordered_map<int, int> m;
    vector<int> even;
    for (int i = 0; i < nums.size(); i++){
        if(nums[i] % 2 == 0){
            even.push_back(nums[i]);
        }
    }
    if (even.empty()){
        return -1;
    }

    int r = 0;
    int rc = 0;

    for (int i = 0; i < even.size(); i++){
        m[even[i]] += 1;

    }

    for (int i = 0; i < even.size(); i++){
        if (rc < m[even[i]]){
            rc = m[even[i]];
            r = even[i];
        } else if (rc == m[even[i]]){
            if (r > even[i]){
                r = even[i];
            }
        }

    }






    return r;
}
int main() {
    vector<int> j = {2,4,2,2,2,4};
    cout << mostFrequentEven(j) << endl;
    return 0;
}
