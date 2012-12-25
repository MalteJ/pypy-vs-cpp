#include <iostream>

class Vector {
	protected:
	float a,b,c;

	public:

	Vector(float a, float b, float c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}

	float dot(Vector other) {
		return this->a * other.a + this->b * other.b + this->c * other.c;
	}

	Vector cross(Vector other) {
		return Vector(
			this->b * other.c - this->c * other.b,
			this->c * other.a - this->a * other.c,
			this->a * other.b - this->b * other.a
		);
	}

	void print() {
		std::cout << "[ " << this->a << ", " << this->b << ", " << this->c << " ]" << std::endl;
	}
};

int main() {
	Vector v1(1,2,3);
	Vector v2(9,8,7);
	
	unsigned int loops = 1e9;
	unsigned int counter = 0;

	v1.print();
	v2.print();
	std::cout << "looping " << loops << " times" << std::endl;

	for(unsigned int i=0; i < loops; i++) {
		v1.dot(v2);
		v1.cross(v2);
		counter++;
	}

	std::cout << "counter = " << counter << std::endl;

	std::cout << v1.dot(v2) << std::endl;
	v1.cross(v2).print();

}
