#include <cmath>
#include <ctime>
#include <iostream>
#define PI 3.1415926
using namespace std;
class Proiz {
public:
    float getF(float x);
};
class Function {
public:
    float getF(float x);
    Proiz proizvodnaya();
};
class ProizArctg :public Proiz {
public:
    float getF(float x) {
        return 1.0 / (1 + x * x);
    }
};
class ProizArcctg :public Proiz {

public:
    float getF(float x) {
        return -1.0 / (1 + x * x);
    }
};
class arctg :public Function {
public:
    float getF(float x) {
        return atan(x);
    }
    ProizArctg proizvodnaya() {
        return ProizArctg();
    }
    void enter() {
        cout << "введите x:" << endl;
        float x;
        cin >> x;
        cout << "arctg(x) = " << getF(x) << endl;
        cout << "arctg'(x)=" << proizvodnaya().getF(x) << endl;
    }
};
class arcctg :public Function {
public:
    float getF(float x) {
        return PI / 2 - atan(x);
    }
    ProizArcctg proizvodnaya() {
        return ProizArcctg();
    }
    void enter() {
        cout << "введите x:" << endl;
        float x;
        cin >> x;
        cout << "arcctg(x) = " << getF(x) << endl;
        cout << "arcctg'(x)=" << proizvodnaya().getF(x) << endl;
    }
};


int main() {
    setlocale(LC_ALL, "Russian");//русский в консоли
    arctg a;
    a.enter();
    arcctg b;
    b.enter();
    return 0;
}

