#include <iostream>
#include <cmath>

# define M_PI           3.14159265358979323846

struct Triangle {
    double sideA;
    double sideB;
    double sideC;

    bool triangleExists() {
        if (sideA < sideB + sideC && sideB < sideA + sideC && sideC < sideA + sideB){
            return true;
        }

        else {
            return false;
        }
    }

    double triangleSquare() {
        double p = (sideA + sideB + sideC) / 2;
        return sqrt(p*(p - sideA)*(p - sideB)*(p - sideC));

    }

    double trianglePerimetr() {
        return sideA + sideB + sideC;
    }

    double triangleAngle(double side) {
        if (side == sideC) {
            double res = (pow(sideA, 2) + pow(sideB, 2) - pow(sideC, 2))/ (2*sideA*sideB);
            return acos(res)*180.0 / M_PI;
        }

        else if (side == sideB) {
            double res = (pow(sideA, 2) + pow(sideC, 2) - pow(sideB, 2))/ (2*sideA*sideC);
            return acos(res)*180.0 / M_PI;
        }

        else if (side == sideA) {
            double res = (pow(sideB, 2) + pow(sideC, 2) - pow(sideA, 2))/ (2*sideB*sideC);
            return acos(res)*180.0 / M_PI;
        }
    }

    double sideHeightLength(double side) {
        if (side == sideC) {
            return sqrt(pow(sideA,2) - pow(((pow(sideA, 2) - pow(sideB, 2) + pow(sideC, 2))/(2*sideC)), 2));
        }

        else if (side == sideA) {
            return sqrt(pow(sideB,2) - pow(((pow(sideB, 2) - pow(sideC, 2) + pow(sideA, 2))/(2*sideA)), 2));
        }

        else if (side == sideB) {
            return sqrt(pow(sideC,2) - pow(((pow(sideC, 2) - pow(sideA, 2) + pow(sideB, 2))/(2*sideB)), 2));
        }
    }
};

struct Point {
    double x;
    double y;
};

// відрізок
struct Segment {
    Point A;
    Point B;
    Point C;
    Point D;

    double length(){
        return sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
    }

    void center(){
        C.x = (A.x + B.x) / 2;
        C.y = (A.y + B.y) / 2;
        std::cout << "C(" << C.x << "," << C.y << ") \n";
    }

    void divideRelative(double l){
        D.x = (A.x + (l*B.x)) / (1+l);
        D.y = (A.y + (l*B.y)) / (1+l);
        std::cout << "D(" << D.x << "," << D.y << ") \n";
    }
};

int main() {
    Triangle t;
    t.sideA = 11;
    t.sideB = 12;
    t.sideC = 13;
    std::cout << "------- Triangle task -----------" << "\n";
    std::cout << "Triangle Exists: " << t.triangleExists() << "\n";
    std::cout << "Triangle Square: " << t.triangleSquare() << "\n";
    std::cout << "Triangle Perimeter: " << t.trianglePerimetr() << "\n";
    std::cout << "Triangle Angle: " << t.triangleAngle(t.sideA) << "\n";
    std::cout << "Triangle Side Height Length: " << t.sideHeightLength(t.sideC) << "\n";
    std::cout << "------- Points task -------------" << "\n";
    Segment s;
    s.A.x = 1;
    s.A.y = 1;
    s.B.x = 3;
    s.B.y = 4;
    std::cout << "Length : " << s.length() << "\n";
    s.center();
    s.divideRelative(0.5);
}