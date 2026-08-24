#include <iostream>
using namespace std;
int a;
int c;
char o;

int Plus(int a, int c, char o){
    return a+c;
}

int Minus(int a, int c, char o){
    return a-c;
}

int Mult(int a, int c, char o){
    return a*c;
}

int Div(int a, int c, char o){
    return a/c;
}

int main() {
    cin >> a >> o >> c;

    if(o == '+'){
        cout << a << " + " << c << " = " << Plus(a, c, o);
    }
    else if(o == '-'){
        cout << a << " - " << c << " = " << Minus(a, c, o);
    }
    else if(o == '*'){
        cout << a << " * " << c << " = " << Mult(a, c, o);
    }
    else if(o == '/'){
        cout << a << " / " << c << " = " << Div(a, c, o);
    }
    else{
        cout << "False";
    }

    return 0;
}