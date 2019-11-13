//Задание-05 на 4
#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    float ax, ay, bx, by, cx, cy, a, b, c, p, s, ha, hb, hc, ma, mb, mc, bisa, bisb, bisc;
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

    ha = 2*s/a;
    hb = 2*s/b;
    hc = 2*s/c;
    ma = 0.5*(sqrt(2*b*b + 2*c*c - a*a));
    mb = 0.5*(sqrt(2*a*a + 2*c*c - b*b));
    mc = 0.5*(sqrt(2*a*a + 2*b*b - c*c));
    bisa = (2/(b+c))*(sqrt(b*c*0.5*p*(0.5*p-a)));
    bisb = (2/(a+c))*(sqrt(a*c*0.5*p*(0.5*p-b)));
    bisc = (2/(a+b))*(sqrt(a*b*0.5*p*(0.5*p-c)));
    
    cout << << "Высоты к сторонам:"<< "\n"
    << "ha = " << ha << "\n"
    << "hb = " << hb << "\n"
    << "hc = " << hc << "\n" 
    << "Медианы к сторонам:"<< "\n"
    << "ma = " << ma << "\n"
    << "mb = " << mb << "\n"
    << "mc = " << mc << "\n" 
    << "Биссектрисы к сторонам:"<< "\n"
    << "bis_a = " << bisa << "\n"
    << "bis_b = " << bisb << "\n"
    << "bis_c = " << bisc << "\n"endl;
    
    return 0;
}