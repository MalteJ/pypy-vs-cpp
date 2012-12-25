import random

class Vector(object):
	def __init__(self):
		self.a = 0.0
		self.b = 0.0
		self.c = 0.0

	def __init__(self, a, b, c):
		self.a = a
		self.b = b
		self.c = c

	def __str__(self):
		return "[ %s, %s, %s ]" % ( str(self.a), str(self.b), str(self.c) )
	
	def dot(self, other):
		return self.a * other.a + self.b * other.b + self.c * other.c

	def cross(self, other):
		v = Vector(
			self.b * other.c - self.c * other.b,
			self.c * other.a - self.a * other.c,
			self.a * other.b - self.b * other.a
			)
		return v

def randomList(size):
	return [random.randint(0,4294967295) for n in range(size)]

def main():

	loops = int(5e7)
	counter = 0

	l = randomList(loops)

	print "looping %s times" % loops

	for i in range(loops):
		v1 = Vector(1*(i % l[i]),2*(i % l[i]),3*(i % l[i]))
		v2 = Vector(9*(i % l[i]),8*(i % l[i]),7*(i % l[i]))
		v1.dot(v2)
		v1.cross(v2)
		counter = counter + 1
	
	print "counter = %s" % counter
	print v1
	print v2
	print v1.dot(v2)
	print v1.cross(v2)
main()
