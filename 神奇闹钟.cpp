#include <iostream>
#include <cmath>  // 添加cmath头文件以使用数学函数
using namespace std;

// 自定义函数计算以 base 为底 num 的对数
double customLog(double base, double num) {
    if (base <= 0 || base == 1 || num <= 0) {
        // 对数的底数必须大于 0 且不等于 1，真数必须大于 0
        std::cerr << "输入不合法：底数必须大于 0 且不等于 1，真数必须大于 0。" << std::endl;
        return -1;
    }
    // 使用换底公式计算对数
    return std::log(num) / std::log(base); 
}

int main() {
    // 计算e的值和e的n次方
    double x = exp(1);  // 计算e的值
    int n;
    cout << "请输入一个整数n，用于计算e的n次方: ";
    cin >> n;  // 从用户输入读取整数n
    double y = exp(n);  // 计算e的n次方

    // 输出结果，使用空格分隔
    cout << "e的值为: " << x << "，e的" << n << "次方为: " << y << endl;

    // 对数计算部分
    double num;
    cout << "请输入一个正数，用于计算以10为底和自然对数: ";
    cin >> num;
    if (num <= 0) {
        cout << "输入的数必须为正数才能计算对数。" << endl;
    } else {
        double log10Result = log10(num);  // 计算以10为底的对数
        double logResult = log(num);  // 计算自然对数
        cout << "以10为底 " << num << " 的对数为: " << log10Result << endl;
        cout << "以e为底 " << num << " 的对数为: " << logResult << endl;
    }

    // 自定义底数对数计算
    double base;
    cout << "请输入自定义对数的底数: ";
    cin >> base;
    cout << "请输入真数: ";
    cin >> num;
    double customLogResult = customLog(base, num);
    if (customLogResult != -1) {
        cout << "以 " << base << " 为底 " << num << " 的对数是: " << customLogResult << endl;
    }

    // 计算幂运算
    double basePow, exponent;
    cout << "请输入底数和指数，用于计算幂运算: ";
    cin >> basePow >> exponent;
    double powerResult = pow(basePow, exponent); // 计算幂运算结果
    cout << basePow << " 的 " << exponent << " 次方结果为: " << powerResult << endl;

    // 计算平方根
    double a;
    cout << "请输入一个非负数，用于计算平方根: ";
    cin >> a;
    if (a < 0) {
        cout << "输入的数为负数，在实数范围内无法计算平方根。" << endl;
    } else {
        double sqrtResult = sqrt(a);
        cout << a << " 的平方根为: " << sqrtResult << endl;
    }

    // 计算多次方根
    double number, root;
    cout << "请输入要计算多次方根的数和根的次数: ";
    cin >> number >> root;
    if (root == 0) {
        cout << "根的次数不能为零。" << endl;
    } else {
        double rootResult = pow(number, 1.0 / root);
        cout << number << " 的 " << root << " 次方根为: " << rootResult << endl;
    }

    return 0;
}
