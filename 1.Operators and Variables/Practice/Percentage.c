#include <stdio.h>
int main (){
    //this is a single line comment
    /*
    This is a multi line comment
    */
    float m1 = 97;  //m1 can be physics marks
    float m2 = 88;  //m2 can be chemistry marks
    float m3 = 93;  //m3 can be maths marks
    float m4 = 89;  //m4 can be painting marks
    float m5 = 85;  //m5 can be english marks
    float percentage = (m1 + m2 + m3 + m4 + m5)/5;
    printf(" Your Percentage is : %f",  percentage);
    return 0;
}