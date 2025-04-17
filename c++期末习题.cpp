#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

// 1. ������
int oddSum() {
	int sum = 0;
	for (int i = 1; i <= 100; i += 2) {
		sum += i;
	}
	return sum;
}

// 2. ż����
int evenSum() {
	int sum = 0;
	for (int i = 2; i <= 100; i += 2) {
		sum += i;
	}
	return sum;
}

// 3. ��ʽ���
double fractionSum() {
	double sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += 1.0 / i;
	}
	return sum;
}

// 4. ����С����
void guessNumberGame() {
	std::srand(std::time(0));
	int target = std::rand() % 100 + 1;
	int guess, attempts = 0;
	std::cout << "��Ϸ��ʼ��������1��100֮�������" << std::endl;
	do {
		std::cin >> guess;
		attempts++;
		if (guess < target) {
			std::cout << "̫С�ˣ�����һ�Σ�" << std::endl;
		}
		else if (guess > target) {
			std::cout << "̫���ˣ�����һ�Σ�" << std::endl;
		}
		else {
			std::cout << "��ϲ�㣬�¶��ˣ�������" << attempts << "�Ρ�" << std::endl;
		}
	} while (guess != target);
}

// 5. �žű�
void multiplicationTable() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << j << "*" << i << "=" << i * j << "\t";
		}
		std::cout << std::endl;
	}
}

// 6. �Ӻ����žű�
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

// 7. 15���������
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

// 8. ѡ������Ľ���
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

// 9. ð�����������
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

// 10. �������
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
	std::cout << std::endl << "�ܹ���" << count << "�����ꡣ" << std::endl;
}

// 11. fiboǰ10������
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

// 12. ����һ�����������
void checkPrime() {
	int n;
	std::cout << "������һ��������";
	std::cin >> n;
	if (n <= 1) {
		std::cout << "�ⲻ������" << std::endl;
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
		std::cout << n << "������" << std::endl;
	}
	else {
		std::cout << n << "��������" << std::endl;
	}
}

// 13. һԪ���η��̵ĸ�
void quadraticEquation() {
	double a, b, c;
	std::cout << "������a, b, c��";
	std::cin >> a >> b >> c;
	if (a == 0) {
		std::cout << "�ⲻ�Ƕ��η��̡�" << std::endl;
		return;
	}
	double D = b * b - 4 * a * c;
	if (D < 0) {
		std::cout << "��ʵ��" << std::endl;
	}
	else {
		double sqrtD = std::sqrt(D);
		double x1 = (-b + sqrtD) / (2 * a);
		double x2 = (-b - sqrtD) / (2 * a);
		std::cout << "ʵ��Ϊ��x1=" << x1 << ", x2=" << x2 << std::endl;
	}
}

// 14. ˮ�ɻ���
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

// 15. ת�þ���
void transposeMatrix() {
	int matrix[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
	std::cout << "ԭ����" << std::endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << "ת�ú�ľ���" << std::endl;
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 3; i++) {
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

// 16. fiboǰ40�����е�ż��
void evenFiboNumbers() {
	int fib[40];
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i < 40; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	int count = 0;
	std::cout << "ǰ40�����е�ż��Ϊ��";
	for (int i = 0; i < 40; i++) {
		if (fib[i] % 2 == 0) {
			std::cout << fib[i] << " ";
			count++;
		}
	}
	std::cout << std::endl << "����" << count << "��ż����" << std::endl;
}

// 17. 5��
int factorial(int n) {
	if (n == 0 || n == 1) return 1;
	return n * factorial(n - 1);
}

// 18. ����ʽ����
double calculate(int n, int sign, double denominator) {
	if (n == 0) return 0;
	double term = sign / denominator;
	return term + calculate(n - 1, -sign, denominator + 2);
}

// 19. õ�廨��
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
	std::cout << "õ�廨���У�";
	for (int num = 1000; num < 10000; num++) {
		if (isRose(num)) {
			std::cout << num << " ";
		}
	}
	std::cout << std::endl;
}

// 20. ������
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
	std::cout << "�������У�";
	for (int num = 100; num < 10000; num++) {
		if (isPalindrome(num)) {
			std::cout << num << " ";
		}
	}
	std::cout << std::endl;
}

// 21. ��շת����������Լ��
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

// 22. ��շת����������Լ��
int gcdDivide(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

// 23. ������������
void randomThreeNumbers() {
	std::srand(std::time(0));
	for (int i = 0; i < 3; i++) {
		std::cout << std::rand() % 100 + 1 << " ";
	}
	std::cout << std::endl;
}

int main() {
	std::cout << "1. ������: " << oddSum() << std::endl;
	std::cout << "2. ż����: " << evenSum() << std::endl;
	std::cout << "3. ��ʽ���: " << fractionSum() << std::endl;
	guessNumberGame();
	multiplicationTable();
	multiplicationTableWithFunction();
	pascalTriangle();
	int arr1[8];
	std::cout << "������8��������";
	for (int i = 0; i < 8; i++) {
		std::cin >> arr1[i];
	}
	selectionSortDescending(arr1, 8);
	std::cout << "8. ѡ������Ľ�����Ϊ��";
	for (int i = 0; i < 8; i++) {
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;
	int arr2[8];
	std::cout << "������8��������";
	for (int i = 0; i < 8; i++) {
		std::cin >> arr2[i];
	}
	bubbleSortAscending(arr2, 8);
	std::cout << "9. ð�������������Ϊ��";
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
	std::cout << "18. ����ʽ������: " << calculate(7, 1, 1) << std::endl;
	roseNumbers();
	palindromeNumbers();
	int a, b;
	std::cout << "����������������";
	std::cin >> a >> b;
	std::cout << "21. ��շת����������Լ��: " << gcdSubtract(a, b) << std::endl;
	std::cout << "����������������";
	std::cin >> a >> b;
	std::cout << "22. ��շת����������Լ��: " << gcdDivide(a, b) << std::endl;
	randomThreeNumbers();
	return 0;
}
// 24. ����1+2+3+...+100	
int oddSum() {
	int sum = 0;
	for (int i = 1; i <= 100; i += 2) {
		sum += i;
	}
	return sum;
}
// 25. ����2+4+6+...+100
int evenSum() {
	int sum = 0;
	for (int i = 2; i <= 100; i += 2) {
		sum += i;
	}
	return sum;
}
// 26. ����1/1+1/2+1/3+...+1/100
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
		std::cout << "������һ��������";
		int guess;
		std::cin >> guess;
		if (guess > number) {
			std::cout << "�´���" << std::endl;
		}
		else if (guess < number) {
			std::cout << "��С��" << std::endl;
		}
		else {
			std::cout << "�¶���" << std::endl;
			break;
		}
    }
}
