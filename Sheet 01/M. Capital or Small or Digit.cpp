// M. Capital or Small or Digit
#include <iostream>
#include <string>
#include <iomanip>         //  setprecision()
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{

    char x ;             // can be a capital or small letter or digit.
    cin >> x ;

    if(x >= 97 && x <= 122)                  // ASCII Code
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else if (x >= 65 && x <= 90)           // ASCII Code
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else     // number ===> 0 1 2 3 4 5 6 7 8 9 .....etc
    {
        cout << "IS DIGIT" << endl;
    }
    


    return 0 ;
}

/*

  *************************   NOTE THAT *************************


ASCII - Binary Character Table
Letter	ASCII Code	Binary	Letter	ASCII Code	Binary
a	097	01100001	A	065	01000001
b	098	01100010	B	066	01000010
c	099	01100011	C	067	01000011
d	100	01100100	D	068	01000100
e	101	01100101	E	069	01000101
f	102	01100110	F	070	01000110
g	103	01100111	G	071	01000111
h	104	01101000	H	072	01001000
i	105	01101001	I	073	01001001
j	106	01101010	J	074	01001010
k	107	01101011	K	075	01001011
l	108	01101100	L	076	01001100
m	109	01101101	M	077	01001101
n	110	01101110	N	078	01001110
o	111	01101111	O	079	01001111
p	112	01110000	P	080	01010000
q	113	01110001	Q	081	01010001
r	114	01110010	R	082	01010010
s	115	01110011	S	083	01010011
t	116	01110100	T	084	01010100
u	117	01110101	U	085	01010101
v	118	01110110	V	086	01010110
w	119	01110111	W	087	01010111
x	120	01111000	X	088	01011000
y	121	01111001	Y	089	01011001
z	122	01111010	Z	090	01011010


*/



