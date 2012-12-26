#include <iostream>
#include <cstdlib>

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
	
	unsigned int loops = 5e8;
	unsigned int counter = 0;

	std::cout << "looping " << loops << " times" << std::endl;

	for(unsigned int i=0; i < loops; i++) {
		Vector v1(1*i,2*i,3*i);
		Vector v2(9*i,8*i,7*i);
		v1.dot(v2);
		v1.cross(v2);
		counter++;
	}

	std::cout << "counter = " << counter << std::endl;

}
