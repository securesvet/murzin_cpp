//
// Created by mursv on 4/20/2022.
//

#include <iostream>
#include <cmath>

using namespace std;

class Point {

public:

    double x;
    double y;
    double distance(Point point) {
        double dx = x - point.x;
        double dy = y - point.y;
        return sqrt(dx*dx+dy*dy);
    }

};

int main() {
    /* Ввод первых двух точек - задают прямую,
     * Третью точку надо спроецировать на прямую
     * И найти координаты, а также расстояние между
     * Третьей точкой и прямой
    */

    Point A, B, C, C_ab;

    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;

    /*
     * точки: A(A.x,B.y), B(B.x, B.y) - составляют прямую, обозначим её как прямая а
     * (x-A.x)/(B.x-A.x)=(y-A.y)/(B.y-A.y) - уравнение прямой
     * выражаем из уравнения игрик
     * y=((x-A.x)/(B.x-A.x))*(B.y-A.y)+A.y; Введём коэффициенты:
     * A1 = (B.y-A.y)/(B.x-A.x) - коэффициент перед икс
     * B1 = (-A.x)*(B.y-A.y)/(B.x-A.x)+A.y - свободный член
     * угловой коэффициент прямой b, перпендикулярной прямой a будет равен
     * A2 = -1/A1;
     * Теперь обозначим точку, через которую должен проходить перпендикуляр
     * C(C.x, C.y);
     * Составляем уравнение этой прямой:
     * (y-C.y)=A2*(x-C.x), или же
     * y=A2*(x-C.x) + C.y;
     * B2 = C.y-A2*C.x;
     * a: y = A1*x+B1;
     * b: y = A2*x+B2;
     * Теперь приравниваем уравнения
     * x = (B2 - B1) / (A1 - A2);
     * y = (B1*A2 - B2*A1) / (A2-A1)
     * И подставляем заместо коэффициентов выражения
     */

    // Теперь в случае, если точки A и B не совпадают, считаем координаты спроецированной точки C_ab

if ( ( A.x != B.x ) and ( A.y != B.y ) ) {

        C_ab.x = ( (B.x - A.x) * (B.y - A.y) * (C.y - A.y) + C.x * pow((B.x - A.x), 2) + A.x * pow((B.y - A.y), 2)) /
                 (pow((B.y - A.y), 2) + pow((B.x - A.x), 2) );

        C_ab.y = ( (B.x - A.x) * (B.y - A.y) * (C.x - A.x) + C.y * pow((B.y - A.y), 2) + A.y * pow((B.x - A.x), 2)) /
                 (pow((B.y - A.y), 2) + pow((B.x - A.x), 2) );

    }

// В случае, если точки А и B совпали, то С спроецируется в эту же самую точку
// Значит у C_ab будут те же координаты, что и у A

else {

    C_ab.x = A.x;
    C_ab.y = A.y;

}

    cout << C_ab.distance(C) << " " << C_ab.x << " " <<  C_ab.y;

    return 0;

}
