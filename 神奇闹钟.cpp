#include <iostream>
#include <cmath>  // ���cmathͷ�ļ���ʹ����ѧ����
using namespace std;

// �Զ��庯�������� base Ϊ�� num �Ķ���
double customLog(double base, double num) {
    if (base <= 0 || base == 1 || num <= 0) {
        // �����ĵ���������� 0 �Ҳ����� 1������������� 0
        std::cerr << "���벻�Ϸ�������������� 0 �Ҳ����� 1������������� 0��" << std::endl;
        return -1;
    }
    // ʹ�û��׹�ʽ�������
    return std::log(num) / std::log(base); 
}

int main() {
    // ����e��ֵ��e��n�η�
    double x = exp(1);  // ����e��ֵ
    int n;
    cout << "������һ������n�����ڼ���e��n�η�: ";
    cin >> n;  // ���û������ȡ����n
    double y = exp(n);  // ����e��n�η�

    // ��������ʹ�ÿո�ָ�
    cout << "e��ֵΪ: " << x << "��e��" << n << "�η�Ϊ: " << y << endl;

    // �������㲿��
    double num;
    cout << "������һ�����������ڼ�����10Ϊ�׺���Ȼ����: ";
    cin >> num;
    if (num <= 0) {
        cout << "�����������Ϊ�������ܼ��������" << endl;
    } else {
        double log10Result = log10(num);  // ������10Ϊ�׵Ķ���
        double logResult = log(num);  // ������Ȼ����
        cout << "��10Ϊ�� " << num << " �Ķ���Ϊ: " << log10Result << endl;
        cout << "��eΪ�� " << num << " �Ķ���Ϊ: " << logResult << endl;
    }

    // �Զ��������������
    double base;
    cout << "�������Զ�������ĵ���: ";
    cin >> base;
    cout << "����������: ";
    cin >> num;
    double customLogResult = customLog(base, num);
    if (customLogResult != -1) {
        cout << "�� " << base << " Ϊ�� " << num << " �Ķ�����: " << customLogResult << endl;
    }

    // ����������
    double basePow, exponent;
    cout << "�����������ָ�������ڼ���������: ";
    cin >> basePow >> exponent;
    double powerResult = pow(basePow, exponent); // ������������
    cout << basePow << " �� " << exponent << " �η����Ϊ: " << powerResult << endl;

    // ����ƽ����
    double a;
    cout << "������һ���Ǹ��������ڼ���ƽ����: ";
    cin >> a;
    if (a < 0) {
        cout << "�������Ϊ��������ʵ����Χ���޷�����ƽ������" << endl;
    } else {
        double sqrtResult = sqrt(a);
        cout << a << " ��ƽ����Ϊ: " << sqrtResult << endl;
    }

    // �����η���
    double number, root;
    cout << "������Ҫ�����η��������͸��Ĵ���: ";
    cin >> number >> root;
    if (root == 0) {
        cout << "���Ĵ�������Ϊ�㡣" << endl;
    } else {
        double rootResult = pow(number, 1.0 / root);
        cout << number << " �� " << root << " �η���Ϊ: " << rootResult << endl;
    }

    return 0;
}
