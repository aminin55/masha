#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

class Rational {

    private:

    public:

    int num;
    int denom;

    Rational() {
        num=0;
        denom=1;
    }

    Rational(int numerator, int denominator) {

        if(numerator<0&&denominator<0){
            numerator=abs(numerator);
            denominator=abs(denominator);
        }else if (numerator>0&&denominator<0){
        numerator=0-numerator;
        denominator=abs(denominator);
        }else if (numerator==0||denominator==0){
        numerator=0;
        denominator=1;
        }

        int div=gcd(abs(numerator),abs(denominator));

        if (div<=(abs(numerator)) && div<=abs(denominator)){
            num=numerator/div;
          denom=denominator/div;
            }
        else{
            num=numerator;
          denom=denominator;
        }
//cout<< "$debug div = "<<div<< "num = " <<num<<"denom = "<<denom<<endl;

    }

    int Numerator() const {
        return num;
    }

    int Denominator() const {
        return denom;
    }


};

 ostream& operator << (ostream &stream, const Rational &rational)
    {
    stream<< rational.Numerator() << '/'<< rational.Denominator();
    return stream;
    }

  istream& operator >> (istream& stream, Rational &rational) {
int numerator=0,denominator=1;
char c;
if(stream >> numerator>> c >>denominator){

//cout<< "num = " <<n<<"denom = "<<d<<endl;

       if(numerator<0&&denominator<0){
            numerator=abs(numerator);
            denominator=abs(denominator);
        }else if (numerator>0&&denominator<0){
        numerator=0-numerator;
        denominator=abs(denominator);
        }else if (numerator==0||denominator==0){
        numerator=0;
        denominator=1;
        }

        int div=gcd(abs(numerator),abs(denominator));

        if (div<=(abs(numerator)) && div<=abs(denominator)){
            rational.num=numerator/div;
          rational.denom=denominator/div;
            }
        else{
            rational.num=numerator;
          rational.denom=denominator;
        }
    }
return stream;
}

Rational operator+(const Rational& left, const Rational& right) {
    return Rational( left.Numerator()*right.Denominator() + right.Numerator()*left.Denominator(),(left.Denominator()*right.Denominator()) );
}

Rational operator-(const Rational& left, const Rational& right) {
    return Rational( left.Numerator()*right.Denominator() - right.Numerator()*left.Denominator(),(left.Denominator()*right.Denominator()) );
}

bool operator==(const Rational& left, const Rational& right) {
    return left.Numerator() == right.Numerator() && left.Denominator()==right.Denominator();
}
bool operator<(const Rational& left, const Rational& right) {
    return (double)left.Numerator()/left.Denominator() < (double)right.Numerator()/right.Denominator();
}
bool operator>(const Rational& left, const Rational& right) {
        return (double)left.Numerator()/left.Denominator() > (double)right.Numerator()/right.Denominator();
}



int main() {
    {
        Rational r1(4, 6);
        Rational r2(2, 3);
        bool equal = r1 == r2;
        if (!equal) {
            cout << "4/6 != 2/3" << endl;
            return 1;
        }
    }

    {
        Rational a(2, 3);
        Rational b(4, 3);
        Rational c = a + b;
        bool equal = c == Rational(2, 1);
        if (!equal) {
            cout << "2/3 + 4/3 != 2" << endl;
            return 2;
        }
    }

    {
        Rational a(5, 7);
        Rational b(2, 9);
        Rational c = a - b;
        bool equal = c == Rational(31, 63);
        if (!equal) {
            cout << "5/7 - 2/9 != 31/63" << endl;
            return 3;
        }
    }

    cout << "OK" << endl;
    return 0;
}
