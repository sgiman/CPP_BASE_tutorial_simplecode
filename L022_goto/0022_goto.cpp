﻿//**********************************************************************************************************
// Оператор перехода goto. Когда код становится непонятен даже создателю. | C++ для начинающих | Урок #22
//----------------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2019 
//----------------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2022 @ sgiman
//**********************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Один" << endl;
	
	goto link;

	cout << "Два" << endl;
	cout << "Три" << endl;
	
link:
	cout << "Четыре" << endl;
	cout << "Пять" << endl;

	//=== END ===
	cout << endl;
	system("pause");
	return 0;
}
