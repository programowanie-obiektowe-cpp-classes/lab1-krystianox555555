#include <iostream>
using namespace std;

class informer
{
public:
	informer()
	{
		std::cout << "konstrukcja informera ...\n";		//zadanie 3
	}
	~informer()
	{
		std::cout << "destrukcja informera ...\n";

	}
};

class Wektor2D
{
public:
	double x;
	double y;
	double dlugosc()
	{
		return sqrt(x * x + y * y);
	}
	Wektor2D() : x(0.0), y(0.0)
	{
	}

	Wektor2D(int wsporzednax, int wsporzednay)		// zadanie 2
	{
		x = wsporzednax;
		y = wsporzednay;
		std::cout << "Hello, oto wspolrzedne " << x << "!\n" << y;
	}
	~Wektor2D()
	{
		std::cout << "Goodbye, " << x << "...\n" << y;
	}
private:
	double setx(int x1) { x = x1; return 0; }			// zaddanie 4
	double sety(int y1) { x = y1; return 0; }
	double getx() { return x; }
	double gety() { return y; }

	Wektor2D operator+(const Wektor2D& other) //zadanie 5
	const 
	{
		return Wektor2D(x + other.x, y + other.y);
	}	
	Wektor2D operator*(const Wektor2D& other) //zadanie 5
		const
	{
		return Wektor2D(x*other.x, y*other.y);
	}

};
