/*
ICR values for AVR micro controllers to play sound using PWM.
System clock:   2000000 [Hz]
Prescaler:      1
PWM mode:       phase/frequency correct 16 bit

This file was automatically generated using script from 
http://aquaticus.info/pwm-music
*/

#ifndef __PWM_NOTES_H__
#define __PWM_NOTES_H__

/* Pause */

#define P 1
#define PAUSE P
#define p P

/* end of notes table */
#define MUSIC_END 0

/* There are 12 notes in octave + variations (lower case, other names)  */

/* Octave #2 */

#define A2   9091 	/* PWM: 110.00 Hz, note freq: 110.00 Hz, error 0.00% */
#define a2   9091 	/* PWM: 110.00 Hz, note freq: 110.00 Hz, error 0.00% */
#define A2b  9631 	/* PWM: 103.83 Hz, note freq: 103.83 Hz, error 0.01% */
#define a2b  9631 	/* PWM: 103.83 Hz, note freq: 103.83 Hz, error 0.01% */
#define A2x  8581 	/* PWM: 116.54 Hz, note freq: 116.54 Hz, error 0.00% */
#define a2x  8581 	/* PWM: 116.54 Hz, note freq: 116.54 Hz, error 0.00% */
#define Ais2 8581 	/* PWM: 116.54 Hz, note freq: 116.54 Hz, error 0.00% */
#define ais2 8581 	/* PWM: 116.54 Hz, note freq: 116.54 Hz, error 0.00% */
#define B2   8099 	/* PWM: 123.47 Hz, note freq: 123.47 Hz, error 0.00% */
#define b2   8099 	/* PWM: 123.47 Hz, note freq: 123.47 Hz, error 0.00% */
#define B2b  8581 	/* PWM: 116.54 Hz, note freq: 116.54 Hz, error 0.00% */
#define b2b  8581 	/* PWM: 116.54 Hz, note freq: 116.54 Hz, error 0.00% */
#define C2   15289 	/* PWM: 65.41 Hz, note freq: 65.41 Hz, error 0.00% */
#define c2   15289 	/* PWM: 65.41 Hz, note freq: 65.41 Hz, error 0.00% */
#define C2x  14431 	/* PWM: 69.30 Hz, note freq: 69.30 Hz, error 0.00% */
#define c2x  14431 	/* PWM: 69.30 Hz, note freq: 69.30 Hz, error 0.00% */
#define Cis2 14431 	/* PWM: 69.30 Hz, note freq: 69.30 Hz, error 0.00% */
#define cis2 14431 	/* PWM: 69.30 Hz, note freq: 69.30 Hz, error 0.00% */
#define D2   13621 	/* PWM: 73.42 Hz, note freq: 73.42 Hz, error 0.00% */
#define d2   13621 	/* PWM: 73.42 Hz, note freq: 73.42 Hz, error 0.00% */
#define D2b  14431 	/* PWM: 69.30 Hz, note freq: 69.30 Hz, error 0.00% */
#define d2b  14431 	/* PWM: 69.30 Hz, note freq: 69.30 Hz, error 0.00% */
#define D2x  12856 	/* PWM: 77.78 Hz, note freq: 77.78 Hz, error 0.00% */
#define d2x  12856 	/* PWM: 77.78 Hz, note freq: 77.78 Hz, error 0.00% */
#define Dis2 12856 	/* PWM: 77.78 Hz, note freq: 77.78 Hz, error 0.00% */
#define dis2 12856 	/* PWM: 77.78 Hz, note freq: 77.78 Hz, error 0.00% */
#define E2   12135 	/* PWM: 82.41 Hz, note freq: 82.41 Hz, error 0.00% */
#define e2   12135 	/* PWM: 82.41 Hz, note freq: 82.41 Hz, error 0.00% */
#define E2b  12856 	/* PWM: 77.78 Hz, note freq: 77.78 Hz, error 0.00% */
#define e2b  12856 	/* PWM: 77.78 Hz, note freq: 77.78 Hz, error 0.00% */
#define F2   11454 	/* PWM: 87.31 Hz, note freq: 87.31 Hz, error 0.00% */
#define f2   11454 	/* PWM: 87.31 Hz, note freq: 87.31 Hz, error 0.00% */
#define F2x  10811 	/* PWM: 92.50 Hz, note freq: 92.50 Hz, error 0.00% */
#define f2x  10811 	/* PWM: 92.50 Hz, note freq: 92.50 Hz, error 0.00% */
#define Fis2 10811 	/* PWM: 92.50 Hz, note freq: 92.50 Hz, error 0.00% */
#define fis2 10811 	/* PWM: 92.50 Hz, note freq: 92.50 Hz, error 0.00% */
#define G2   10204 	/* PWM: 98.00 Hz, note freq: 98.00 Hz, error 0.00% */
#define g2   10204 	/* PWM: 98.00 Hz, note freq: 98.00 Hz, error 0.00% */
#define G2b  10811 	/* PWM: 92.50 Hz, note freq: 92.50 Hz, error 0.00% */
#define g2b  10811 	/* PWM: 92.50 Hz, note freq: 92.50 Hz, error 0.00% */
#define G2x  9631 	/* PWM: 103.83 Hz, note freq: 103.83 Hz, error 0.01% */
#define g2x  9631 	/* PWM: 103.83 Hz, note freq: 103.83 Hz, error 0.01% */
#define Gis2 9631 	/* PWM: 103.83 Hz, note freq: 103.83 Hz, error 0.01% */
#define gis2 9631 	/* PWM: 103.83 Hz, note freq: 103.83 Hz, error 0.01% */
#define H2   8099 	/* PWM: 123.47 Hz, note freq: 123.47 Hz, error 0.00% */
#define h2   8099 	/* PWM: 123.47 Hz, note freq: 123.47 Hz, error 0.00% */
#define H2b  8581 	/* PWM: 116.54 Hz, note freq: 116.54 Hz, error 0.00% */
#define h2b  8581 	/* PWM: 116.54 Hz, note freq: 116.54 Hz, error 0.00% */
#define bH2  8581 	/* PWM: 116.54 Hz, note freq: 116.54 Hz, error 0.00% */
#define bh2  8581 	/* PWM: 116.54 Hz, note freq: 116.54 Hz, error 0.00% */
#define xA2  8581 	/* PWM: 116.54 Hz, note freq: 116.54 Hz, error 0.00% */
#define xa2  8581 	/* PWM: 116.54 Hz, note freq: 116.54 Hz, error 0.00% */
#define xC2  14431 	/* PWM: 69.30 Hz, note freq: 69.30 Hz, error 0.00% */
#define xc2  14431 	/* PWM: 69.30 Hz, note freq: 69.30 Hz, error 0.00% */
#define xF2  10811 	/* PWM: 92.50 Hz, note freq: 92.50 Hz, error 0.00% */
#define xf2  10811 	/* PWM: 92.50 Hz, note freq: 92.50 Hz, error 0.00% */
#define xG2  10204 	/* PWM: 98.00 Hz, note freq: 98.00 Hz, error 0.00% */
#define xg2  10204 	/* PWM: 98.00 Hz, note freq: 98.00 Hz, error 0.00% */

/* Octave #3 */

#define A3   4545 	/* PWM: 220.02 Hz, note freq: 220.00 Hz, error 0.01% */
#define a3   4545 	/* PWM: 220.02 Hz, note freq: 220.00 Hz, error 0.01% */
#define A3b  4816 	/* PWM: 207.64 Hz, note freq: 207.65 Hz, error 0.01% */
#define a3b  4816 	/* PWM: 207.64 Hz, note freq: 207.65 Hz, error 0.01% */
#define A3x  4290 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define a3x  4290 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define Ais3 4290 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define ais3 4290 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define B3   4050 	/* PWM: 246.91 Hz, note freq: 246.94 Hz, error 0.01% */
#define b3   4050 	/* PWM: 246.91 Hz, note freq: 246.94 Hz, error 0.01% */
#define B3b  4290 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define b3b  4290 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define C3   7645 	/* PWM: 130.80 Hz, note freq: 130.81 Hz, error 0.01% */
#define c3   7645 	/* PWM: 130.80 Hz, note freq: 130.81 Hz, error 0.01% */
#define C3x  7215 	/* PWM: 138.60 Hz, note freq: 138.59 Hz, error 0.01% */
#define c3x  7215 	/* PWM: 138.60 Hz, note freq: 138.59 Hz, error 0.01% */
#define Cis3 7215 	/* PWM: 138.60 Hz, note freq: 138.59 Hz, error 0.01% */
#define cis3 7215 	/* PWM: 138.60 Hz, note freq: 138.59 Hz, error 0.01% */
#define D3   6810 	/* PWM: 146.84 Hz, note freq: 146.83 Hz, error 0.01% */
#define d3   6810 	/* PWM: 146.84 Hz, note freq: 146.83 Hz, error 0.01% */
#define D3b  7215 	/* PWM: 138.60 Hz, note freq: 138.59 Hz, error 0.01% */
#define d3b  7215 	/* PWM: 138.60 Hz, note freq: 138.59 Hz, error 0.01% */
#define D3x  6428 	/* PWM: 155.57 Hz, note freq: 155.56 Hz, error 0.00% */
#define d3x  6428 	/* PWM: 155.57 Hz, note freq: 155.56 Hz, error 0.00% */
#define Dis3 6428 	/* PWM: 155.57 Hz, note freq: 155.56 Hz, error 0.00% */
#define dis3 6428 	/* PWM: 155.57 Hz, note freq: 155.56 Hz, error 0.00% */
#define E3   6067 	/* PWM: 164.83 Hz, note freq: 164.81 Hz, error 0.01% */
#define e3   6067 	/* PWM: 164.83 Hz, note freq: 164.81 Hz, error 0.01% */
#define E3b  6428 	/* PWM: 155.57 Hz, note freq: 155.56 Hz, error 0.00% */
#define e3b  6428 	/* PWM: 155.57 Hz, note freq: 155.56 Hz, error 0.00% */
#define F3   5727 	/* PWM: 174.61 Hz, note freq: 174.61 Hz, error 0.00% */
#define f3   5727 	/* PWM: 174.61 Hz, note freq: 174.61 Hz, error 0.00% */
#define F3x  5405 	/* PWM: 185.01 Hz, note freq: 185.00 Hz, error 0.01% */
#define f3x  5405 	/* PWM: 185.01 Hz, note freq: 185.00 Hz, error 0.01% */
#define Fis3 5405 	/* PWM: 185.01 Hz, note freq: 185.00 Hz, error 0.01% */
#define fis3 5405 	/* PWM: 185.01 Hz, note freq: 185.00 Hz, error 0.01% */
#define G3   5102 	/* PWM: 196.00 Hz, note freq: 196.00 Hz, error 0.00% */
#define g3   5102 	/* PWM: 196.00 Hz, note freq: 196.00 Hz, error 0.00% */
#define G3b  5405 	/* PWM: 185.01 Hz, note freq: 185.00 Hz, error 0.01% */
#define g3b  5405 	/* PWM: 185.01 Hz, note freq: 185.00 Hz, error 0.01% */
#define G3x  4816 	/* PWM: 207.64 Hz, note freq: 207.65 Hz, error 0.01% */
#define g3x  4816 	/* PWM: 207.64 Hz, note freq: 207.65 Hz, error 0.01% */
#define Gis3 4816 	/* PWM: 207.64 Hz, note freq: 207.65 Hz, error 0.01% */
#define gis3 4816 	/* PWM: 207.64 Hz, note freq: 207.65 Hz, error 0.01% */
#define H3   4050 	/* PWM: 246.91 Hz, note freq: 246.94 Hz, error 0.01% */
#define h3   4050 	/* PWM: 246.91 Hz, note freq: 246.94 Hz, error 0.01% */
#define H3b  4290 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define h3b  4290 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define bH3  4290 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define bh3  4290 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define xA3  4290 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define xa3  4290 	/* PWM: 233.10 Hz, note freq: 233.08 Hz, error 0.01% */
#define xC3  7215 	/* PWM: 138.60 Hz, note freq: 138.59 Hz, error 0.01% */
#define xc3  7215 	/* PWM: 138.60 Hz, note freq: 138.59 Hz, error 0.01% */
#define xF3  5405 	/* PWM: 185.01 Hz, note freq: 185.00 Hz, error 0.01% */
#define xf3  5405 	/* PWM: 185.01 Hz, note freq: 185.00 Hz, error 0.01% */
#define xG3  5102 	/* PWM: 196.00 Hz, note freq: 196.00 Hz, error 0.00% */
#define xg3  5102 	/* PWM: 196.00 Hz, note freq: 196.00 Hz, error 0.00% */

/* Octave #4 */

#define A4   2273 	/* PWM: 439.95 Hz, note freq: 440.00 Hz, error 0.01% */
#define a4   2273 	/* PWM: 439.95 Hz, note freq: 440.00 Hz, error 0.01% */
#define A4b  2408 	/* PWM: 415.28 Hz, note freq: 415.30 Hz, error 0.01% */
#define a4b  2408 	/* PWM: 415.28 Hz, note freq: 415.30 Hz, error 0.01% */
#define A4x  2145 	/* PWM: 466.20 Hz, note freq: 466.16 Hz, error 0.01% */
#define a4x  2145 	/* PWM: 466.20 Hz, note freq: 466.16 Hz, error 0.01% */
#define Ais4 2145 	/* PWM: 466.20 Hz, note freq: 466.16 Hz, error 0.01% */
#define ais4 2145 	/* PWM: 466.20 Hz, note freq: 466.16 Hz, error 0.01% */
#define B4   2025 	/* PWM: 493.83 Hz, note freq: 493.88 Hz, error 0.01% */
#define b4   2025 	/* PWM: 493.83 Hz, note freq: 493.88 Hz, error 0.01% */
#define B4b  2145 	/* PWM: 466.20 Hz, note freq: 466.16 Hz, error 0.01% */
#define b4b  2145 	/* PWM: 466.20 Hz, note freq: 466.16 Hz, error 0.01% */
#define C4   3822 	/* PWM: 261.64 Hz, note freq: 261.63 Hz, error 0.01% */
#define c4   3822 	/* PWM: 261.64 Hz, note freq: 261.63 Hz, error 0.01% */
#define C4x  3608 	/* PWM: 277.16 Hz, note freq: 277.18 Hz, error 0.01% */
#define c4x  3608 	/* PWM: 277.16 Hz, note freq: 277.18 Hz, error 0.01% */
#define Cis4 3608 	/* PWM: 277.16 Hz, note freq: 277.18 Hz, error 0.01% */
#define cis4 3608 	/* PWM: 277.16 Hz, note freq: 277.18 Hz, error 0.01% */
#define D4   3405 	/* PWM: 293.69 Hz, note freq: 293.66 Hz, error 0.01% */
#define d4   3405 	/* PWM: 293.69 Hz, note freq: 293.66 Hz, error 0.01% */
#define D4b  3608 	/* PWM: 277.16 Hz, note freq: 277.18 Hz, error 0.01% */
#define d4b  3608 	/* PWM: 277.16 Hz, note freq: 277.18 Hz, error 0.01% */
#define D4x  3214 	/* PWM: 311.14 Hz, note freq: 311.13 Hz, error 0.00% */
#define d4x  3214 	/* PWM: 311.14 Hz, note freq: 311.13 Hz, error 0.00% */
#define Dis4 3214 	/* PWM: 311.14 Hz, note freq: 311.13 Hz, error 0.00% */
#define dis4 3214 	/* PWM: 311.14 Hz, note freq: 311.13 Hz, error 0.00% */
#define E4   3034 	/* PWM: 329.60 Hz, note freq: 329.63 Hz, error 0.01% */
#define e4   3034 	/* PWM: 329.60 Hz, note freq: 329.63 Hz, error 0.01% */
#define E4b  3214 	/* PWM: 311.14 Hz, note freq: 311.13 Hz, error 0.00% */
#define e4b  3214 	/* PWM: 311.14 Hz, note freq: 311.13 Hz, error 0.00% */
#define F4   2863 	/* PWM: 349.28 Hz, note freq: 349.23 Hz, error 0.02% */
#define f4   2863 	/* PWM: 349.28 Hz, note freq: 349.23 Hz, error 0.02% */
#define F4x  2703 	/* PWM: 369.96 Hz, note freq: 369.99 Hz, error 0.01% */
#define f4x  2703 	/* PWM: 369.96 Hz, note freq: 369.99 Hz, error 0.01% */
#define Fis4 2703 	/* PWM: 369.96 Hz, note freq: 369.99 Hz, error 0.01% */
#define fis4 2703 	/* PWM: 369.96 Hz, note freq: 369.99 Hz, error 0.01% */
#define G4   2551 	/* PWM: 392.00 Hz, note freq: 392.00 Hz, error 0.00% */
#define g4   2551 	/* PWM: 392.00 Hz, note freq: 392.00 Hz, error 0.00% */
#define G4b  2703 	/* PWM: 369.96 Hz, note freq: 369.99 Hz, error 0.01% */
#define g4b  2703 	/* PWM: 369.96 Hz, note freq: 369.99 Hz, error 0.01% */
#define G4x  2408 	/* PWM: 415.28 Hz, note freq: 415.30 Hz, error 0.01% */
#define g4x  2408 	/* PWM: 415.28 Hz, note freq: 415.30 Hz, error 0.01% */
#define Gis4 2408 	/* PWM: 415.28 Hz, note freq: 415.30 Hz, error 0.01% */
#define gis4 2408 	/* PWM: 415.28 Hz, note freq: 415.30 Hz, error 0.01% */
#define H4   2025 	/* PWM: 493.83 Hz, note freq: 493.88 Hz, error 0.01% */
#define h4   2025 	/* PWM: 493.83 Hz, note freq: 493.88 Hz, error 0.01% */
#define H4b  2145 	/* PWM: 466.20 Hz, note freq: 466.16 Hz, error 0.01% */
#define h4b  2145 	/* PWM: 466.20 Hz, note freq: 466.16 Hz, error 0.01% */
#define bH4  2145 	/* PWM: 466.20 Hz, note freq: 466.16 Hz, error 0.01% */
#define bh4  2145 	/* PWM: 466.20 Hz, note freq: 466.16 Hz, error 0.01% */
#define xA4  2145 	/* PWM: 466.20 Hz, note freq: 466.16 Hz, error 0.01% */
#define xa4  2145 	/* PWM: 466.20 Hz, note freq: 466.16 Hz, error 0.01% */
#define xC4  3608 	/* PWM: 277.16 Hz, note freq: 277.18 Hz, error 0.01% */
#define xc4  3608 	/* PWM: 277.16 Hz, note freq: 277.18 Hz, error 0.01% */
#define xF4  2703 	/* PWM: 369.96 Hz, note freq: 369.99 Hz, error 0.01% */
#define xf4  2703 	/* PWM: 369.96 Hz, note freq: 369.99 Hz, error 0.01% */
#define xG4  2551 	/* PWM: 392.00 Hz, note freq: 392.00 Hz, error 0.00% */
#define xg4  2551 	/* PWM: 392.00 Hz, note freq: 392.00 Hz, error 0.00% */

/* Octave #5 */

#define A5   1136 	/* PWM: 880.28 Hz, note freq: 880.00 Hz, error 0.03% */
#define a5   1136 	/* PWM: 880.28 Hz, note freq: 880.00 Hz, error 0.03% */
#define A5b  1204 	/* PWM: 830.56 Hz, note freq: 830.61 Hz, error 0.01% */
#define a5b  1204 	/* PWM: 830.56 Hz, note freq: 830.61 Hz, error 0.01% */
#define A5x  1073 	/* PWM: 931.97 Hz, note freq: 932.33 Hz, error 0.04% */
#define a5x  1073 	/* PWM: 931.97 Hz, note freq: 932.33 Hz, error 0.04% */
#define Ais5 1073 	/* PWM: 931.97 Hz, note freq: 932.33 Hz, error 0.04% */
#define ais5 1073 	/* PWM: 931.97 Hz, note freq: 932.33 Hz, error 0.04% */
#define B5   1012 	/* PWM: 988.14 Hz, note freq: 987.77 Hz, error 0.04% */
#define b5   1012 	/* PWM: 988.14 Hz, note freq: 987.77 Hz, error 0.04% */
#define B5b  1073 	/* PWM: 931.97 Hz, note freq: 932.33 Hz, error 0.04% */
#define b5b  1073 	/* PWM: 931.97 Hz, note freq: 932.33 Hz, error 0.04% */
#define C5   1911 	/* PWM: 523.29 Hz, note freq: 523.25 Hz, error 0.01% */
#define c5   1911 	/* PWM: 523.29 Hz, note freq: 523.25 Hz, error 0.01% */
#define C5x  1804 	/* PWM: 554.32 Hz, note freq: 554.37 Hz, error 0.01% */
#define c5x  1804 	/* PWM: 554.32 Hz, note freq: 554.37 Hz, error 0.01% */
#define Cis5 1804 	/* PWM: 554.32 Hz, note freq: 554.37 Hz, error 0.01% */
#define cis5 1804 	/* PWM: 554.32 Hz, note freq: 554.37 Hz, error 0.01% */
#define D5   1703 	/* PWM: 587.20 Hz, note freq: 587.33 Hz, error 0.02% */
#define d5   1703 	/* PWM: 587.20 Hz, note freq: 587.33 Hz, error 0.02% */
#define D5b  1804 	/* PWM: 554.32 Hz, note freq: 554.37 Hz, error 0.01% */
#define d5b  1804 	/* PWM: 554.32 Hz, note freq: 554.37 Hz, error 0.01% */
#define D5x  1607 	/* PWM: 622.28 Hz, note freq: 622.25 Hz, error 0.00% */
#define d5x  1607 	/* PWM: 622.28 Hz, note freq: 622.25 Hz, error 0.00% */
#define Dis5 1607 	/* PWM: 622.28 Hz, note freq: 622.25 Hz, error 0.00% */
#define dis5 1607 	/* PWM: 622.28 Hz, note freq: 622.25 Hz, error 0.00% */
#define E5   1517 	/* PWM: 659.20 Hz, note freq: 659.26 Hz, error 0.01% */
#define e5   1517 	/* PWM: 659.20 Hz, note freq: 659.26 Hz, error 0.01% */
#define E5b  1607 	/* PWM: 622.28 Hz, note freq: 622.25 Hz, error 0.00% */
#define e5b  1607 	/* PWM: 622.28 Hz, note freq: 622.25 Hz, error 0.00% */
#define F5   1432 	/* PWM: 698.32 Hz, note freq: 698.46 Hz, error 0.02% */
#define f5   1432 	/* PWM: 698.32 Hz, note freq: 698.46 Hz, error 0.02% */
#define F5x  1351 	/* PWM: 740.19 Hz, note freq: 739.99 Hz, error 0.03% */
#define f5x  1351 	/* PWM: 740.19 Hz, note freq: 739.99 Hz, error 0.03% */
#define Fis5 1351 	/* PWM: 740.19 Hz, note freq: 739.99 Hz, error 0.03% */
#define fis5 1351 	/* PWM: 740.19 Hz, note freq: 739.99 Hz, error 0.03% */
#define G5   1276 	/* PWM: 783.70 Hz, note freq: 783.99 Hz, error 0.04% */
#define g5   1276 	/* PWM: 783.70 Hz, note freq: 783.99 Hz, error 0.04% */
#define G5b  1351 	/* PWM: 740.19 Hz, note freq: 739.99 Hz, error 0.03% */
#define g5b  1351 	/* PWM: 740.19 Hz, note freq: 739.99 Hz, error 0.03% */
#define G5x  1204 	/* PWM: 830.56 Hz, note freq: 830.61 Hz, error 0.01% */
#define g5x  1204 	/* PWM: 830.56 Hz, note freq: 830.61 Hz, error 0.01% */
#define Gis5 1204 	/* PWM: 830.56 Hz, note freq: 830.61 Hz, error 0.01% */
#define gis5 1204 	/* PWM: 830.56 Hz, note freq: 830.61 Hz, error 0.01% */
#define H5   1012 	/* PWM: 988.14 Hz, note freq: 987.77 Hz, error 0.04% */
#define h5   1012 	/* PWM: 988.14 Hz, note freq: 987.77 Hz, error 0.04% */
#define H5b  1073 	/* PWM: 931.97 Hz, note freq: 932.33 Hz, error 0.04% */
#define h5b  1073 	/* PWM: 931.97 Hz, note freq: 932.33 Hz, error 0.04% */
#define bH5  1073 	/* PWM: 931.97 Hz, note freq: 932.33 Hz, error 0.04% */
#define bh5  1073 	/* PWM: 931.97 Hz, note freq: 932.33 Hz, error 0.04% */
#define xA5  1073 	/* PWM: 931.97 Hz, note freq: 932.33 Hz, error 0.04% */
#define xa5  1073 	/* PWM: 931.97 Hz, note freq: 932.33 Hz, error 0.04% */
#define xC5  1804 	/* PWM: 554.32 Hz, note freq: 554.37 Hz, error 0.01% */
#define xc5  1804 	/* PWM: 554.32 Hz, note freq: 554.37 Hz, error 0.01% */
#define xF5  1351 	/* PWM: 740.19 Hz, note freq: 739.99 Hz, error 0.03% */
#define xf5  1351 	/* PWM: 740.19 Hz, note freq: 739.99 Hz, error 0.03% */
#define xG5  1276 	/* PWM: 783.70 Hz, note freq: 783.99 Hz, error 0.04% */
#define xg5  1276 	/* PWM: 783.70 Hz, note freq: 783.99 Hz, error 0.04% */

/* Octave #6 */

#define A6   568  	/* PWM: 1760.56 Hz, note freq: 1760.00 Hz, error 0.03% */
#define a6   568  	/* PWM: 1760.56 Hz, note freq: 1760.00 Hz, error 0.03% */
#define A6b  602  	/* PWM: 1661.13 Hz, note freq: 1661.22 Hz, error 0.01% */
#define a6b  602  	/* PWM: 1661.13 Hz, note freq: 1661.22 Hz, error 0.01% */
#define A6x  536  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define a6x  536  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define Ais6 536  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define ais6 536  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define B6   506  	/* PWM: 1976.28 Hz, note freq: 1975.53 Hz, error 0.04% */
#define b6   506  	/* PWM: 1976.28 Hz, note freq: 1975.53 Hz, error 0.04% */
#define B6b  536  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define b6b  536  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define C6   956  	/* PWM: 1046.03 Hz, note freq: 1046.50 Hz, error 0.05% */
#define c6   956  	/* PWM: 1046.03 Hz, note freq: 1046.50 Hz, error 0.05% */
#define C6x  902  	/* PWM: 1108.65 Hz, note freq: 1108.73 Hz, error 0.01% */
#define c6x  902  	/* PWM: 1108.65 Hz, note freq: 1108.73 Hz, error 0.01% */
#define Cis6 902  	/* PWM: 1108.65 Hz, note freq: 1108.73 Hz, error 0.01% */
#define cis6 902  	/* PWM: 1108.65 Hz, note freq: 1108.73 Hz, error 0.01% */
#define D6   851  	/* PWM: 1175.09 Hz, note freq: 1174.66 Hz, error 0.04% */
#define d6   851  	/* PWM: 1175.09 Hz, note freq: 1174.66 Hz, error 0.04% */
#define D6b  902  	/* PWM: 1108.65 Hz, note freq: 1108.73 Hz, error 0.01% */
#define d6b  902  	/* PWM: 1108.65 Hz, note freq: 1108.73 Hz, error 0.01% */
#define D6x  804  	/* PWM: 1243.78 Hz, note freq: 1244.51 Hz, error 0.06% */
#define d6x  804  	/* PWM: 1243.78 Hz, note freq: 1244.51 Hz, error 0.06% */
#define Dis6 804  	/* PWM: 1243.78 Hz, note freq: 1244.51 Hz, error 0.06% */
#define dis6 804  	/* PWM: 1243.78 Hz, note freq: 1244.51 Hz, error 0.06% */
#define E6   758  	/* PWM: 1319.26 Hz, note freq: 1318.51 Hz, error 0.06% */
#define e6   758  	/* PWM: 1319.26 Hz, note freq: 1318.51 Hz, error 0.06% */
#define E6b  804  	/* PWM: 1243.78 Hz, note freq: 1244.51 Hz, error 0.06% */
#define e6b  804  	/* PWM: 1243.78 Hz, note freq: 1244.51 Hz, error 0.06% */
#define F6   716  	/* PWM: 1396.65 Hz, note freq: 1396.91 Hz, error 0.02% */
#define f6   716  	/* PWM: 1396.65 Hz, note freq: 1396.91 Hz, error 0.02% */
#define F6x  676  	/* PWM: 1479.29 Hz, note freq: 1479.98 Hz, error 0.05% */
#define f6x  676  	/* PWM: 1479.29 Hz, note freq: 1479.98 Hz, error 0.05% */
#define Fis6 676  	/* PWM: 1479.29 Hz, note freq: 1479.98 Hz, error 0.05% */
#define fis6 676  	/* PWM: 1479.29 Hz, note freq: 1479.98 Hz, error 0.05% */
#define G6   638  	/* PWM: 1567.40 Hz, note freq: 1567.98 Hz, error 0.04% */
#define g6   638  	/* PWM: 1567.40 Hz, note freq: 1567.98 Hz, error 0.04% */
#define G6b  676  	/* PWM: 1479.29 Hz, note freq: 1479.98 Hz, error 0.05% */
#define g6b  676  	/* PWM: 1479.29 Hz, note freq: 1479.98 Hz, error 0.05% */
#define G6x  602  	/* PWM: 1661.13 Hz, note freq: 1661.22 Hz, error 0.01% */
#define g6x  602  	/* PWM: 1661.13 Hz, note freq: 1661.22 Hz, error 0.01% */
#define Gis6 602  	/* PWM: 1661.13 Hz, note freq: 1661.22 Hz, error 0.01% */
#define gis6 602  	/* PWM: 1661.13 Hz, note freq: 1661.22 Hz, error 0.01% */
#define H6   506  	/* PWM: 1976.28 Hz, note freq: 1975.53 Hz, error 0.04% */
#define h6   506  	/* PWM: 1976.28 Hz, note freq: 1975.53 Hz, error 0.04% */
#define H6b  536  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define h6b  536  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define bH6  536  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define bh6  536  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define xA6  536  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define xa6  536  	/* PWM: 1865.67 Hz, note freq: 1864.66 Hz, error 0.05% */
#define xC6  902  	/* PWM: 1108.65 Hz, note freq: 1108.73 Hz, error 0.01% */
#define xc6  902  	/* PWM: 1108.65 Hz, note freq: 1108.73 Hz, error 0.01% */
#define xF6  676  	/* PWM: 1479.29 Hz, note freq: 1479.98 Hz, error 0.05% */
#define xf6  676  	/* PWM: 1479.29 Hz, note freq: 1479.98 Hz, error 0.05% */
#define xG6  638  	/* PWM: 1567.40 Hz, note freq: 1567.98 Hz, error 0.04% */
#define xg6  638  	/* PWM: 1567.40 Hz, note freq: 1567.98 Hz, error 0.04% */

/* Octave #7 */

#define A7   284  	/* PWM: 3521.13 Hz, note freq: 3520.00 Hz, error 0.03% */
#define a7   284  	/* PWM: 3521.13 Hz, note freq: 3520.00 Hz, error 0.03% */
#define A7b  301  	/* PWM: 3322.26 Hz, note freq: 3322.44 Hz, error 0.01% */
#define a7b  301  	/* PWM: 3322.26 Hz, note freq: 3322.44 Hz, error 0.01% */
#define A7x  268  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define a7x  268  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define Ais7 268  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define ais7 268  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define B7   253  	/* PWM: 3952.57 Hz, note freq: 3951.07 Hz, error 0.04% */
#define b7   253  	/* PWM: 3952.57 Hz, note freq: 3951.07 Hz, error 0.04% */
#define B7b  268  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define b7b  268  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define C7   478  	/* PWM: 2092.05 Hz, note freq: 2093.00 Hz, error 0.05% */
#define c7   478  	/* PWM: 2092.05 Hz, note freq: 2093.00 Hz, error 0.05% */
#define C7x  451  	/* PWM: 2217.29 Hz, note freq: 2217.46 Hz, error 0.01% */
#define c7x  451  	/* PWM: 2217.29 Hz, note freq: 2217.46 Hz, error 0.01% */
#define Cis7 451  	/* PWM: 2217.29 Hz, note freq: 2217.46 Hz, error 0.01% */
#define cis7 451  	/* PWM: 2217.29 Hz, note freq: 2217.46 Hz, error 0.01% */
#define D7   426  	/* PWM: 2347.42 Hz, note freq: 2349.32 Hz, error 0.08% */
#define d7   426  	/* PWM: 2347.42 Hz, note freq: 2349.32 Hz, error 0.08% */
#define D7b  451  	/* PWM: 2217.29 Hz, note freq: 2217.46 Hz, error 0.01% */
#define d7b  451  	/* PWM: 2217.29 Hz, note freq: 2217.46 Hz, error 0.01% */
#define D7x  402  	/* PWM: 2487.56 Hz, note freq: 2489.02 Hz, error 0.06% */
#define d7x  402  	/* PWM: 2487.56 Hz, note freq: 2489.02 Hz, error 0.06% */
#define Dis7 402  	/* PWM: 2487.56 Hz, note freq: 2489.02 Hz, error 0.06% */
#define dis7 402  	/* PWM: 2487.56 Hz, note freq: 2489.02 Hz, error 0.06% */
#define E7   379  	/* PWM: 2638.52 Hz, note freq: 2637.02 Hz, error 0.06% */
#define e7   379  	/* PWM: 2638.52 Hz, note freq: 2637.02 Hz, error 0.06% */
#define E7b  402  	/* PWM: 2487.56 Hz, note freq: 2489.02 Hz, error 0.06% */
#define e7b  402  	/* PWM: 2487.56 Hz, note freq: 2489.02 Hz, error 0.06% */
#define F7   358  	/* PWM: 2793.30 Hz, note freq: 2793.83 Hz, error 0.02% */
#define f7   358  	/* PWM: 2793.30 Hz, note freq: 2793.83 Hz, error 0.02% */
#define F7x  338  	/* PWM: 2958.58 Hz, note freq: 2959.96 Hz, error 0.05% */
#define f7x  338  	/* PWM: 2958.58 Hz, note freq: 2959.96 Hz, error 0.05% */
#define Fis7 338  	/* PWM: 2958.58 Hz, note freq: 2959.96 Hz, error 0.05% */
#define fis7 338  	/* PWM: 2958.58 Hz, note freq: 2959.96 Hz, error 0.05% */
#define G7   319  	/* PWM: 3134.80 Hz, note freq: 3135.96 Hz, error 0.04% */
#define g7   319  	/* PWM: 3134.80 Hz, note freq: 3135.96 Hz, error 0.04% */
#define G7b  338  	/* PWM: 2958.58 Hz, note freq: 2959.96 Hz, error 0.05% */
#define g7b  338  	/* PWM: 2958.58 Hz, note freq: 2959.96 Hz, error 0.05% */
#define G7x  301  	/* PWM: 3322.26 Hz, note freq: 3322.44 Hz, error 0.01% */
#define g7x  301  	/* PWM: 3322.26 Hz, note freq: 3322.44 Hz, error 0.01% */
#define Gis7 301  	/* PWM: 3322.26 Hz, note freq: 3322.44 Hz, error 0.01% */
#define gis7 301  	/* PWM: 3322.26 Hz, note freq: 3322.44 Hz, error 0.01% */
#define H7   253  	/* PWM: 3952.57 Hz, note freq: 3951.07 Hz, error 0.04% */
#define h7   253  	/* PWM: 3952.57 Hz, note freq: 3951.07 Hz, error 0.04% */
#define H7b  268  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define h7b  268  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define bH7  268  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define bh7  268  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define xA7  268  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define xa7  268  	/* PWM: 3731.34 Hz, note freq: 3729.31 Hz, error 0.05% */
#define xC7  451  	/* PWM: 2217.29 Hz, note freq: 2217.46 Hz, error 0.01% */
#define xc7  451  	/* PWM: 2217.29 Hz, note freq: 2217.46 Hz, error 0.01% */
#define xF7  338  	/* PWM: 2958.58 Hz, note freq: 2959.96 Hz, error 0.05% */
#define xf7  338  	/* PWM: 2958.58 Hz, note freq: 2959.96 Hz, error 0.05% */
#define xG7  319  	/* PWM: 3134.80 Hz, note freq: 3135.96 Hz, error 0.04% */
#define xg7  319  	/* PWM: 3134.80 Hz, note freq: 3135.96 Hz, error 0.04% */

#endif /* __PWM_NOTES_H__ */
