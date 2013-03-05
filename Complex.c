/*
Условие задачи
С помощью известных вам инструментов реализовать тип Complex для хранения комплексных чисел.

Теория:
Комплексное число задается формулой a + bi, где a и b - вещественные числа, i = sqrt(-1) (мнимая единица);
a называют действительной частью (принято обозначать re), b называют мнимой частью (принято обозначать im).

Действия над комплексными числами:
* Сравнение: a + bi = c + di означает, что a = c и b = d (два комплексных числа равны между собой тогда и
только тогда, когда равны их действительные и мнимые части).
* Сложение: (a + bi) + (c + di) = (a + c) + (b + d)i
* Вычитание: (a + bi) - (c + di) = (a - c) + (b - d)i
* Умножение: (a + bi)*(c + di) = ...

Модуль комплексного числа вычисляется как квадратный корень из суммы квадратов его действительной и мнимой частей.

void complexIncrement(Complex *this, Complex other)
void complexDecrement(Complex *this, Complex other)
void complexMultiply(Complex *this, Complex other)
Complex complexSum(Complex a, Complex b)
Complex complexDiff(Complex a, Complex b)
Complex complexProduct(Complex a, Complex b)
int complexEqual(Complex a, Complex b)
double complexAbs(Complex this) - нахождение модуля комплексного числа. Воспользоваться функцией hypot() из
библиотеки math.h
void complexPrint(Complex this) - печать комплексного числа в виде a+bi. Воспользоваться шаблоном %g.
Проследить за знаком мнимой части. Обеспечить возможность вывода вида 3+7i is not equal to 4+2i.
*/
#include <stdio.h>
#include <math.h>

typedef struct {
    double re;
    double im;
} Complex;

void complexIncrement(Complex *this, Complex other) {
    this->re += other.re;
    this->im += other.im;
}

void complexDecrement(Complex *this, Complex other) {
    this->re -= other.re;
    this->im -= other.im;
}

void complexMultiply(Complex *this, Complex other) {
    Complex c;
    
    c.im = this->re * other.im + this->im * other.re;
    c.re = this->re * other.re - this->im * other.im;
    this->re = c.re;
    this->im = c.im;
}

Complex complexSum(Complex a, Complex b) {
    Complex c = a;
    
    complexIncrement(&c, b);
    return c;
}

Complex complexDiff(Complex a, Complex b) {
    Complex c = a;
    
    complexDecrement(&c, b);
    return c;
}

Complex complexProduct(Complex a, Complex b) {
    Complex c = a;

    complexMultiply(&c, b);
    return c;
}

int complexEqual(Complex a, Complex b) {
    return a.re == b.re && a.im == b.im;
}

double complexAbs(Complex this) {
    return hypot(this.re, this.im);
}

void complexPrint(Complex this) {
    if ( this.im < 0 ) {
        printf("%g%gi", this.re, this.im);
    } else {
        printf("%g+%gi", this.re, this.im);
    }
}

int main() {
    Complex a = { 1, -2 };

    complexPrint(a);

    return 0;
}
