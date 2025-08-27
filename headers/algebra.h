
#ifndef ALGEBRA_H
#define ALGEBRA_H

#include <stdio.h>
#include <ctype.h>

static const char *input;  // Pointer auf den Ausdruck
static char current_char;   // aktuelles Zeichen

static void next_char() {
    current_char = *input++;
}

static void skip_whitespace() {
    while (current_char == ' ' || current_char == '\t') next_char();
}

static double parse_factor(); // Vorwärtsdeklaration

// Parse term: * oder /
static double parse_term() {
    double result = parse_factor();
    while (1) {
        skip_whitespace();
        if (current_char == '*') {
            next_char();
            result *= parse_factor();
        } else if (current_char == '/') {
            next_char();
            result /= parse_factor();
        } else {
            break;
        }
    }
    return result;
}

// Parse expr: + oder -
static double parse_expr() {
    double result = parse_term();
    while (1) {
        skip_whitespace();
        if (current_char == '+') {
            next_char();
            result += parse_term();
        } else if (current_char == '-') {
            next_char();
            result -= parse_term();
        } else {
            break;
        }
    }
    return result;
}

// Parse factor: Zahl oder (expr)
static double parse_factor() {
    skip_whitespace();
    double result = 0;
    if (current_char == '(') {
        next_char();
        result = parse_expr();
        if (current_char == ')') next_char();
    } else if (isdigit(current_char) || current_char == '.') {
        char number[64];
        int i = 0;
        while (isdigit(current_char) || current_char == '.') {
            number[i++] = current_char;
            next_char();
        }
        number[i] = '\0';
        sscanf(number, "%lf", &result);
    }
    return result;
}

// Hauptfunktion zum Berechnen
static double eval(const char *expr) {
    input = expr;
    next_char();
    return parse_expr();
}

#endif ALGEBRA_H
