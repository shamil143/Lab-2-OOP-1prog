#include <iostream>

using namespace std;

class Point { // Создание класса 
private:
	int x = 0; int y = 0; // Создание атрибутов
public:
	void print() { // Создание метода для вывода координат
		cout << x << ' ' << y << endl;
	}

	void setXY(int setX, int setY); // Объявление метода внутри класса
};

void Point::setXY(int setX, int setY){ // Создание (реализация) метода для изменения координат
	x = setX;
	y = setY;
}


int main() {
	Point p;
	p.print();

	p.setXY(10, 21);
	p.print();
}