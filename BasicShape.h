#ifndef BASICSHAPE_H

#define BASICSHAPE_H

using namespace std;

//Forward declarations
class Circle;
class Rectangle;

//BasicShape class



class BasicShape

{

protected:

	double area; // To hold area

public:

	// Accessor function to return area

	double getArea() const
	{
		return area;
	}
	// Pure virtual function
	virtual double calcArea() const = 0;

};
#endif
