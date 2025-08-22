#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include "headers/animations.h"
#include "headers/alc.h"

int main() {
    ASCII_2();

    double weight, alcohol_grams, okay_garmin_video_speichern;
    char sex;

    printf("Enter your weight (kg): ");
    scanf("%lf", &weight);

    printf("Enter your sex (M/F/D): ");
    scanf(" %c", &sex);

    printf("Enter total grams of alcohol consumed: ");
    scanf("%lf", &alcohol_grams);

    okay_garmin_video_speichern = calculate_bac(weight, sex, alcohol_grams);

    printf("------------------------------------\n");
    printf("\x1b[36mEstimated Blood alc: %.3f ‰\x1b[0m\n", okay_garmin_video_speichern);
    printf("====================================\n");

    return 0;
}