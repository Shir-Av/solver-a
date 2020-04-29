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

        const RealVariable operator^(const double &num) const;

        const RealVariable operator+(const RealVariable &num) const;
        const RealVariable operator+(const double &num) const;
        friend const RealVariable operator+(const double &num, const RealVariable &rnum);

        const RealVariable operator-(const RealVariable &num) const;
        const RealVariable operator-(const double &num) const;
        friend const RealVariable operator-(const double &num, const RealVariable &rnum);

        const RealVariable operator*(const RealVariable &num) const;
        const RealVariable operator*(const double &num) const;
        friend const RealVariable operator*(const double &num, const RealVariable &rnum);

        const RealVariable operator/(const RealVariable &num) const;
        const RealVariable operator/(const double &num) const;
        friend const RealVariable operator/(const double &num, const RealVariable &rnum);

        const RealVariable operator==(const RealVariable &num) const;
        const RealVariable operator==(const double &num) const;
        friend const RealVariable operator==(const double &num, const RealVariable &rnum);



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

        const ComplexVariable operator^(const double &num) const;

        const ComplexVariable operator+(const ComplexVariable &num) const;
        const ComplexVariable operator+(const complex<double> &num) const;
        friend const ComplexVariable operator+(const complex<double> &num, const ComplexVariable &rnum);
        

        const ComplexVariable operator-(const ComplexVariable &num) const;
        const ComplexVariable operator-(const complex<double> &num) const;
        friend const ComplexVariable operator-(const complex<double> &num, const ComplexVariable &rnum);

        const ComplexVariable operator*(const ComplexVariable &num) const;
        const ComplexVariable operator*(const complex<double> &num) const;
        friend const ComplexVariable operator*(const complex<double> &num, const ComplexVariable &rnum);

        const ComplexVariable operator/(const ComplexVariable &num) const;
        const ComplexVariable operator/(const complex<double> &num) const;
        friend const ComplexVariable operator/(const complex<double> &num, const ComplexVariable &rnum);

        const ComplexVariable operator==(const ComplexVariable &num) const;
        const ComplexVariable operator==(const complex<double> &num) const;
        friend const ComplexVariable operator==(const complex<double> &num, const ComplexVariable &rnum);

    };



    double solve (const RealVariable &rNum);
    complex<double> solve (const ComplexVariable &cNum);

}