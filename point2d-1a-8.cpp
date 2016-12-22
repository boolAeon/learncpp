#include <iostream>
#include <cmath>

class Point2d {
private:
	double m_x, m_y;
public:
	Point2d(double x = 0.0, double y = 0.0):m_x(x), m_y(y) {}
	~Point2d() {}
    double distanceTo(Point2d dest);
    friend double distanceFrom(Point2d &dest, Point2d &src);
	void print();	   
};

void Point2d::print() {
	std::cout << "Point2d(" << m_x << ", " << m_y << ");" << std::endl;
}

double Point2d::distanceTo(Point2d dest) 
{
    return sqrt(pow((dest.m_x - this->m_x), 2) + pow((dest.m_y - this->m_y), 2));
}

double distanceFrom(Point2d &dest, Point2d &src) 
{
    return sqrt(pow((dest.m_x - src.m_x), 2) + pow((dest.m_y - src.m_y), 2));
}

int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n'; 
    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
    return 0;
}
