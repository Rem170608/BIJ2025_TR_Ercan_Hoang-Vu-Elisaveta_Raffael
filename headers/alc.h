#ifndef BAC_CALCULATOR_H
#define BAC_CALCULATOR_H

// Calculate BAC
double calculate_bac(double weight, char sex, double alcohol_grams) {
    double a,b,c,r;
    if(sex == 'M' || sex == 'm') {
        r = 0.7;
    } 
    else if(sex == 'F' || sex == 'f') {
        r = 0.6;
    }
    else {
        r = 0.615;
    }
    a = alcohol_grams/(weight*r);
    return a;
}

#endif
