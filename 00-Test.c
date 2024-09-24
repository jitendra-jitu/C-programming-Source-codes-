

// Preprocessor directives  allow us to include other files content in this program ,
// as itself preprocessor directive is not a part of progran 

#include <stdio.h>
// #include <math.h>
#define h 10
#define b 10
#define AreaOfTriangle(height,base) (0.5*height*base)//Macro Functions
#define sqrt(num) num*num



int main(){

// // #include <math.h> directive 
    // double num= sqrt(4);
    // printf("%lf",num);

// #define
    // // int AreaOfTriangle=0.5*height*base;
    // printf("%d",AreaOfTriangle);

// //Macro-Function
    // double AreaOfTriangle=AreaOfTriangle(h,b);
    // printf("%lf",AreaOfTriangle);


//Home work
    double square_num=sqrt(b);
    printf("%.2lf",square_num);

    return 0;
    
}



