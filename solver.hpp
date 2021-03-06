#include <iostream>
#include <complex>
using namespace std;

namespace solver{

    class RealVariable{

        public:
        double a;
        double b;
        double c;

        RealVariable(){
            a=c=0;
            b=1;
        }
        RealVariable(double a, double b, double c){
            this->a = a;
            this->b = b;
            this->c = c;
        }

        friend RealVariable& operator^(RealVariable rv, const int &num);

        friend RealVariable& operator+(RealVariable rv, const RealVariable &num);
        friend RealVariable& operator+(RealVariable rv, const double &num);
        friend RealVariable& operator+(const double &num, const RealVariable &rnum);

        friend RealVariable& operator-(RealVariable rv, const RealVariable &num);
        friend RealVariable& operator-(RealVariable rv,const double &num);
        friend RealVariable& operator-(const double &num, const RealVariable &rnum);

        friend RealVariable& operator*(RealVariable rv, const RealVariable &num);
        friend RealVariable& operator*(RealVariable rv,const double &num);
        friend RealVariable& operator*(const double &num, const RealVariable &rnum);

        friend RealVariable& operator/(RealVariable rv, const double &num);
        
        friend RealVariable& operator==(RealVariable rv, const RealVariable &num);
        friend RealVariable& operator==(RealVariable rv,const double &num);
        friend RealVariable& operator==(const double &num, const RealVariable &rnum);


    };
    









    class ComplexVariable {

        public:

        complex<double> a;
        complex<double> b;
        complex<double> c;

        ComplexVariable(){
            a=c=0;
            b=1;
        }
        ComplexVariable(complex<double> a, complex<double> b, complex<double> c){
            this->a = a;
            this->b = b;
            this->c = c;
        }

        friend ComplexVariable& operator^(ComplexVariable cv, const int &num);

        friend ComplexVariable& operator+(const ComplexVariable cv, const ComplexVariable &num);
        friend ComplexVariable& operator+(const ComplexVariable cv, const complex<double> &num);
        friend ComplexVariable& operator+(const complex<double> &num, const ComplexVariable &cnum);
        friend ComplexVariable& operator+(const ComplexVariable cv, const double &num);
        friend ComplexVariable& operator+(const double &num, const ComplexVariable cv);
        

        friend ComplexVariable& operator-(const ComplexVariable cv, const ComplexVariable &num);
        friend ComplexVariable& operator-(const ComplexVariable cv, const complex<double> &num);
        friend ComplexVariable& operator-(const complex<double> &num, const ComplexVariable &cnum);
        friend ComplexVariable& operator-(const ComplexVariable cv, const double &num);
        friend ComplexVariable& operator-(const double &num, const ComplexVariable cv);

        friend ComplexVariable& operator*(const ComplexVariable cv, const complex<double> &num);
        friend ComplexVariable& operator*(const complex<double> &num, const ComplexVariable &cnum);

        friend ComplexVariable& operator/(const ComplexVariable cv, const double &num);
        
        friend ComplexVariable& operator==(const ComplexVariable cv, const ComplexVariable &num);
        friend ComplexVariable& operator==(const ComplexVariable cv, const complex<double> &num);
        friend ComplexVariable& operator==(const complex<double> &num, const ComplexVariable &cnum);
        friend ComplexVariable& operator==(const ComplexVariable cv, const double &num);
    };



    double solve (const RealVariable &rNum);

    complex<double> solve (const ComplexVariable &cNum);

}