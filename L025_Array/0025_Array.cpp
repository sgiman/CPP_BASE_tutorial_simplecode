﻿//**********************************************************************************************************
// Что такое массив. Примеры. Теория. Array. Одномерный массив. Синтаксис. | C++ для начинающих | Урок #25
//----------------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2019 
//----------------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2022 @ sgiman
//**********************************************************************************************************

#include <iostream>

using namespace std;

/* массивы */

int main()
{
	setlocale(LC_ALL, "ru");

	// Тип_данных имя [кол-во элементов];
	int arr[4]{};
	arr[0] = 5;
	cout << arr[0] << endl;

	//=== END ===
	cout << endl;
	system("pause");
	return 0;
}
