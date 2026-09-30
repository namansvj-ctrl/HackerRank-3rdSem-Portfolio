#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();

    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;

    for (int i = 0; i < n; i++) {
        primaryDiagonal += arr[i][i];
        secondaryDiagonal += arr[i][n - 1 - i];
    }

    return abs(primaryDiagonal - secondaryDiagonal);
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << diagonalDifference(arr) << endl;

    return 0;
}