#ifndef GEOM_H
#define GEOM_H

// Eigene Definition von PI
#define PI 3.14159265358979323846


// -----------------------------
// Flächenberechnungen
// -----------------------------

static inline double flaeche_kreis(double radius) {
    return PI * radius * radius;
}

static inline double flaeche_quadrat(double seite) {
    return seite * seite;
}

static inline double flaeche_rechteck(double breite, double hoehe) {
    return breite * hoehe;
}

static inline double flaeche_dreieck(double grundseite, double hoehe) {
    return 0.5 * grundseite * hoehe;
}

static inline double flaeche_trapez(double grundseite1, double grundseite2, double hoehe) {
    return 0.5 * (grundseite1 + grundseite2) * hoehe;
}

// -----------------------------
// Volumenberechnungen
// -----------------------------

static inline double volumen_kugel(double radius) {
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

static inline double volumen_wuerfel(double seite) {
    return seite * seite * seite;
}

static inline double volumen_quader(double breite, double hoehe, double tiefe) {
    return breite * hoehe * tiefe;
}

static inline double volumen_zylinder(double radius, double hoehe) {
    return PI * radius * radius * hoehe;
}

static inline double volumen_kegel(double radius, double hoehe) {
    return (1.0 / 3.0) * PI * radius * radius * hoehe;
}

#endif // GEOM_H
