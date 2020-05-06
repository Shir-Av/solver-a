// #include <iostream>
// #include <complex>
// #include "solver.hpp"
// #include "doctest.h"
// using namespace std;
// using namespace solver;


// // TEST_CASE("realvariable power = 1"){

// //     RealVariable x;
// //     CHECK(solve(x+7 == 10)==3);
// //     CHECK(solve(15*x-45==0)==3);
// //     CHECK(solve(6*x+12 == 10)==-3);
// //     CHECK(solve(x*8-15 == 1)==2);
// //     CHECK(solve(x+7 == 5*x-1)==2);
// //     CHECK(solve(14*x/7 == 8)==4);
// //     CHECK(solve(17*x+4*x == (65-2))==3);
// //     CHECK(solve(x-1 == 0)==1);
// //     CHECK(solve(19*x == 0)==0);
// //     CHECK(solve(-1*x+6 == 3*x-2)==2);
// //     CHECK(solve(-7*x-10 == 2-3*x)==-3);
// //     CHECK(solve(35-13*x == 19-5*x)==2);
// //     CHECK(solve(10*x+8 == 4*x+44)==6);
// //     CHECK(solve(3*x-x == 10)==5);
// //     CHECK(solve(5*x+2 == 4)==0.25);
// //     CHECK(solve(12+x+3==11+4-x) == 15);
// //     CHECK(solve(20+x+6==100-3+x+x) == -71);
// //     CHECK(solve(548-x+x==249+6-x) == 293);
// //     CHECK(solve(22-x==23.5) == -0.5);
// //     CHECK(solve(x+x+x==63) == 21);
// //     CHECK(solve(2*x-4==10*x) == -0.5);
// //     CHECK(solve(33*x/3==3*x) == 0);
// //     CHECK(solve(12*x/3==4) == 1);
// //     CHECK(solve(2*x==16+x) == 16);
// // }

// // TEST_CASE("realvariable faild"){

// //     RealVariable x;
// //     CHECK_THROWS(solve(x+7 == 10+x));
// //     CHECK_THROWS(solve(15*x-12 == 10+15*x));
// //     CHECK_THROWS(solve(14*x/7 == 2*x+3));
// //     CHECK_THROWS(solve(x*60/15 == 4*x+11));
// //     CHECK_THROWS(solve(x*35/7 == 5*x+14));
// //     CHECK_THROWS(solve(100*x-43 == 100*x));
// //     CHECK_THROWS(solve(11*x-4*x == 25+7*x));
// //     CHECK_THROWS(solve(3*x-x == x+x+1));
// //     CHECK_THROWS(solve(-12*x+7*x == 10-5*x));
// //     CHECK_THROWS(solve(77*x/7 == 11*x-7));
// //     CHECK_THROWS(solve(8*x-4*x == 4*x+16));
// //     CHECK_THROWS(solve(-3*x+5 == -5*x+2*x));
// //     CHECK_THROWS(solve(56*x/8 == 7*x+40));
// //     CHECK_THROWS(solve(-2.5*x/2 == -1.25*x-10));
// //     CHECK_THROWS(solve(7+x == 1*x));
   

// // }

// // TEST_CASE("realvariable power = 2"){

// //     RealVariable x;
// //     CHECK((solve((x^2)-4*x+3 == 0)==-1));
// //     CHECK((solve((x^2)-16==0)==4));
// //     CHECK(solve((x^2)+5*x == 0)==0);
// //     CHECK(solve(2*x+(x^2)-3 == 0)==1);
// //     CHECK(solve(2*(x^2)+4*x-8 == -2*x)==1);
// //     CHECK(solve(7*(x^2) == 28)==2);
// //     CHECK(solve(0.5*(x^2)-3*x == -4)==4);
// //     CHECK(solve(-1*(x^2) == -36)==6);
// //     CHECK(solve(19*(x^2) == 0)==0);
// //     CHECK(solve(-1*(x^2)+6 == -3)==3);
// //     CHECK(solve(5*(x^2)-25*x+30 == 0)==3);
// //     CHECK(solve(-3*(-1*x-7)+(x^2) == (x^2)+8*x)==4.5);
// //    // CHECK(solve(6*(x^2)/x == 12)==2);
// //     CHECK(solve(20*(x^2)+100 == 420)==4);
// //     CHECK(solve((x^2) == 0)==0);
// //     CHECK(solve((x^2)==6*6) == 6);
// // }

// // TEST_CASE("realvariable faild 2"){

// //     RealVariable x;
// //     CHECK_THROWS(solve((x^2)+7 == 10+(x^2)));
// //     CHECK_THROWS(solve(15*(x^2)-12 == 10+15*(x^2)));
// //     CHECK_THROWS(solve(14*(x^2)/7 == 2*(x^2)+3));
// //     CHECK_THROWS(solve((x^2)*60/15 == 4*(x^2)+11));
// //     CHECK_THROWS(solve((x^2)*35/7 == 5*(x^2)+14));
// //     CHECK_THROWS(solve(100*(x^2)-43 == 100*(x^2)));
// //     CHECK_THROWS(solve(11*x-4*(x^2) == 25+7*(x^2)));
// //     CHECK_THROWS(solve((x^2) == -9));
// //     CHECK_THROWS(solve((x^2)+16 == 0));
// //     CHECK_THROWS(solve(-2*(x^2) == 8));
// //     CHECK_THROWS(solve(3*(x^2) == -12));
// //     CHECK_THROWS(solve(10*(x^2) == -160));
// //     CHECK_THROWS(solve(-1*(x^2) == 100));
// //     CHECK_THROWS(solve(-5*(x^2) == 125));
// //     CHECK_THROWS(solve((x^2) == -49));

// // }


// // TEST_CASE("ComplexVariable power = 1"){

// //     ComplexVariable x;
// //     CHECK((solve(x == 4)==complex<double>(4,0)));
// //     CHECK((solve(4 == x)==complex<double>(4,0)));
// //     CHECK((solve(x == 5i)==complex<double>(0,5)));
// //     CHECK((solve(5i == x)==complex<double>(0,5)));
// //     CHECK((solve(x+3i == 6)==complex<double>(6,3)));
// //     CHECK((solve(x+4.0+1i ==3.0)==complex<double>(-1,-1)));
// //     CHECK((solve(x/10.0-2i == 1)==complex<double>(10,20)));
// //     CHECK((solve(10*x == -2.0-2i)==complex<double>(-0.2,-0.2)));
// //     CHECK((solve(3.0+2i == x/3)==complex<double>(9,6)));
// //     CHECK((solve(10*x == 2.0)==complex<double>(0.2,0)));
    
// // }
// // TEST_CASE("complexvariable faild"){

// //     ComplexVariable x;
// //     CHECK_THROWS(solve(x-x == complex<double>(0,12)));
// //     CHECK_THROWS(solve(2*x/2-x ==complex<double>(4,6) ));
// //     CHECK_THROWS(solve(0*x+7.0==complex<double>(7,4)));
// //     CHECK_THROWS(solve(x*0+7.0 ==complex<double>(0,7)));
// //     CHECK_THROWS(solve(7.0+8i+x == x+complex<double>(7,12)));
// //     CHECK_THROWS(solve(x+5i == x+complex<double>(5,0)));
// //     CHECK_THROWS(solve(3*x+26.0 == 3*x+complex<double>(17,0)));
// //     CHECK_THROWS(solve(4*x+18.0 == 4*x+complex<double>(2,0)));
// //     CHECK_THROWS(solve(x+14i == x+complex<double>(0,25)));
// //     CHECK_THROWS(solve(2*x+2.0 == 2*x+complex<double>(25,0)));

// // }

// // TEST_CASE("ComplexVariable power = 2"){

// //     ComplexVariable x;
// //     CHECK((solve((x^2) == -144) == complex<double>(0,12)));
// //     CHECK((solve((x^2) == -121) == complex<double>(0,-11)));
// //     CHECK((solve((x^2) == -100) ==  complex<double>(0,10)));
// //     CHECK((solve((x^2) == -49) ==  complex<double>(0,7)));
// //     CHECK((solve((x^2)+ 3*x - 4 == -121 + 3*x - 4) == complex<double>(0,11)));
// //     CHECK((solve((x^2) + 4*x/4 == -81 + x) == complex<double>(0,9)));
// //     CHECK((solve((x^2) + 2 + 4*x== -23 +3*x + x) == complex<double>(0,5)));
// //     CHECK((solve((x^2) + 6*x == -16 +12*x/2) == complex<double>(0,4)));
// //     CHECK((solve((x^2) + x == -4 + 2*x/2) == complex<double>(0,2)));
// //     CHECK((solve((x^2) + 3*x == -1 + 3*x + 0) == complex<double>(0,-1)));
    
// // }


#include <string>
#include <iostream>
#include "doctest.h"
#include "solver.hpp"
using namespace std;
using namespace solver;


TEST_CASE("simple equation") {
     RealVariable x;
     CHECK(solve(2*x==10)==5);
     CHECK(solve(-2*x==-10)==5);
     CHECK(solve(2*x==0)==0);
     CHECK(solve(8*x==0)==0);
     CHECK(solve(8*x/8==1)==1);
     CHECK(solve(3*x==90)==30);
     CHECK(solve(4*x+10==90)==20);
     CHECK(solve(4*x-10==90)==25);
     CHECK(solve(2*x+5==10)==2.5);
     CHECK(solve(2*x==9)==4.5);
     CHECK(solve(2*x==18)==9);
     CHECK(solve(4*x==36)==9);
     CHECK(solve(2*x==100)==50);
     CHECK(solve(x+5==20)==15);
     CHECK(solve(x-20==-20)==0);
     CHECK(solve(x-20==-5)==15);
     CHECK(solve(x+20==5)==-15);
     CHECK(solve(x+25==5)==-20);
     CHECK(solve(2*x==-4)==-2);
     CHECK(solve(3*x+5==11)==2);
     CHECK(solve(2*x-4.0 == 10.0)==7);
     CHECK(solve(4*x/2-4.0 == 10.0)==7);
     CHECK(solve(4*x-4.0 == 36.0)==10);
     CHECK(solve(19*x==0)==0);
     CHECK(solve(8*x/2-4.0 == 36.0)==10);
     CHECK(solve(x==5)==5);
     CHECK(solve(x==20-10)==10);
     CHECK(solve(3*x+2==14)==4);
     CHECK(solve(3*x+4==16)==4);
     CHECK(solve(x+15==-8)==-23);
     CHECK(solve(6*x/2+2==14)==4);

}
TEST_CASE("test 2"){
    RealVariable x;
            CHECK((solve((x^2)==9)==3||solve((x^2)==9)==-3));
            CHECK((solve(2*(x^2)==18)==3||solve(2*(x^2)==18)==-3));
            CHECK((solve((x^2)+5==30)==5||solve((x^2)+5==30)==-5));
            CHECK(solve(2*x-2==4)==3);
            CHECK(((solve((x^2)==16)==4)||(solve((x^2)==16)==-4)));
            CHECK((solve((x^2)==25)==5 ||solve((x^2)==25)==-5));
            CHECK((solve((x^2)+2==18)==4||solve((x^2)+2==18)==-4));
            CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4||solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
            CHECK((solve((x^2) + 2*x == 16 + 6.0*x/2 - x)==4||solve((x^2) + 2*x == 16 + 6.0*x/2 - x)==-4));
            CHECK((solve(2*(x^2)  == 32 )==4||solve(2*(x^2)  == 32 )==-4));
            CHECK((solve(3*(x^2)-15 == 60 )==5||solve(3*(x^2)-15 == 60 )==-5));
            CHECK((solve((x^2)==81)==9||solve((x^2)==81)==-9));
            CHECK((solve(2*(x^2)==162)==9||solve(2*(x^2)==162)==-9));
            CHECK((solve((x^2) + 2*x+5 == 21 + 6.0*x/2 - x)==4||solve((x^2) + 2*x+5 == 21 + 6.0*x/2 - x)==-4));
            CHECK(solve(3*(x^2)-30 == 45 )==5);
            CHECK((solve((x^2)==1)==1||solve((x^2)==1)==-1));// also -1
            CHECK((solve((x^2)==100)==10||solve((x^2)==100)==-10));
}

TEST_CASE("CHECK_THROWS"){
    RealVariable x;
    CHECK_THROWS(solve((x^2)==-100));
    CHECK_THROWS( solve((x^2)==-16));
    CHECK_THROWS( solve((x^2)==-1));
    CHECK_THROWS( solve(2*(x^2)==-16));
    CHECK_THROWS( solve(2*(x^2)==-100));
    CHECK_THROWS(solve((x^2)==-25));
    CHECK_THROWS(solve(2*(x^2)==-50));
    CHECK_THROWS(solve(2*(x^2)==-7));
    CHECK_THROWS(solve((x^2)==-9));
    CHECK_THROWS(solve((x^2)==-12));

}
// TEST_CASE("test ComplexVariable"){

//     ComplexVariable y;
//     CHECK(solve(2*y-4 == 10)==std::complex<double>(7,0));
//     CHECK(solve(y-4 == 10)==std::complex<double>(14,0));
//     CHECK((solve((y^2) == 16)==std::complex<double>(4,0)||solve((y^2) == 16)==std::complex<double>(-4,0)));
//     CHECK((solve((y^2) == -16)==std::complex<double>(0,4)||solve((y^2) == -16)==std::complex<double>(0,-4)));
//     CHECK((solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==std::complex<double>(4,0)||solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y)==std::complex<double>(-4,0))); //(-4,0)
//     CHECK((solve(y+5i == 2*y+3i)==std::complex<double>(0,2)||solve(y+5i == 2*y+3i)==std::complex<double>(0,-2)));
//     CHECK((solve((y^2)==-100)==std::complex<double>(0,10)||solve((y^2)==-100)==std::complex<double>(0,-10)));
//     CHECK((solve(2*(y^2)==-200)==std::complex<double>(0,10)||solve(2*(y^2)==-200)==std::complex<double>(0,-10)));
//     CHECK((solve((y^2)==100)==std::complex<double>(10,0)||solve((y^2)==100)==std::complex<double>(-10,0)));
//     CHECK((solve((y^2)==-25)==std::complex<double>(0,5)||solve((y^2)==-25)==std::complex<double>(0,-5)));
//     CHECK((solve(2*(y^2)==-50)==std::complex<double>(0,5)||solve(2*(y^2)==-50)==std::complex<double>(0,-5)));
//     CHECK((solve((y^2)==-9)==std::complex<double>(0,3)||solve((y^2)==-9)==std::complex<double>(0,-3)));
//     CHECK((solve((y^2)==-81)==std::complex<double>(0,9)||solve((y^2)==-81)==std::complex<double>(0,-9)));
//     CHECK((solve((y^2) + 3*y + 4 == 20 + 6*y/2 )==std::complex<double>(4,0)||solve((y^2) + 3*y + 4 == 20 + 6*y/2 )==std::complex<double>(-4,0))); //(-4,0)
//     CHECK((solve((y^2) + 3*y == 16 + 3*y )==std::complex<double>(4,0)||solve((y^2) + 3*y == 16 + 3*y )==std::complex<double>(-4,0))); //(-4,0)
//     CHECK((solve((y^2) + 6*y/2 == 16 + 9*y/3 )==std::complex<double>(4,0)||solve((y^2) + 6*y/2 == 16 + 9*y/3 )==std::complex<double>(-4,0))); //(-4,0)
//     CHECK((solve((y^2)==9)==std::complex<double>(3,0)||solve((y^2)==9)==std::complex<double>(-3,0)));  //-3
//     CHECK((solve((y^2)+5==30)==std::complex<double>(5,0)||solve((y^2)+5==30)==std::complex<double>(-5,0))); //-5
//     CHECK((solve(2*y-2==4)==std::complex<double>(3,0)||solve(2*y-2==4)==std::complex<double>(-3,0)));   //-3
//     CHECK((solve((y^2) == 16)==std::complex<double>(4,0)||solve((y^2) == 16)==std::complex<double>(-4,0))); //(-4,0)
//     CHECK((solve((y^2)==25)==std::complex<double>(5,0)||solve((y^2)==25)==std::complex<double>(-5,0)));  //-5
//     CHECK((solve((y^2)+2==18)==std::complex<double>(4,0)||solve((y^2)+2==18)==std::complex<double>(-4,0)));  //-4



// }
// TEST_CASE("CHECK_THROWS ComplexVariable ") {
//     ComplexVariable y;
//     CHECK_THROWS(solve((y ^ 0)==-16));
// }