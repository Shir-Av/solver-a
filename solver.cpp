#include <iostream>
#include <complex>
#include "solver.hpp"
using namespace std;
namespace solver{

        const RealVariable RealVariable:: operator^(const double &num) const{
            return RealVariable();
        }

        const RealVariable RealVariable:: operator+(const RealVariable &num) const{
            return RealVariable();
        }

        const RealVariable RealVariable:: operator+(const double &num) const{
            return RealVariable();
        }

        const RealVariable operator+(const double &num, const RealVariable &rnum){
            return RealVariable();
        }

        const RealVariable RealVariable:: operator-(const RealVariable &num) const{
            return RealVariable();
        }

        const RealVariable RealVariable:: operator-(const double &num) const{
            return RealVariable();
        }

        const RealVariable operator-(const double &num, const RealVariable &rnum){
            return RealVariable();
        }

        const RealVariable RealVariable:: operator*(const RealVariable &num) const{
            return RealVariable();
        }

        const RealVariable RealVariable:: operator*(const double &num) const{
            return RealVariable();
        }

        const RealVariable operator*(const double &num, const RealVariable &rnum){
            return RealVariable();
        }

        const RealVariable RealVariable:: operator/(const RealVariable &num) const{
            return RealVariable();
        }

        const RealVariable RealVariable:: operator/(const double &num) const{
            return RealVariable();
        }

        const RealVariable operator/(const double &num, const RealVariable &rnum){
            return RealVariable();
        }

        const RealVariable RealVariable:: operator==(const RealVariable &num) const{
            return RealVariable();
        }

        const RealVariable RealVariable:: operator==(const double &num) const{
            return RealVariable();
        }

        const RealVariable operator==(const double &num, const RealVariable &rnum){
            return RealVariable();
        }
//////////////////////////////////////////////////

        const ComplexVariable ComplexVariable:: operator^(const double &num) const{
            return ComplexVariable();
        }

        const ComplexVariable ComplexVariable:: operator+(const ComplexVariable &num) const{
            return ComplexVariable();
        }
        const ComplexVariable ComplexVariable:: operator+(const complex<double> &num) const{
            return ComplexVariable();
        }
        const ComplexVariable operator+(const complex<double> &num, const ComplexVariable &rnum){
            return ComplexVariable();
        }
        
        const ComplexVariable ComplexVariable:: operator-(const ComplexVariable &num) const{
            return ComplexVariable();
        }
        const ComplexVariable ComplexVariable:: operator-(const complex<double> &num) const{
            return ComplexVariable();
        }
        const ComplexVariable operator-(const complex<double> &num, const ComplexVariable &rnum){
            return ComplexVariable();
        }

        const ComplexVariable ComplexVariable:: operator*(const ComplexVariable &num) const{
            return ComplexVariable();
        }
        const ComplexVariable ComplexVariable:: operator*(const complex<double> &num) const{
            return ComplexVariable();
        }
        const ComplexVariable operator*(const complex<double> &num, const ComplexVariable &rnum){
            return ComplexVariable();
        }

        const ComplexVariable ComplexVariable:: operator/(const ComplexVariable &num) const{
            return ComplexVariable();
        }
        const ComplexVariable ComplexVariable:: operator/(const complex<double> &num) const{
            return ComplexVariable();
        }
        const ComplexVariable operator/(const complex<double> &num, const ComplexVariable &rnum){
            return ComplexVariable();
        }

        const ComplexVariable ComplexVariable:: operator==(const ComplexVariable &num) const{
            return ComplexVariable();
        }
        const ComplexVariable ComplexVariable:: operator==(const complex<double> &num) const{
            return ComplexVariable();
        }
        const ComplexVariable operator==(const complex<double> &num, const ComplexVariable &rnum){
            return ComplexVariable();
        }




/////////////////////////////////

    double solve (const RealVariable &rNum){
        return 0;
    }

    complex<double> solve (const ComplexVariable &cNum){
        return 0;
    }

}