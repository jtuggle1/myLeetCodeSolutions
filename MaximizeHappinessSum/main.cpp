#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long maximumHappinessSum(vector<int>& happiness, int k) {
    long long sum = 0;
    sort(happiness.begin(), happiness.end());
    int size = happiness.size() - 1;
    int dec = 0;

    //go through k times
    for(int i = 0; i < k; i++){
        if((happiness[size] + dec) >= 0){
            sum += (happiness[size] + dec);
        }

        happiness.erase(happiness.begin() + size);
        size--;
        dec--;

    }


    return sum;
}

int main() {
    vector<int> arr = {1, 2, 3};
    long long i = maximumHappinessSum(arr, 2);
    cout << i << endl;
    return 0;
}
