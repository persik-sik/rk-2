#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> sumMatrix(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2) {
    int strok = mat1.size();
    int stolb = mat1[0].size();
    vector<vector<int>> res(strok, vector<int>(stolb));
    for (int i = 0; i < strok; ++i) {
        for (int j = 0; j < stolb; ++j) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return res;
}

int main() {
    vector<vector<int>> mat1 = {
        {1, 1, 1},
        {4, 4, 4},
        {9, 9, 9}
    };
    vector<vector<int>> mat2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<vector<int>> result = sumMatrix(mat1, mat2);
    for (const auto& a : result) {
        for (int el : a) {
            cout << el << " ";
        }
        cout << endl;
    }
    return 0;
}
