#include <iostream>
#include <vector>
using namespace std;

// ����ǰ׺������
vector<int> prefixSum(const vector<int>& arr) {
    int n = arr.size();
    vector<int> sum(n);
    sum[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        sum[i] = sum[i - 1] + arr[i];
    }
    return sum;
}

// �������� [l, r] �ĺ�
int getRangeSum(const vector<int>& sum, int l, int r) {
    if (l == 0) {
        return sum[r];
    }
    return sum[r] - sum[l - 1];
}

int main() {
    vector<int> arr;
    // �ֶ����Ԫ��
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    vector<int> sum = prefixSum(arr);

    // �������� [1, 3] �ĺ�
    int l = 1, r = 3;
    int rangeSum = getRangeSum(sum, l, r);
    cout << "���� [" << l << ", " << r << "] �ĺ�Ϊ: " << rangeSum << endl;

    return 0;
}
