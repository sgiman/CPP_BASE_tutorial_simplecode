﻿//*************************************************************************************************
// Инициализация массива. Способы. Инициализация массива нулями. | C++ для начинающих | Урок #10
//-------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2019 
//-------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2022 @ sgiman
//*************************************************************************************************

#include <iostream>

using namespace std;

/* инциализация массива */

int main()
{
	setlocale(LC_ALL, "ru");

	//int arr[]{ 1, 66, 12, 2 };			// old style
	//int arr[4]{ 1, 66, 12, 2 };			// c данными
	//int arr[4]{};							// c нулями
	
	int arr[4] = { 1, 66, 12, 2 };			// new style
	
	cout << arr[3] << endl;


	//=== END ===
	cout << endl;
	//cin.get();
	system("pause");
	return 0;
}