﻿//***********************************************************************************************
// Вывод массива. Массивы и циклы. Цикл с массивом. Array c++. | C++ для начинающих | Урок #27
//-----------------------------------------------------------------------------------------------
// С++ | Visual Studio 2019 
//-----------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2022 @ sgiman
//***********************************************************************************************

#include <iostream>

using namespace std;

/* вывод статического массива  */

int main()
{
	setlocale(LC_ALL, "ru");

	const int size = 5;

	int arr[size]{ 55, 511, 2, 123, 95 };

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;	// 1..100
	}
	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

	//=== END ===
	cout << endl;
	system("pause");
	return 0;
}
