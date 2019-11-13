//Задание-05 на 3
#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    float ax, ay, bx, by, cx, cy, a, b, c, p, s;
    cout <<"Введите координаты вершины А: ";
    cin >> ax >> ay;
    cout <<"Введите координаты вершины B: ";
    cin >> bx >> by;
    cout <<"Введите координаты вершины C: ";
    cin >> cx >> cy;
    
    a = sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
    b = sqrt((cx-bx)*(cx-bx)+(cy-by)*(cy-by));
    c = sqrt((cx-ax)*(cx-ax)+(cy-ay)*(cy-ay));
    p = a + b + c;
    s = sqrt(0.5*p*(0.5*p-a)*(0.5*p-b)*(0.5*p-c));
    
    cout << "Длины сторон:"<< "\n"
    << "a = " << a << "\n"
    << "b = " << b << "\n"
    << "c = " << c << "\n"
    << "Периметр треугольника: " << p << "\n"
    << "Площадь треугольника: " << s << "\n"endl;
    
    return 0;
}