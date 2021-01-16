// 猜数游戏.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "这是一个猜数游戏" << endl;
    cout << "要猜的数是0到10的随机数" << endl;
    cout << "你只有4次机会" << endl;

    int Frequency = 4;// 表示您有四次机会
    srand(time(0));// 使随机数完全随机（
    int Answer = rand() % 10;// 生成一个0~10的数
    int input;
    cout << "现在请输入数字" << endl;
    cin >> input;
    while (Frequency) {
        if (Answer == input) {
            cout << "你猜中了！这个数是" << Answer << endl;
            break;
        }
        if (input > Answer) {
            cout << "你输入的值有点大" << endl;
        }else {
            cout << "你输入的值有点小" << endl;
        }
        cout << "现在请再次输入数字" << endl;
        cin >> input;

        Frequency -= 1;
    }
    cout << "游戏结束" << endl;
    system("pause");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
