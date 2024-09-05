#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    if (original.size() != (m*n)){
        return vector<vector<int>>();
    }
    vector<vector<int>> p(m, vector<int>(n,0));




    int i = 0;

    for (int j = 0; j < m; j++){
        for (int k = 0; k < n; k++){

            p[j][k] = original [i];
            i++;
        }

    }
    return p;
}

int main() {
    vector<int> p = {1,2,3,4};
    vector<vector<int>> s =  construct2DArray(p,2,2);
    for (int j = 0; j < 2; j++){
        for (int k = 0; k < 2; k++){

            std::cout << s[j][k];
        }
        cout << endl;
    }

    return 0;
}
