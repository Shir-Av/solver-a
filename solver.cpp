#include <iostream>
#include <complex>
#include "solver.hpp"
using namespace std;
namespace solver{

        RealVariable& operator^(RealVariable rv, const int &num){
                RealVariable *result = new RealVariable();
                if (num > 2) throw("invalid input");
                else if (num == 0) {
                    result->a = 0;
                    result->b = 0;
                    result->c = 1;
                    return *result;
                }
                else if(num == 1){
                    *result = rv;
                    return *result;
                }

                else {
                    if (rv.a !=0) throw ("ERROR: power greater than 2");
                    else if(rv.b == 0) result->c = rv.c*rv.c;
                    else if (rv.c == 0) {
                        result->a = rv.b*rv.b;
                        result->b = 0;
                    }
                    else {
                        result->a = rv.b*rv.b;
                        result->b = 2*rv.b*rv.c;
                        result->c = rv.c*rv.c;
                    }
                    return *result;
                }
            }

        RealVariable& operator+(RealVariable rv, const RealVariable &num){
            RealVariable *result = new RealVariable();
            result->a = rv.a + num.a;
            result->b = rv.b + num.b;
            result->c = rv.c + num.c;
            return *result;
        }

        RealVariable& operator+(RealVariable rv,const double &num){
            RealVariable *result = new RealVariable();
            result->a = rv.a;
            result->b = rv.b;
            result->c = rv.c + num;
            return *result;
        
        }
        RealVariable& operator+(const double &num, const RealVariable &rnum){
            RealVariable *result = new RealVariable();
            result->a = rnum.a;
            result->b = rnum.b;
            result->c = rnum.c + num;
            return *result;
        }

        RealVariable& operator-(RealVariable rv, const RealVariable &num){
            RealVariable *result = new RealVariable();
            result->a = rv.a - num.a;
            result->b = rv.b - num.b;
            result->c = rv.c - num.c;
            return *result;

        }
        RealVariable& operator-(RealVariable rv,const double &num){
            RealVariable *result = new RealVariable();
            result->a = rv.a;
            result->b = rv.b;
            result->c = rv.c - num;
            return *result;
        }

        RealVariable& operator-(const double &num, const RealVariable &rnum){
            RealVariable *result = new RealVariable();
            *result = rnum - num;
            return *result;
        }

        RealVariable& operator*(RealVariable rv, const RealVariable &num){
            RealVariable *result = new RealVariable();
            if (rv.a != 0){
                if(num.a != 0 || num.b != 0) throw ("ERROR: power greater than 2");
                else {
                    result->a = rv.a * num.c;
                    result->b = rv.b * num.c;
                    result->c = rv.c * num.c;
                }
            }
            else if(num.a != 0){
                if (rv.b != 0) throw ("ERROR: power greater than 2");
                else{
                    result->a = num.a * rv.c;
                    result->b = num.b * rv.c;
                    result->c = num.c * rv.c;
                }
            }
            else if(rv.b == 0){
                result->b = num.b * rv.c;
                result->c = rv.c * num.c;
            } 
            else if(num.b == 0){
                result->b = rv.b * num.c;
                result->c = rv.c * num.c;
            } 

            else if(rv.c == 0){
                result->a = rv.b * num.b;
                result->b = rv.b * num.c;
            }
            
            else if (num.c == 0){
                result->a = rv.b * num.b;
                result->b = rv.c * num.b;
            } 
            else{
                result->a = rv.b * num.b;
                result->b = (rv.b * num.c) + (rv.c * num.c);
                result->c = rv.c * num.c; 
            }    
            
            return *result;
        }

        RealVariable& operator*(RealVariable rv, const double &num){
            RealVariable *result = new RealVariable();
            result->a = rv.a * num;
            result->b = rv.b * num;
            result->c = rv.c * num;
            return *result;
        }

        RealVariable& operator*(const double &num, const RealVariable &rnum){
            RealVariable *result = new RealVariable();
            result->a = rnum.a * num;
            result->b = rnum.b * num;
            result->c = rnum.c * num;
            return *result;
        }

       
        RealVariable& operator/(RealVariable rv, const double &num){
            if(num == 0) throw ("ERROR: Can not divide by zero!");
            RealVariable *result = new RealVariable();
            result->a = rv.a / num;
            result->b = rv.b / num;
            result->c = rv.c / num; 
            return *result;
        }

        RealVariable& operator==(RealVariable rv, const RealVariable &num){
            RealVariable *result = new RealVariable();
            *result = rv - num;
            return *result;
        }

        RealVariable& operator==(RealVariable rv,const double &num){
            RealVariable *result = new RealVariable();
            *result = rv - num;
            return *result;
        }
        RealVariable& operator==(const double &num, const RealVariable &rnum){
            RealVariable *result = new RealVariable();
            *result = num - rnum;
            return *result;
        }


    

        
//////////////////////////////////////////////////

        ComplexVariable& operator^(ComplexVariable cv, const int &num){
        
            ComplexVariable *result = new  ComplexVariable();
            if (num > 2) throw("invalid input");
            else if (num == 0) {
                result->a = 0;
                result->b = 0;
                result->c = 1;
                return *result;
            }

            else if(num == 1){
                *result = cv;
                return *result;
            }
            
            else {
                result->a = cv.a + (cv.b * cv.b);
                result->b = 0;
                result->c = cv.c;

                return *result;
            }
        }

        ComplexVariable& operator+(const ComplexVariable cv, const ComplexVariable &num){
            ComplexVariable *result = new  ComplexVariable();
            result->a.real(cv.a.real() + num.a.real());
            result->a.imag(cv.a.imag() + num.a.imag());
            result->b.real(cv.b.real() + num.b.real());
            result->b.imag(cv.b.imag() + num.b.imag());
            result->c.real(cv.c.real() + num.c.real());
            result->c.imag(cv.c.imag() + num.c.imag());
           
            return *result;
        }

        ComplexVariable& operator+(const ComplexVariable cv, const complex<double> &num){
            ComplexVariable *result = new  ComplexVariable();
            double r = cv.c.real() + num.real();
            double i = cv.c.imag() + num.imag();
            result->a.real(cv.a.real());
            result->a.imag(cv.a.imag());
            result->b.real(cv.b.real());
            result->b.imag(cv.b.imag());
            result->c.real(r);
            result->c.imag(i);
            return *result;
        }
        ComplexVariable& operator+(const complex<double> &num, const ComplexVariable &cnum){
            ComplexVariable *result = new  ComplexVariable();
            result->a.real(cnum.a.real());
            result->a.imag(cnum.a.imag());
            result->b.real(cnum.b.real());
            result->b.imag(cnum.b.imag());
            double r = cnum.c.real() + num.real();
            double i = cnum.c.imag() + num.imag();
            result->c.real(r);
            result->c.imag(i);
            return *result;
        }
        ComplexVariable& operator+(const ComplexVariable cv, const double &num){
            ComplexVariable *result = new  ComplexVariable();
            result->a.real(cv.a.real());
            result->a.imag(cv.a.imag());
            result->b.real(cv.b.real());
            result->b.imag(cv.b.imag());
            result->c.real(cv.c.real()+ num);
            result->c.imag(cv.c.imag());
            return *result;
        }
        ComplexVariable& operator+(const double &num, const ComplexVariable cv){
            ComplexVariable *result = new  ComplexVariable();
            *result = cv + num;
            return *result;
        }


        ComplexVariable& operator-(ComplexVariable cv, const ComplexVariable &num){
            ComplexVariable *result = new  ComplexVariable();
            result->a.real(cv.a.real() - num.a.real());
            result->a.imag(cv.a.imag() - num.a.imag());
            result->b.real(cv.b.real() - num.b.real());
            result->b.imag(cv.b.imag() - num.b.imag());
            result->c.real(cv.c.real() - num.c.real());
            result->c.imag(cv.c.imag() - num.c.imag());
           
            return *result;
        }
        ComplexVariable& operator-(const ComplexVariable cv, const complex<double> &num){
            ComplexVariable *result = new  ComplexVariable();
            double r = cv.c.real() - num.real();
            double i = cv.c.imag() - num.imag();
            result->a.real(cv.a.real());
            result->a.imag(cv.a.imag());
            result->b.real(cv.b.real());
            result->b.imag(cv.b.imag());
            result->c.real(r);
            result->c.imag(i);
            return *result;
        }
        ComplexVariable& operator-(const ComplexVariable cv, const double &num){
            ComplexVariable *result = new  ComplexVariable();
            result->a.real(cv.a.real());
            result->a.imag(cv.a.imag());
            result->b.real(cv.b.real());
            result->b.imag(cv.b.imag());
            result->c.real(cv.c.real()-num);
            result->c.imag(cv.c.imag());
            return *result;
        }
        ComplexVariable& operator-(const double &num, const ComplexVariable cv){
            ComplexVariable *result = new  ComplexVariable();
            *result = cv - num;
            return *result;
        }

        ComplexVariable& operator-(const complex<double> &num, const ComplexVariable &cnum){
            ComplexVariable *result = new  ComplexVariable();
            result->a.real(-cnum.a.real());
            result->a.imag(-cnum.a.imag());
            result->b.real(-cnum.b.real());
            result->b.imag(-cnum.b.imag());
            double r = num.real() - cnum.c.real();
            double i = num.imag() - cnum.c.imag();
            result->c.real(r);
            result->c.imag(i);
            return *result;
            delete result;
        }


        
        ComplexVariable& operator*(const ComplexVariable cv, const complex<double> &num){
            ComplexVariable *result = new  ComplexVariable();
            double ra = cv.a.real() * num.real() - cv.a.imag() * num.imag();
            double ia = cv.a.real() * num.imag() + cv.a.imag() * num.real();
            double rb = cv.b.real() * num.real() - cv.b.imag() * num.imag();
            double ib = cv.b.real() * num.imag() + cv.b.imag() * num.real();
            double rc = cv.c.real() * num.real() - cv.c.imag() * num.imag();
            double ic = cv.c.real() * num.imag() + cv.c.imag() * num.real();
            result->a.real(ra);
            result->a.imag(ia);
            result->b.real(rb);
            result->b.imag(ib);
            result->c.real(rc);
            result->c.imag(ic);
            return *result;
            delete result;
        }

        ComplexVariable& operator*(const complex<double> &num, const ComplexVariable &cnum){
            ComplexVariable *result = new  ComplexVariable();
            *result = cnum * num;
            return *result;
            delete result;
        }

        ComplexVariable& operator/(const ComplexVariable cv, const double &num){
            ComplexVariable *result = new  ComplexVariable();
            if(num == 0) throw ("ERROR: Can not divide by zero!");
            double ra = cv.a.real() / num;
            double ia = cv.a.imag() / num;
            double rb = cv.b.real() / num;
            double ib = cv.b.imag() / num;
            double rc = cv.c.real() / num;
            double ic = cv.c.imag() / num;
            result->a.real(ra);
            result->a.imag(ia);
            result->b.real(rb);
            result->b.imag(ib);
            result->c.real(rc);
            result->c.imag(ic);
            return *result;
            
        }
        
        ComplexVariable& operator==(ComplexVariable cv, const ComplexVariable &num){
            ComplexVariable *result = new  ComplexVariable();
            *result = cv - num;
            return *result;
        }
        ComplexVariable& operator==(const ComplexVariable cv, const complex<double> &num){
            ComplexVariable *result = new  ComplexVariable();
            *result = cv-num;
            return *result;
          
        }
        ComplexVariable& operator==(const ComplexVariable cv, const double &num){
            ComplexVariable *result = new  ComplexVariable();
            *result = cv-num;
            return *result;
          
        }
        ComplexVariable& operator==(const complex<double> &num, const ComplexVariable &cnum){
            ComplexVariable *result = new  ComplexVariable();
            *result = num-cnum;
            return *result;
        }

/////////////////////////////////

    double solve (const RealVariable &rNum){
        if ((rNum.a == 0 && rNum.b == 0) || (rNum.b == 0 && rNum.c > 0)) throw ("ERROR!!!");
        else if ((rNum.a == 0 && rNum.c == 0) || (rNum.b == 0 && rNum.c == 0)) return 0;
        else if (rNum.a == 0) return -rNum.c/rNum.b;
        else if (rNum.b == 0) return sqrt((-rNum.c)/rNum.a);
        else if (rNum.c == 0) return 0;
        else {
            return (-rNum.b + sqrt(pow(rNum.b,2)-4*rNum.a*rNum.c))/2*rNum.a;
        }
    }

    complex<double> solve (const ComplexVariable &cNum){
        if((cNum.a.real() == 0 && cNum.a.imag() == 0)&&(cNum.b.real() == 0 && cNum.b.imag() == 0))throw ("ERROR!!!");
        else if (cNum.a.real() == 0 && cNum.a.imag() == 0) return (-cNum.c)/(cNum.b);
        else if (cNum.b.real() == 0 && cNum.b.imag() == 0) return sqrt((-cNum.c)/cNum.a);
        else if (cNum.c.real() == 0 && cNum.c.imag() == 0) return 0;
         else {
            
            return (-cNum.b + sqrt(pow(cNum.b,2)-4.0*cNum.a*cNum.c))/2.0*cNum.a;
        }

        return 0;
    }

}