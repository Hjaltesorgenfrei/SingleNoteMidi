#ifndef __PWM_AUDIO_H__
#define __PWM_AUDIO_H__
#include "notes2.h"

//write zero if its not defined in data.
const int midiNotes[] = {
	0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , //Octave 0
	0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , //Octave 1
	C2 , C2x, D2 , D2x, E2 , F2 , F2x, G2 , G2x, A2 , A2x, B2 , //Octave 2
	C3 , C3x, D3 , D3x, E3 , F3 , F3x, G3 , G3x, A3 , A3x, B3 , //Octave 3
	C4 , C4x, D4 , D4x, E4 , F4 , F4x, G4 , G4x, A4 , A4x, B4 , //Octave 4
	C5 , C5x, D5 , D5x, E5 , F5 , F5x, G5 , G5x, A5 , A5x, B5 , //Octave 5
	C6 , C6x, D6 , D6x, E6 , F6 , F6x, G6 , G6x, A6 , A6x, B6 , //Octave 6
	C7 , C7x, D7 , D7x, E7 , F7 , F7x, G7 , G7x, A7 , A7x, B7 , //Octave 7
	0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , //Octave 8
	0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , //Octave 9
	0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0  , 0    //Octave 10
};


#endif /* __PWM_AUDIO_H__ */