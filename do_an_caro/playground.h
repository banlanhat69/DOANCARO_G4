#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#define D char(219)

using namespace std;

void GoTo(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { x, y };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

void set_color(int code) {
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, code);
}
void vebang()
{
	int x, y;
	GoTo(2, 1);
	// ve khung tren
	cout << char(201);
	for (x = 3; x < 66; x++) {
		GoTo(x, 1);
		cout << char(205);
	}
	cout << char(187);
	for (x = 6; x < 66; x += 4) {
		GoTo(x, 1);
		cout << char(203);
	}
	// ve hang
	for (y = 2; y <= 33; y++) {
		GoTo(2, y);
		for (x = 2; x <= 66; x += 4) {
			GoTo(x, y);
			cout << char(186);
		}
	}
	// ve khung duoi
	GoTo(2, 33); cout << char(200);
	for (x = 3; x < 66; x++) {
		GoTo(x, 33);
		cout << char(205);
	}
	cout << char(188);
	for (x = 6; x < 66; x += 4) {
		GoTo(x, 33);
		cout << char(202);
	}
	// ve ben trong
	for (y = 3; y <= 32; y += 2) {
		GoTo(2, y);
		for (x = 2; x < 66; x++) {
			GoTo(x, y);
			cout << char(205);
		}
	}

	for (y = 3; y <= 32; y += 2) {
		GoTo(2, y);
		for (x = 6; x < 66; x += 4) {
			GoTo(x, y);
			cout << char(206);
		}
	}
	for (y = 3; y < 33; y += 2) {
		GoTo(2, y);
		cout << char(204);
	}
	for (y = 3; y < 33; y += 2) {
		GoTo(66, y);
		cout << char(185);
	}
}
void vethongso()
{
	int x, y;
	// ve o X
	GoTo(72, 1); cout << char(218);
	for (x = 73; x <= 96; x++) {
		GoTo(x, 1); cout << char(196);
	}
	GoTo(97, 1); cout << char(191);
	for (x = 72; x <= 97; x += 25) {
		for (y = 2; y <= 16; y++) {
			GoTo(x, y);
			cout << char(179);
		}
	}
	GoTo(72, 17); cout << char(192);
	for (x = 73; x <= 96; x++) {
		GoTo(x, 17); cout << char(196);
	}
	GoTo(97, 17); cout << char(217);
	// ve o Y
	GoTo(100, 1); cout << char(218);
	for (x = 101; x <= 124; x++) {
		GoTo(x, 1); cout << char(196);
	}
	GoTo(125, 1); cout << char(191);
	for (x = 100; x <= 125; x += 25) {
		for (y = 2; y <= 16; y++) {
			GoTo(x, y);
			cout << char(179);
		}
	}
	GoTo(100, 17); cout << char(192);
	for (x = 101; x <= 124; x++) {
		GoTo(x, 17); cout << char(196);
	}
	GoTo(125, 17); cout << char(217);
	// ve khung ngoai
	GoTo(70, 0); cout << char(218);
	for (x = 71; x <= 126; x++) {
		GoTo(x, 0);
		cout << char(196);
	}
	GoTo(127, 0); cout << char(191);
	for (x = 70; x <= 127; x += 57) {
		for (y = 1; y <= 33; y++) {
			GoTo(x, y); cout << char(179);
		}
	}
	GoTo(70, 34); cout << char(192);
	for (x = 71; x <= 126; x++) {
		GoTo(x, 34);
		cout << char(196);
	}
	GoTo(127, 34); cout << char(217);
}
void vechuX()
{
	int x, y;
	y = 3;
	for (x = 80; x <= 88; x += 2) {
		GoTo(x, y); set_color(12); cout << D << D;
		y++;
	}
	y = 3;
	for (x = 88; x >= 80; x -= 2) {
		GoTo(x, y); set_color(12); cout << D << D;
		y++;
	}

	y = 3;
	for (x = 78; x <= 88; x += 2) {
		GoTo(x, y); set_color(4); cout << D << D;
		y++;
	}
	y = 3;
	for (x = 90; x >= 80; x -= 2) {
		GoTo(x, y); set_color(4); cout << D << D;
		y++;
	}

	y = 2;
	for (x = 80; x <= 90; x += 2) {
		GoTo(x, y); set_color(4); cout << D << D;
		y++;
	}
	y = 2;
	for (x = 88; x >= 78; x -= 2) {
		GoTo(x, y); set_color(4); cout << D << D;
		y++;
	}
	GoTo(78, 2); set_color(4); cout << D << D;
	GoTo(90, 2); set_color(4); cout << D << D;
	GoTo(78, 8); set_color(4); cout << D << D;
	GoTo(90, 8); set_color(4); cout << D << D;
}
void vechuO()
{
	int x, y;
	for (y = 2; y <= 8; y += 6) {
		for (x = 110; x <= 114; x += 2) {
			GoTo(x, y);
			set_color(2);
			cout << D << D;
		}
	}
	for (x = 106; x <= 118; x += 12) {
		for (y = 4; y <= 6; y++) {
			GoTo(x, y);
			set_color(2);
			cout << D << D;
		}
	}
	GoTo(108, 3); set_color(2); cout << D << D;
	GoTo(116, 3); set_color(2); cout << D << D;
	GoTo(108, 7); set_color(2); cout << D << D;
	GoTo(116, 7); set_color(2); cout << D << D;
	for (y = 3; y <= 7; y += 4) {
		for (x = 110; x <= 114; x += 2) {
			GoTo(x, y);
			set_color(10);
			cout << D << D;
		}
	}
	for (x = 108; x <= 116; x += 8) {
		for (y = 4; y <= 6; y++) {
			GoTo(x, y);
			set_color(10);
			cout << D << D;
		}
	}

}

void playground()
{
	vebang();
	vethongso();
	vechuX();
	vechuO();
}