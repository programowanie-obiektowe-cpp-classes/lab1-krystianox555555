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

class wektor2D
{
public:
	int x;
	int y;
	double dlugosc()
	{
		return sqrt(x * x + y * y);
	}
	wektor2D() : x(0.0), y(0.0)
	{
		cout<<"";
	}

	wektor2D(int wsporzednax, int wsporzednay)		// zadanie 2
	{
		x = wsporzednax;
		y = wsporzednay;
		std::cout << "Hello, oto wspolrzedne " << x << "!\n" << y;
	}
	~wektor2D()
	{
		std::cout << "Goodbye, " << x << "...\n" << y;
	}
private:
	double setx(int x1) { x = x1; return 0; }			// zaddanie 4
	double sety(int y1) { x = y1; return 0; }
	double getx() { return x; }
	double gety() { return y; }

	wektor2D operator+(const wektor2D& other) //zadanie 5
	const 
	{
		return wektor2D(x + other.x, y + other.y);
	}	
	wektor2D operator*(const wektor2D& other) //zadanie 5
		const
	{
		return wektor2D(x*other.x, y*other.y);
	}

};
