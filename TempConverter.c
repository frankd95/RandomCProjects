#include <stdio.h>
#include <stdbool.h>

double convertTemp();

// Unit Converter Project
// Learning C and wanted to make a quick project to help learn it.
// 4-20-2022
int main(void) {
    double tempF;
    double tempC;
    int toF;
    int userChoice;
    double userTemp;
    double temp;
    // Ask to convert F to C or C to F.
    // if toF = true then it'll convert C to F
    // if toF = false itll convert from F to C;
    printf("Hello! Welcome to temperature Converter!\n"
           "Will you be converting to C(1) or to F(2)?"
           "\t");
    scanf("%d",&userChoice);

    printf("Please input temp:\t");
    scanf("%lf",&userTemp);

    if (userChoice == 2)
        toF = 1;
    else
        toF = 0;

    double ret;
    ret=convertTemp(toF,userTemp);


    printf("The temp is %.2f", ret);
    if (toF == 0){
        printf(" C");
    } else{
        printf(" F");
    }
}

double convertTemp(int toF,double userTemp) {
    double temp;
    int FREEZING_POINT_TEMP=32;
    double ONE_POINT_EIGHT = 1.8;



    if (toF==1){
        temp = (userTemp*ONE_POINT_EIGHT)+FREEZING_POINT_TEMP;
    }else {
        temp = (userTemp - FREEZING_POINT_TEMP)/ONE_POINT_EIGHT;

    }
     return temp;
//Celsius to fahrenheit formula
    // F = C*1.8 + 32
    // C = (F - 32)/1.8

}