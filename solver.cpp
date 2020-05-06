#include <iostream>
#include <complex>
#include "solver.hpp"
using namespace std;
namespace solver{

        RealVariable& operator^(RealVariable &rv, const int &num){
            RealVariable *result1 = new RealVariable();
            if (num > 2) throw("invalid input");
            else if (num == 0) {
                result1->a = 0;
                result1->b = 0;
                result1->c = 1;
                return *result1;
            }
            else if(num == 1) return rv;
            
            else {
                if (rv.a !=0) throw ("ERROR: power greater than 2");
                else if(rv.b == 0) result1->c = rv.c*rv.c;
                else if (rv.c == 0) result1->b = rv.b*rv.b;
                else {
                    result1->a = rv.b*rv.b;
                    result1->b = 2*rv.b*rv.c;
                    result1->c = rv.c*rv.c;
                } 
                return *result1;
            }
            delete result1;
        }

        RealVariable& operator+(RealVariable &rv, const RealVariable &num){
            rv.a = rv.a + num.a;
            rv.b = rv.b + num.b;
            rv.c = rv.c + num.c;
            return rv;
        }

        RealVariable& operator+(RealVariable &rv,const double &num){
            rv.c += num;
            return rv;
        }
        RealVariable& operator+(const double &num, const RealVariable &rnum){
            RealVariable *result2 = new RealVariable();
            result2->a = rnum.a;
            result2->b = rnum.b;
            result2->c = rnum.c + num;
            return *result2;
            delete result2;
        }

        RealVariable& operator-(RealVariable &rv, const RealVariable &num){
            rv.a = rv.a - num.a;
            rv.b = rv.b - num.b;
            rv.c = rv.c - num.c;
            return rv;

        }
        RealVariable& operator-(RealVariable &rv,const double &num){
            RealVariable *result3 = new RealVariable();
            result3->a = rv.a;
            result3->b = rv.b;
            result3->c = rv.c - num;
            return *result3;
            // rv.c -= num;
            // return rv;
            delete result3;
        }
        RealVariable& operator-(const double &num, const RealVariable &rnum){
            RealVariable *result = new RealVariable();
            result->a = -rnum.a;
            result->b = -rnum.b;
            result->c = num - rnum.c;
            return *result;
            delete result;
        }

        RealVariable& operator*(RealVariable &rv, const RealVariable &num){
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
            delete result;
        }

        RealVariable& operator*(RealVariable &rv,const double &num){
            
            rv.a *= num;
            rv.b *= num;
            rv.c *= num;
            return rv;
        }

        RealVariable& operator*(const double &num, const RealVariable &rnum){
            RealVariable *result = new RealVariable();
            result->a = rnum.a * num;
            result->b = rnum.b * num;
            result->c = rnum.c * num;
            return *result;
            delete result;
        }

       
        RealVariable& RealVariable::operator/(const double &num){
            if(num == 0) throw ("ERROR: Can not divide by zero!");
            this->a /= num;
            this->b /= num;
            this->c /= num;    
            return *this;
        }

        RealVariable& operator==(RealVariable &rv, const RealVariable &num){
            rv = rv - num;
            return rv;
        }

        RealVariable& operator==(RealVariable &rv,const double &num){
            RealVariable *result = new RealVariable();
            *result = rv - num;
            return *result;
            delete result;
        }
        RealVariable& operator==(const double &num, const RealVariable &rnum){
            RealVariable *result = new RealVariable();
            *result = num - rnum;
            return *result;
            delete result;
        }

        // ~RealVariable();

    

        
//////////////////////////////////////////////////

        ComplexVariable& operator^(ComplexVariable &cv, const int &num){
           
            ComplexVariable *result = new  ComplexVariable();
            if (num > 2) throw("invalid input");
            else if (num == 0) {
                result->a = 0;
                result->b = 0;
                result->c.real(1);
                return *result;
            }
            else if(num == 1) return cv;
            
            else {
                if (cv.a.real() != 0 || cv.a.imag() != 0) throw ("ERROR: power greater than 2");
                else if(cv.b.real() == 0 && cv.b.imag() == 0){
                    result->c.real(cv.c.real()*cv.c.real() - cv.c.imag()*cv.c.imag());
                    result->c.imag(2*cv.c.real()*cv.c.imag());
                } 

                else if (cv.c.real() == 0 && cv.c.imag() == 0){
                    result->b.real(cv.b.real()*cv.b.real() - cv.b.imag()*cv.b.imag());
                    result->b.imag(2*cv.b.real()*cv.b.imag());
                }   
                else {
                    result->a.real(cv.b.real()*cv.b.real() - cv.b.imag()*cv.b.imag());
                    result->a.imag(2*cv.b.real()*cv.b.imag());
                    result->b.real(2*cv.b.real()*cv.c.real() - 2*cv.b.imag()*cv.c.imag());
                    result->b.imag(2*cv.b.real()*cv.c.imag() + 2*cv.b.imag()*cv.c.real());
                    result->c.real(cv.c.real()*cv.c.real() - cv.c.imag()*cv.c.imag());
                    result->c.imag(2*cv.c.real()*cv.c.imag());
                } 
                return *result;
                delete result;
            }
        }

        ComplexVariable& operator+(const ComplexVariable &cv, const ComplexVariable &num){
            ComplexVariable *result = new  ComplexVariable();
            result->a.real(cv.a.real() + num.a.real());
            result->a.imag(cv.a.imag() + num.a.imag());
            result->b.real(cv.b.real() + num.b.real());
            result->b.imag(cv.b.imag() + num.b.imag());
            result->c.real(cv.c.real() + num.c.real());
            result->c.imag(cv.c.imag() + num.c.imag());
           
            return *result;
            delete result;
        }

        ComplexVariable& ComplexVariable::operator+(const complex<double> &num){
            double r = this->c.real() + num.real();
            double i = this->c.imag() + num.imag();
            this->c.real(r);
            this->c.imag(i);
            return *this;
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
            delete result;
        }

        ComplexVariable& operator-(ComplexVariable &cv, const ComplexVariable &num){
            ComplexVariable *result = new  ComplexVariable();
            result->a.real(cv.a.real() - num.a.real());
            result->a.imag(cv.a.imag() - num.a.imag());
            result->b.real(cv.b.real() - num.b.real());
            result->b.imag(cv.b.imag() - num.b.imag());
            result->c.real(cv.c.real() - num.c.real());
            result->c.imag(cv.c.imag() - num.c.imag());
           
            return *result;
            delete result;
        }
        ComplexVariable& ComplexVariable::operator-(const complex<double> &num){
            double r = this->c.real() - num.real();
            double i = this->c.imag() - num.imag();
            this->c.real(r);
            this->c.imag(i);
            return *this;
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

        // ComplexVariable& operator*(ComplexVariable &cv, const ComplexVariable &num){
        //     ComplexVariable *result = new ComplexVariable();
        //     if (cv.a.real() != 0 || cv.a.imag() != 0){
        //         if(num.a.real() != 0 || num.a.imag() != 0 || num.b.real() != 0 || num.b.imag() != 0) throw ("ERROR: power greater than 2");
        //         else {
        //             *result = cv*num.c;
        //         }
        //     }
        //     else if(num.a.real() != 0 || num.a.imag() != 0){
        //         if (cv.b.real() != 0 || cv.b.imag() != 0) throw ("ERROR: power greater than 2");
        //         else{
        //             *result = cv.c * num;
        //         }
        //     }
        //     else if(cv.b.real() == 0 && cv.b.imag() == 0){
        //         *result = cv.c * num;
        //     } 
        //     else if(num.b.real() == 0 && num.b.imag() == 0){
        //         *result = num.c * cv;
        //     } 

        //     else if(cv.c.real() == 0 && cv.c.imag() == 0){
                
        //     } 
        //     else if(num.c.real() == 0 && num.c.imag() == 0){

        //     }
        //      result->b = cv.b * num.b;
        //     else{
        //         result->a = rv.b * num.b;
        //         result->b = (rv.b * num.c) + (rv.c * num.c);
        //         result->c = rv.c * num.c; 
        //     }    
            
        //     return *result;
        // }

        
        ComplexVariable& operator*(const ComplexVariable &cv, const complex<double> &num){
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

        ComplexVariable& ComplexVariable::operator/(const double &num){
            if(num == 0) throw ("ERROR: Can not divide by zero!");
            double ra = this->a.real() / num;
            double ia = this->a.imag() / num;
            double rb = this->b.real() / num;
            double ib = this->b.imag() / num;
            double rc = this->c.real() / num;
            double ic = this->c.imag() / num;
            this->a.real(ra);
            this->a.imag(ia);
            this->b.real(rb);
            this->b.imag(ib);
            this->c.real(rc);
            this->c.imag(ic);
            return *this;
            
        }
        
        ComplexVariable& operator==(ComplexVariable &cv, const ComplexVariable &num){
            ComplexVariable *result = new  ComplexVariable();
            *result = cv - num;
            return *result;
            delete result;
        }
        ComplexVariable& ComplexVariable::operator==(const complex<double> &num){
            
            return *this-num;
        }
        ComplexVariable& operator==(const complex<double> &num, const ComplexVariable &cnum){
            ComplexVariable *result = new  ComplexVariable();
            *result = num-cnum;
             return *result;
             delete result;
        }

/////////////////////////////////

    double solve (const RealVariable &rNum){
        if (rNum.a == 0 && rNum.b == 0) return rNum.c;
        else if ((rNum.a == 0 && rNum.c == 0) || (rNum.b == 0 && rNum.c == 0)) return 0;
        else if (rNum.a == 0) return -rNum.c/rNum.b;
        else if (rNum.b == 0) return sqrt(-rNum.c);
        else if (rNum.c == 0) return 0;
        else {
            return (-rNum.b + sqrt(pow(rNum.b,2)-4*rNum.a*rNum.c))/2*rNum.a;
        }
    }

    complex<double> solve (const ComplexVariable &cNum){
        return 0;
    }

}