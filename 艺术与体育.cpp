#include <iostream>
#include <unordered_map>

// 计算一个月的天数
int daysInMonth(int year, int month) {
    if (month == 2) {
        // 判断是否为闰年
        bool isLeap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
        return isLeap? 29 : 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    return 31;
}

// 计算日期的总笔画数
int countStrokes(int year, int month, int day) {
    std::unordered_map<int, int> strokes = {
        {0, 13}, {1, 1}, {2, 2}, {3, 3}, {4, 5}, {5, 4}, {6, 4}, {7, 2}, {8, 2}, {9, 2}
    };
    int y1 = year / 1000;
    int y2 = (year / 100) % 10;
    int y3 = (year / 10) % 10;
    int y4 = year % 10;
    int m1 = month / 10;
    int m2 = month % 10;
    int d1 = day / 10;
    int d2 = day % 10;

    int totalStrokes = strokes[y1] + strokes[y2] + strokes[y3] + strokes[y4] + strokes[m1] + strokes[m2] + strokes[d1] + strokes[d2];
    return totalStrokes;
}

int main() {
    int count = 0;
    int startYear = 2000;
    int endYear = 2024;
    int endMonth = 4;
    int endDay = 13;

    for (int year = startYear; year <= endYear; year++) {
        int maxMonth = (year == endYear)? endMonth : 12;
        for (int month = 1; month <= maxMonth; month++) {
            int maxDay = (year == endYear && month == endMonth)? endDay : daysInMonth(year, month);
            for (int day = 1; day <= maxDay; day++) {
                int strokes = countStrokes(year, month, day);
                if (strokes > 50) {
                    count++;
                }
            }
        }
    }

    std::cout << count << std::endl;
    return 0;
}

