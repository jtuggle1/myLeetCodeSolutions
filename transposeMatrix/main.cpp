#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    vector<vector<int>> m(matrix[0].size(), vector<int>(matrix.size(),0));

    for (int i = 0; i < matrix.size(); i++){

        for (int j = 0; j < matrix[i].size(); j++){
            m[j][i] = matrix[i][j];

        }
    }
    return m;
}

int main() {
    vector<vector<int>> vec = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vec = transpose(vec);
    for (int i = 0; i < vec.size(); i++){

        for (int j = 0; j < vec[i].size(); j++){
            std::cout << vec[i][j];

        }
        cout << endl;
    }

    return 0;
}
