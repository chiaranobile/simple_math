/** \file simple_math.h
	\brief an example of math library
	\author
	
*/

//direttive di preprocessore
//se questo simbolo non è mai stato definito allora definiscilo, altrimenti vai avanti senza definirlo
#ifndef _SIMPLEMATH_	//scelgo nome opportuno: se più file.c presentano questa parola allora viene incluso quel tot di volte
#define _SIMPLEMATH_	//allora a questo punto si ha un aridefinizione, si ha due volte la stessa funzione. il tutto allora si risolve 
						//ponendo #ifndef
float mean (int a, int b);

#endif