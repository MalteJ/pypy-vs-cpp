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

def main():

	loops = int(5e8)
	counter = 0

	print "looping %s times" % loops

	for i in range(loops):
		v1 = Vector(1*i,2*i,3*i)
		v2 = Vector(9*i,8*i,7*i)
		v1.dot(v2)
		v1.cross(v2)
		counter = counter + 1
	
	print "counter = %s" % counter
main()
