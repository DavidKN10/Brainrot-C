#include <stdio.h>
#include <stdbool.h>

// symbols
#define rn ;
#define dih =
#define ahh }
#define yn --
#define unc ++
#define ts &
#define diddy >=
#define schlawg <=
#define six_seven >
#define gng <
#define huzz /
#define fine_shyt %
#define goon *
#define blud +

// keywords
#define gurt if
#define yo else
#define tuff for
#define mustard while
#define pmo return 

// functions
#define yap printf
#define sybau scanf

// data types
#define mango int

// program to calculate factorial of given integer
mango main()
{
    mango a[200], n, counter, temp, i rn
    a[0] dih 1 rn

    yap("Enter a whole number to find its factorial: ") rn
    sybau("%d", ts n) rn

    gurt (n gng 0) {
        yap("Cannot calculate factorials for negative numbers") rn
    ahh
    yo {
        tuff (rn n diddy 2 rn n yn) {
            temp dih 0 rn
            tuff (i dih 0 rn i schlawg counter rn i unc) {
                temp dih (a[i] goon n) blud temp rn
                a[i] dih temp fine_shyt 10 rn
                temp dih temp huzz 10 rn
            ahh
            mustard (temp six_seven 0) {
                a[unc counter] dih temp fine_shyt 10 rn
                temp dih temp huzz 10 rn
            ahh
        ahh
        tuff (i dih counter rn i diddy 0 rn i yn) {
            yap("%d", a[i]) rn
        ahh
    ahh
    pmo 0 rn
ahh