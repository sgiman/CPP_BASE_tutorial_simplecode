﻿//****************************************************************************************************************************
// Возврат нескольких значений функции через ссылки. Как вернуть несколько значений функции. | C++ для начинающих | Урок #52
//----------------------------------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2019 
//----------------------------------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2022 @ sgiman
//****************************************************************************************************************************

#include <iostream>
#include "utils.h"

using namespace std;

/*
	Возврат нескольких значений функции через ссылки.
*/

// параментры - ссылки 
void foo(int &a, int &b, int &c)
{
	a = 10;
	b *= 2;
	c -= 100;
}


int main()
{
	setlocale(LC_ALL, "ru");

	int a = 0, b = 4, c = 34;
	cout << " Start: a = " << a << endl;
	cout << " Satrt: b = " << b << endl;
	cout << " Start: c = " << c << endl<<endl;

	foo(a, b, c);
	cout << " foo: a = " << a << endl;
	cout << " foo: b = " << b << endl;
	cout << " foo: c = " << c << endl << endl;

	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}