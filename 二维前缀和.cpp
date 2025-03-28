#include <iostream>
#include <vector>
using namespace std;

// �����άǰ׺������
vector<vector<int>> getPrefixSum(const vector<vector<int>>& arr) {
    int m = arr.size();
    int n = arr[0].size();
    vector<vector<int>> sum(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + arr[i - 1][j - 1];
        }
    }
    return sum;
}

// �����Ӿ��� (x1, y1) �� (x2, y2) ��Ԫ�غ�
int getSubmatrixSum(const vector<vector<int>>& sum, int x1, int y1, int x2, int y2) {
    return sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
}

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<vector<int>> sum = getPrefixSum(arr);

    // �����Ӿ��� (1, 1) �� (2, 2) ��Ԫ�غ�
    int x1 = 1, y1 = 1, x2 = 2, y2 = 2;
    int submatrixSum = getSubmatrixSum(sum, x1, y1, x2, y2);
    cout << "�Ӿ��� (" << x1 << ", " << y1 << ") �� (" << x2 << ", " << y2 << ") ��Ԫ�غ�Ϊ: " << submatrixSum << endl;

    return 0;
}
