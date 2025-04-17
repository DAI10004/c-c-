#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

// 1. 奇数和
int oddSum() {
	int sum = 0;
	for (int i = 1; i <= 100; i += 2) {
		sum += i;
	}
	return sum;
}

// 2. 偶数和
int evenSum() {
	int sum = 0;
	for (int i = 2; i <= 100; i += 2) {
		sum += i;
	}
	return sum;
}

// 3. 分式求和
double fractionSum() {
	double sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += 1.0 / i;
	}
	return sum;
}

// 4. 猜数小助手
void guessNumberGame() {
	std::srand(std::time(0));
	int target = std::rand() % 100 + 1;
	int guess, attempts = 0;
	std::cout << "游戏开始，请输入1到100之间的整数" << std::endl;
	do {
		std::cin >> guess;
		attempts++;
		if (guess < target) {
			std::cout << "太小了，再试一次！" << std::endl;
		}
		else if (guess > target) {
			std::cout << "太大了，再试一次！" << std::endl;
		}
		else {
			std::cout << "恭喜你，猜对了，你用了" << attempts << "次。" << std::endl;
		}
	} while (guess != target);
}

// 5. 九九表
void multiplicationTable() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << j << "*" << i << "=" << i * j << "\t";
		}
		std::cout << std::endl;
	}
}

// 6. 子函数九九表
void printRow(int row) {
	for (int i = 1; i <= row; i++) {
		std::cout << i << "*" << row << "=" << i * row << "\t";
	}
	std::cout << std::endl;
}

void multiplicationTableWithFunction() {
	for (int i = 1; i <= 9; i++) {
		printRow(i);
	}
}

// 7. 15行杨辉三角
void pascalTriangle() {
	const int rows = 15;
	int prev[rows] = { 0 };
	int curr[rows] = { 0 };
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				curr[j] = 1;
			}
			else {
				curr[j] = prev[j - 1] + prev[j];
			}
			std::cout << curr[j] << " ";
		}
		std::cout << std::endl;
		for (int j = 0; j <= i; j++) {
			prev[j] = curr[j];
		}
	}
}

// 8. 选择排序的降序
void selectionSortDescending(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int max_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[max_idx]) {
				max_idx = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[max_idx];
		arr[max_idx] = temp;
	}
}

// 9. 冒泡排序的升序
void bubbleSortAscending(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

// 10. 闰年个数
bool isLeap(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void countLeapYears() {
	int count = 0;
	for (int year = 2000; year <= 3000; year++) {
		if (isLeap(year)) {
			std::cout << year << " ";
			count++;
			if (count % 15 == 0) {
				std::cout << std::endl;
			}
		}
	}
	std::cout << std::endl << "总共有" << count << "个闰年。" << std::endl;
}

// 11. fibo前10个素数
bool isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void first10FiboPrimes() {
	int fib[100];
	fib[0] = 1;
	fib[1] = 1;
	int count = 0;
	int i = 2;
	while (count < 10) {
		fib[i] = fib[i - 1] + fib[i - 2];
		if (isPrime(fib[i])) {
			std::cout << fib[i] << " ";
			count++;
		}
		i++;
		if (i >= 100) break;
	}
	std::cout << std::endl;
}

// 12. 输入一个数检查素数
void checkPrime() {
	int n;
	std::cout << "请输入一个整数：";
	std::cin >> n;
	if (n <= 1) {
		std::cout << "这不是素数" << std::endl;
		return;
	}
	bool isPrimeNum = true;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			isPrimeNum = false;
			break;
		}
	}
	if (isPrimeNum) {
		std::cout << n << "是素数" << std::endl;
	}
	else {
		std::cout << n << "不是素数" << std::endl;
	}
}

// 13. 一元二次方程的根
void quadraticEquation() {
	double a, b, c;
	std::cout << "请输入a, b, c：";
	std::cin >> a >> b >> c;
	if (a == 0) {
		std::cout << "这不是二次方程。" << std::endl;
		return;
	}
	double D = b * b - 4 * a * c;
	if (D < 0) {
		std::cout << "无实根" << std::endl;
	}
	else {
		double sqrtD = std::sqrt(D);
		double x1 = (-b + sqrtD) / (2 * a);
		double x2 = (-b - sqrtD) / (2 * a);
		std::cout << "实根为：x1=" << x1 << ", x2=" << x2 << std::endl;
	}
}

// 14. 水仙花数
void narcissisticNumbers() {
	for (int num = 100; num < 1000; num++) {
		int a = num / 100;
		int b = (num / 10) % 10;
		int c = num % 10;
		if (a * a * a + b * b * b + c * c * c == num) {
			std::cout << num << " ";
		}
	}
	std::cout << std::endl;
}

// 15. 转置矩阵
void transposeMatrix() {
	int matrix[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
	std::cout << "原矩阵：" << std::endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << "转置后的矩阵：" << std::endl;
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 3; i++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

// 16. fibo前40个数中的偶数
void evenFiboNumbers() {
	int fib[40];
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i < 40; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	int count = 0;
	std::cout << "前40个数中的偶数为：";
	for (int i = 0; i < 40; i++) {
		if (fib[i] % 2 == 0) {
			std::cout << fib[i] << " ";
			count++;
		}
	}
	std::cout << std::endl << "共有" << count << "个偶数。" << std::endl;
}

// 17. 5！
int factorial(int n) {
	if (n == 0 || n == 1) return 1;
	return n * factorial(n - 1);
}

// 18. 多项式计算
double calculate(int n, int sign, double denominator) {
	if (n == 0) return 0;
	double term = sign / denominator;
	return term + calculate(n - 1, -sign, denominator + 2);
}

// 19. 玫瑰花数
bool isRose(int num) {
	if (num < 1000 || num > 9999) return false;
	int sum = 0;
	int temp = num;
	while (temp > 0) {
		int digit = temp % 10;
		sum += digit * digit * digit * digit;
		temp /= 10;
	}
	return sum == num;
}

void roseNumbers() {
	std::cout << "玫瑰花数有：";
	for (int num = 1000; num < 10000; num++) {
		if (isRose(num)) {
			std::cout << num << " ";
		}
	}
	std::cout << std::endl;
}

// 20. 回文数
bool isPalindrome(int num) {
	int original = num;
	int reversed = 0;
	while (num > 0) {
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return reversed == original;
}

void palindromeNumbers() {
	std::cout << "回文数有：";
	for (int num = 100; num < 10000; num++) {
		if (isPalindrome(num)) {
			std::cout << num << " ";
		}
	}
	std::cout << std::endl;
}

// 21. 用辗转相减法求最大公约数
int gcdSubtract(int a, int b) {
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a;
}

// 22. 用辗转相除法求最大公约数
int gcdDivide(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

// 23. 随机输出三个数
void randomThreeNumbers() {
	std::srand(std::time(0));
	for (int i = 0; i < 3; i++) {
		std::cout << std::rand() % 100 + 1 << " ";
	}
	std::cout << std::endl;
}

int main() {
	std::cout << "1. 奇数和: " << oddSum() << std::endl;
	std::cout << "2. 偶数和: " << evenSum() << std::endl;
	std::cout << "3. 分式求和: " << fractionSum() << std::endl;
	guessNumberGame();
	multiplicationTable();
	multiplicationTableWithFunction();
	pascalTriangle();
	int arr1[8];
	std::cout << "请输入8个整数：";
	for (int i = 0; i < 8; i++) {
		std::cin >> arr1[i];
	}
	selectionSortDescending(arr1, 8);
	std::cout << "8. 选择排序的降序结果为：";
	for (int i = 0; i < 8; i++) {
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;
	int arr2[8];
	std::cout << "请输入8个整数：";
	for (int i = 0; i < 8; i++) {
		std::cin >> arr2[i];
	}
	bubbleSortAscending(arr2, 8);
	std::cout << "9. 冒泡排序的升序结果为：";
	for (int i = 0; i < 8; i++) {
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;
	countLeapYears();
	first10FiboPrimes();
	checkPrime();
	quadraticEquation();
	narcissisticNumbers();
	transposeMatrix();
	evenFiboNumbers();
	std::cout << "17. 5! = " << factorial(5) << std::endl;
	std::cout << "18. 多项式计算结果: " << calculate(7, 1, 1) << std::endl;
	roseNumbers();
	palindromeNumbers();
	int a, b;
	std::cout << "请输入两个整数：";
	std::cin >> a >> b;
	std::cout << "21. 用辗转相减法求最大公约数: " << gcdSubtract(a, b) << std::endl;
	std::cout << "请输入两个整数：";
	std::cin >> a >> b;
	std::cout << "22. 用辗转相除法求最大公约数: " << gcdDivide(a, b) << std::endl;
	randomThreeNumbers();
	return 0;
}
// 24. 计算1+2+3+...+100	
int oddSum() {
	int sum = 0;
	for (int i = 1; i <= 100; i += 2) {
		sum += i;
	}
	return sum;
}
// 25. 计算2+4+6+...+100
int evenSum() {
	int sum = 0;
	for (int i = 2; i <= 100; i += 2) {
		sum += i;
	}
	return sum;
}
// 26. 计算1/1+1/2+1/3+...+1/100
double fractionSum() {
	double sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += 1.0 / i;
	}
	return sum;
}
void guessNumberGame() {
    std::srand(std::time(0));
    int number = std::rand() % 100 + 1;
    while (true) {
		std::cout << "请输入一个整数：";
		int guess;
		std::cin >> guess;
		if (guess > number) {
			std::cout << "猜大了" << std::endl;
		}
		else if (guess < number) {
			std::cout << "猜小了" << std::endl;
		}
		else {
			std::cout << "猜对了" << std::endl;
			break;
		}
    }
}
