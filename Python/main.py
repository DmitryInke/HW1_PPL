from math import *


class GeometricShape:
    def __init__(self, length):
        self.length = length


class Circle(GeometricShape):

    def area(self):
        print("Area:", pi * pow(float(self.length), 2.0))

    def perimeter(self):
        print("Perimeter:", 2.0 * pi * float(self.length))


class Rectangle(GeometricShape):
    def __init__(self, length, height):
        GeometricShape.__init__(self, length)
        self.height = height

    def area(self):
        print("Area:", float(self.length) * float(self.height))

    def perimeter(self):
        print("Perimeter:", (float(self.length) + float(self.height)) * 2.0)


class Square(Rectangle):
    def area(self):
        Rectangle.area(self)

    def perimeter(self):
        Rectangle.perimeter(self)


class Triangular(GeometricShape):
    def __init__(self, length, height, left_edge, right_edge):
        GeometricShape.__init__(self, length)
        self.height = height
        self.left_edge = left_edge
        self.right_edge = right_edge

    def area(self):
        print("Area:", (float(self.length) * float(self.height)) / 2.0)

    def perimeter(self):
        print("Perimeter:", float(self.length) + float(self.left_edge) + float(self.right_edge))


while True:
    shape = input("Please, Enter a shape (c - Circle, r - Rectangle, s - Square, t - Triangular): ")

    if shape == 'c' or shape == 'r' or shape == 's' or shape == 't':
        break

if shape == 'c':
    circle = Circle(input("Radius: "))
    circle.area()
    circle.perimeter()

elif shape == 'r':
    rectangle = Rectangle(input("Length: "), input("Height: "))
    rectangle.area()
    rectangle.perimeter()

elif shape == 's':
    edge = input("Edge: ")
    square = Square(edge, edge)
    square.area()
    square.perimeter()

elif shape == 't':
    triangular = Triangular(input("Length: "), input("Height: "), input("Left edge: "), input("Right edge: "))
    triangular.area()
    triangular.perimeter()
