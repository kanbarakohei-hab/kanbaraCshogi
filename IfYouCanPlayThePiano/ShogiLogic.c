#include <stdio.h>
#include "ShogiPiece.h"

/*�����̕ϊ��֐�*/
int numberConversion(int a)
{
	if (a == _ONE) { return 1; }
	if (a == _TWO) { return 2; }
	if (a == _THREE) { return 3; }
	if (a == _FOUR) { return 4; }
	if (a == _FIVE) { return 5; }
	if (a == _SIX) { return 6; }
	if (a == _SEVEN) { return 7; }
	if (a == _EIGHT) { return 8; }
	if (a == _NINE) { return 9; }
	if (a == _ONE_ZERO) { return 10; }
	if (a == _ONE_ONE) { return 11; }
	if (a == _ONE_TWO) { return 12; }
	if (a == _ONE_THREE) { return 13; }
	if (a == _ONE_FOUR) { return 14; }
	if (a == _ONE_FIVE) { return 15; }
	if (a == _ONE_SIX) { return 16; }
	if (a == _ONE_SEVEN) { return 17; }
	if (a == _ONE_EIGHT) { return 18; }
	if (a == _ONE_NINE) { return 19; }
	if (a == _TWO_ZERO) { return 20; }
	if (a == _TWO_ONE) { return 21; }
	if (a == _TWO_TWO) { return 22; }
	if (a == _TWO_THREE) { return 23; }
	if (a == _TWO_FOUR) { return 24; }
	if (a == _TWO_FIVE) { return 25; }
	if (a == _TWO_SIX) { return 26; }
	if (a == _TWO_SEVEN) { return 27; }
	if (a == _TWO_EIGHT) { return 28; }
	if (a == _TWO_NINE) { return 29; }
	if (a == _THREE_ZERO) { return 30; }
	if (a == _THREE_ONE) { return 31; }
	if (a == _THREE_TWO) { return 32; }
	if (a == _THREE_THREE) { return 33; }
	if (a == _THREE_FOUR) { return 34; }
	if (a == _THREE_FIVE) { return 35; }
	if (a == _THREE_SIX) { return 36; }
	if (a == _THREE_SEVEN) { return 37; }
	if (a == _THREE_EIGHT) { return 38; }
	if (a == _THREE_NINE) { return 39; }
	if (a == _FOUR_ZERO) { return 40; }
	if (a == _FOUR_ONE) { return 41; }
	if (a == _FOUR_TWO) { return 42; }
	if (a == _FOUR_THREE) { return 43; }
	if (a == _FOUR_FOUR) { return 44; }
	if (a == _FOUR_FIVE) { return 45; }
	if (a == _FOUR_SIX) { return 46; }
	if (a == _FOUR_SEVEN) { return 47; }
	if (a == _FOUR_EIGHT) { return 48; }
	if (a == _FOUR_NINE) { return 49; }
	if (a == _FIVE_ZERO) { return 50; }
	if (a == _FIVE_ONE) { return 51; }
	if (a == _FIVE_TWO) { return 52; }
	if (a == _FIVE_THREE) { return 53; }
	if (a == _FIVE_FOUR) { return 54; }
	if (a == _FIVE_FIVE) { return 55; }
	if (a == _FIVE_SIX) { return 56; }
	if (a == _FIVE_SEVEN) { return 57; }
	if (a == _FIVE_EIGHT) { return 58; }
	if (a == _FIVE_NINE) { return 59; }
	if (a == _SIX_ZERO) { return 60; }
	if (a == _SIX_ONE) { return 61; }
	if (a == _SIX_TWO) { return 62; }
	if (a == _SIX_THREE) { return 63; }
	if (a == _SIX_FOUR) { return 64; }
	if (a == _SIX_FIVE) { return 65; }
	if (a == _SIX_SIX) { return 66; }
	if (a == _SIX_SEVEN) { return 67; }
	if (a == _SIX_EIGHT) { return 68; }
	if (a == _SIX_NINE) { return 69; }
	if (a == _SEVEN_ZERO) { return 70; }
	if (a == _SEVEN_ONE) { return 71; }
	if (a == _SEVEN_TWO) { return 72; }
	if (a == _SEVEN_THREE) { return 73; }
	if (a == _SEVEN_FOUR) { return 74; }
	if (a == _SEVEN_FIVE) { return 75; }
	if (a == _SEVEN_SIX) { return 76; }
	if (a == _SEVEN_SEVEN) { return 77; }
	if (a == _SEVEN_EIGHT) { return 78; }
	if (a == _SEVEN_NINE) { return 79; }
	if (a == _EIGHT_ZERO) { return 80; }
	if (a == _EIGHT_ONE) { return 81; }
	else { return 99; }
}