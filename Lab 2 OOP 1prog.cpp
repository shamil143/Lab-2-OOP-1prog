#include <iostream>

using namespace std;

class Point { // Создание класса 
private:
	int x; int y; // Создание атрибутов
public:

	Point() { // Конструктор без параметров
		cout << "Point()" << endl;
		x = 0; y = 0;
	}

	Point(int x, int y) { // Конструктор с параметрами
		cout << "Point(int x, int y)" << endl;
		this->x = x;
		this->y = y;
	}

	Point(const Point &p) { // Копирующий конструктор
		cout << "Point(const Point &p)" << endl;
		x = p.x;
		y = p.y;
	}

	~Point() { // Деструктор
		cout << "~Point() " << x << ' ' << y << endl;
	}

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
	{
		Point p1;
		p1.print();

		Point p2(10, 21);
		p2.print();

		Point p3(p2);
		p3.print();
	}

	cout << endl;

	Point* p4 = new Point(5, 5); // Создание динамического объекта
	p4->print();
	delete p4;
}