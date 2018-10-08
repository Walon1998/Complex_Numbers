//
// Created by Neville Walo on 07.10.2018.
//

struct complex_Number {
    double a;
    double b;
//    a+bi
};

struct complex_Number add(struct complex_Number first, struct complex_Number second) {
    double realteil = first.a + second.a;
    double imaginaerteil = first.b + second.b;
    struct complex_Number result = {realteil, imaginaerteil};
    return result;
}


struct complex_Number subtract(struct complex_Number first, struct complex_Number second) {
    double realteil = first.a - second.a;
    double imaginaerteil = first.b - second.b;
    struct complex_Number result = {realteil, imaginaerteil};
    return result;

}

struct complex_Number multiply(struct complex_Number first, struct complex_Number second) {
    double realteil = first.a * second.a - first.b * second.b;
    double imaginaerteil = first.a * second.b + first.b * second.a;
    struct complex_Number result = {realteil, imaginaerteil};
    return result;

}

struct complex_Number divide(struct complex_Number first, struct complex_Number second) {
    double quotient = second.a * second.a + second.b * second.b;
    double realteil = (first.a * second.a + first.b * second.b) / quotient;
    double imaginaerteil = (first.b * second.a - first.a * second.b) / quotient;
    struct complex_Number result = {realteil, imaginaerteil};
    return result;

}