﻿//*********************************************************************************************
// Циклы. Цикл while. Что это. Что делает. Пример. Синтаксис. | C++ для начинающих | Урок #10
//---------------------------------------------------------------------------------------------
// С++ | Visual Studio 2019 
//---------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2022 @ sgiman
//*********************************************************************************************

#include <iostream>

using namespace std;

// Цикл while

int main()
{
	setlocale(LC_ALL, "ru");

	int a = 0;

	while (a < 10)
	{
		cout << " Переменнная a = " << a <<  endl;
		a++;
	}

	//=== END ===
	cout << endl;
	cin.get();
	return 0;
}
