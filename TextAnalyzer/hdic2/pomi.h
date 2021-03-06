/*
	List of pre-final Eomi's.

		pomidic[0][i][j] : KSSM Hangul code
			---> KSSM code doesn't support Josa/Eomi variants
		pomidic[1][i][j] : KS C 5601-1987 Hangul code

		N_POMI = 68, POMISIZE = 11 --> defined at 'header/hdics.h'
*/

HAM_UCHAR pomidic[2][N_POMI][POMISIZE] = {
  {
	/*	KSSM code
		0xafa1 : 시
		0xb4f6 : 었
		0x8956 : 겠

		0xb041 : ㅆ --> 갔
		0x8476 : ㅏㅆ--> 왔
		0x84f6 : ㅓㅆ--> 줬
		0x8576 : ㅕㅆ--> 겼
		0x8496 : ㅐㅆ--> 했
		0x85f6 : ㅙㅆ--> 됐
	*/
	{ 0 },
	{ 0x89, 0x56, 0 },	/* 겠 */
	{ 0xb4, 0xf6, 0 },	/* 었 */
	{ 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 었겠 */
	{ 0xb4, 0xf6, 0 },	/* 었 */
	{ 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 었겠 */
	{ 0xb4, 0xf6, 0xb4, 0xf6, 0 },	/* 었었 */
	{ 0xb4, 0xf6, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 었었겠 */
	{ 0xaf, 0xa1, 0 },	/* 시 */
	{ 0xaf, 0xa1, 0x89, 0x56, 0 },	/* 시겠 */
	{ 0xaf, 0xa1, 0xb4, 0xf6, 0 },	/* 시었 */
	{ 0xaf, 0xa1, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 시었겠 */
	{ 0xaf, 0xa1, 0xb4, 0xf6, 0 },	/* 시었 */
	{ 0xaf, 0xa1, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 시었겠 */
	{ 0xaf, 0xa1, 0xb4, 0xf6, 0xb4, 0xf6, 0 },	/* 시었었 */
	{ 0xaf, 0xa1, 0xb4, 0xf6, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 시었었겠 */
/* followings are added for Josa/Eomi variants only */
	{ 0xb4, 0x76, 0 },	/* 16: 았 */
	{ 0xb4, 0x76, 0x89, 0x56, 0 },	/* 17: 았겠 */
	{ 0xb4, 0x76, 0xb4, 0xf6, 0 },	/* 18: 았었 */
	{ 0xb4, 0x76, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 19: 았었겠 */

	{ 0xb5, 0x76, 0 },	/* 20: 였 */
	{ 0xb5, 0x76, 0x89, 0x56, 0 },	/* 21: 였겠 */
	{ 0xb5, 0x76, 0xb4, 0xf6, 0 },	/* 22: 였었 */
	{ 0xb5, 0x76, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 23: 였었겠 */

	{ 0xb7, 0x61, 0xaf, 0xa1, 0 },	/* 24: 으시 */
	{ 0xb7, 0x61, 0xaf, 0xa1, 0x89, 0x56, 0 },	/* 25: 으시겠 */
	{ 0xb7, 0x61, 0xaf, 0xa1, 0xb4, 0xf6, 0 },	/* 26: 으시었 */
	{ 0xb7, 0x61, 0xaf, 0xa1, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 27: 으시었겠 */
	{ 0xb7, 0x61, 0xaf, 0xa1, 0xb4, 0xf6, 0xb4, 0xf6, 0 },	/* 28: 으시었었 */
	{ 0xb7, 0x61, 0xaf, 0xa1, 0xb4, 0xf6, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 29: 으시었었겠 */

	{ 0xad, 0x61, 0 },	/* 30: 셔 */
	{ 0xad, 0x76, 0 },	/* 31: 셨 */
	{ 0xad, 0x76, 0x89, 0x56, 0 },	/* 32: 셨겠 */
	{ 0xad, 0x76, 0xb4, 0xf6, 0 },	/* 33: 셨었 */
	{ 0xad, 0x76, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 34: 셨었겠 */

	{ 0xb0, 0x41, 0 },	/* 35: ㅆ */
	{ 0xb0, 0x41, 0x89, 0x56, 0 },	/* 36: ㅆ겠 */
	{ 0xb0, 0x41, 0xb4, 0xf6, 0 },	/* 37: ㅆ었 */
	{ 0xb0, 0x41, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 38: ㅆ었겠 */

	{ 0x84, 0x76, 0 },	/* 39: ㅏㅆ */
	{ 0x84, 0x76, 0x89, 0x56, 0 },	/* 40: ㅏㅆ겠 */
	{ 0x84, 0x76, 0xb4, 0xf6, 0 },	/* 41: ㅏㅆ었 */
	{ 0x84, 0x76, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 42: ㅏㅆ었겠 */

	{ 0x84, 0xf6, 0 },	/* 43: ㅓㅆ */
	{ 0x84, 0xf6, 0x89, 0x56, 0 },	/* 44: ㅓㅆ겠 */
	{ 0x84, 0xf6, 0xb4, 0xf6, 0 },	/* 45: ㅓㅆ었 */
	{ 0x84, 0xf6, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 46: ㅓㅆ었겠 */

	{ 0x85, 0x76, 0 },	/* 47: ㅕㅆ */
	{ 0x85, 0x76, 0x89, 0x56, 0 },	/* 48: ㅕㅆ겠 */
	{ 0x85, 0x76, 0xb4, 0xf6, 0 },	/* 49: ㅕㅆ었 */
	{ 0x85, 0x76, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 50: ㅕㅆ었겠 */

	{ 0x84, 0x96, 0 },	/* 51: ㅐㅆ */
	{ 0x84, 0x96, 0x89, 0x56, 0 },	/* 52: ㅐㅆ겠 */
	{ 0x84, 0x96, 0xb4, 0xf6, 0 },	/* 53: ㅐㅆ었 */
	{ 0x84, 0x96, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 54: ㅐㅆ었겠 */

	{ 0x85, 0xf6, 0 },	/* 55: ㅙㅆ */
	{ 0x85, 0xf6, 0x89, 0x56, 0 },	/* 56: ㅙㅆ겠 */
	{ 0x85, 0xf6, 0xb4, 0xf6, 0 },	/* 57: ㅙㅆ었 */
	{ 0x85, 0xf6, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 58: ㅙㅆ었겠 */

	{ 0xb7, 0x61, 0xad, 0x61, 0 },	/* 59: 으셔 */
	{ 0xb7, 0x61, 0xad, 0x76, 0 },	/* 60: 으셨 */
	{ 0xb7, 0x61, 0xad, 0x76, 0x89, 0x56, 0 },	/* 61: 으셨겠 */
	{ 0xb7, 0x61, 0xad, 0x76, 0xb4, 0xf6, 0 },	/* 62: 으셨었 */
	{ 0xb7, 0x61, 0xad, 0x76, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 63: 으셨었겠 */

	{ 0x9c, 0xf6, 0 },	/* 64: 렀 */
	{ 0x9c, 0xf6, 0x89, 0x56, 0 },	/* 65: 렀겠 */
	{ 0x9c, 0xf6, 0xb4, 0xf6, 0 },	/* 66: 렀었 */
	{ 0x9c, 0xf6, 0xb4, 0xf6, 0x89, 0x56, 0 },	/* 67: 렀었겠 */
  },
  {
	/*	KSC-5601-1987 code
		0xbdc3 : 시
		0xbefa : 었
		0xb0da : 겠

		0xa4b6 : ㅆ --> 갔
		'0았' : ㅏㅆ--> 왔
		'0었' : ㅓㅆ--> 줬
		'0였' : ㅕㅆ--> 겼
		'0앴' : ㅐㅆ--> 했
		'0됐' : ㅙㅆ--> 됐
	*/
	{ 0 },
	{ 0xb0, 0xda, 0 },	/* 1: 겠 */
	{ 0xbe, 0xfa, 0 },	/* 2: 었 */
	{ 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 3: 었겠 */
	{ 0xbe, 0xfa, 0 },	/* 4: 었 */
	{ 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 5: 었겠 */
	{ 0xbe, 0xfa, 0xbe, 0xfa, 0 },	/* 6: 었었 */
	{ 0xbe, 0xfa, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 7: 었었겠 */
	{ 0xbd, 0xc3, 0 },	/* 8: 시 */
	{ 0xbd, 0xc3, 0xb0, 0xda, 0 },	/* 9: 시겠 */
	{ 0xbd, 0xc3, 0xbe, 0xfa, 0 },	/* 10: 시었 */
	{ 0xbd, 0xc3, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 11: 시었겠 */
	{ 0xbd, 0xc3, 0xbe, 0xfa, 0 },	/* 12: 시었 */
	{ 0xbd, 0xc3, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 13: 시었겠 */
	{ 0xbd, 0xc3, 0xbe, 0xfa, 0xbe, 0xfa, 0 },	/* 14: 시었었 */
	{ 0xbd, 0xc3, 0xbe, 0xfa, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 15: 시었었겠 */
/* followings are added for Josa/Eomi variants only */
	{ 0xbe, 0xd2, 0 },	/* 16: 았 */
	{ 0xbe, 0xd2, 0xb0, 0xda, 0 },	/* 17: 았겠 */
	{ 0xbe, 0xd2, 0xbe, 0xfa, 0 },	/* 18: 았었 */
	{ 0xbe, 0xd2, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 19: 았었겠 */

	{ 0xbf, 0xb4, 0 },	/* 20: 였 */
	{ 0xbf, 0xb4, 0xb0, 0xda, 0 },	/* 21: 였겠 */
	{ 0xbf, 0xb4, 0xbe, 0xfa, 0 },	/* 22: 였었 */
	{ 0xbf, 0xb4, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 23: 였었겠 */

	{ 0xc0, 0xb8, 0xbd, 0xc3, 0 },	/* 24: 으시 */
	{ 0xc0, 0xb8, 0xbd, 0xc3, 0xb0, 0xda, 0 },	/* 25: 으시겠 */
	{ 0xc0, 0xb8, 0xbd, 0xc3, 0xbe, 0xfa, 0 },	/* 26: 으시었 */
	{ 0xc0, 0xb8, 0xbd, 0xc3, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 27: 으시었겠 */
	{ 0xc0, 0xb8, 0xbd, 0xc3, 0xbe, 0xfa, 0xbe, 0xfa, 0 },	/* 28: 으시었었 */
	{ 0xc0, 0xb8, 0xbd, 0xc3, 0xbe, 0xfa, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 29: 으시었었겠 */

	{ 0xbc, 0xc5, 0 },	/* 30: 셔 */
	{ 0xbc, 0xcc, 0 },	/* 31: 셨 */
	{ 0xbc, 0xcc, 0xb0, 0xda, 0 },	/* 32: 셨겠 */
	{ 0xbc, 0xcc, 0xbe, 0xfa, 0 },	/* 33: 셨었 */
	{ 0xbc, 0xcc, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 34: 셨었겠 */

	{ 0xa4, 0xb6, 0 },	/* 35: ㅆ */
	{ 0xa4, 0xb6, 0xb0, 0xda, 0 },	/* 36: ㅆ겠 */
	{ 0xa4, 0xb6, 0xbe, 0xfa, 0 },	/* 37: ㅆ었 */
	{ 0xa4, 0xb6, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 38: ㅆ었겠 */

	{ '0', 0xbe, 0xd2, 0 },	/* 39: ㅏㅆ */
	{ '0', 0xbe, 0xd2, 0xb0, 0xda, 0 },	/* 40: ㅏㅆ겠 */
	{ '0', 0xbe, 0xd2, 0xbe, 0xfa, 0 },	/* 41: ㅏㅆ었 */
	{ '0', 0xbe, 0xd2, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 42: ㅏㅆ었겠 */

	{ '0', 0xbe, 0xfa, 0 },	/* 43: ㅓㅆ */
	{ '0', 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 44: ㅓㅆ겠 */
	{ '0', 0xbe, 0xfa, 0xbe, 0xfa, 0 },	/* 45: ㅓㅆ었 */
	{ '0', 0xbe, 0xfa, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 46: ㅓㅆ었겠 */

	{ '0', 0xbf, 0xb4, 0 },	/* 47: ㅕㅆ */
	{ '0', 0xbf, 0xb4, 0xb0, 0xda, 0 },	/* 48: ㅕㅆ겠 */
	{ '0', 0xbf, 0xb4, 0xbe, 0xfa, 0 },	/* 49: ㅕㅆ었 */
	{ '0', 0xbf, 0xb4, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 50: ㅕㅆ었겠 */

	{ '0', 0xbe, 0xdd, 0 },	/* 51: ㅐㅆ */
	{ '0', 0xbe, 0xdd, 0xb0, 0xda, 0 },	/* 52: ㅐㅆ겠 */
	{ '0', 0xbe, 0xdd, 0xbe, 0xfa, 0 },	/* 53: ㅐㅆ었 */
	{ '0', 0xbe, 0xdd, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 54: ㅐㅆ었겠 */

	{ '5', 0xbe, 0xdd, 0 },	/* 55: ㅙㅆ */
	{ '5', 0xbe, 0xdd, 0xb0, 0xda, 0 },	/* 56: ㅙㅆ겠 */
	{ '5', 0xbe, 0xdd, 0xbe, 0xfa, 0 },	/* 57: ㅙㅆ었 */
	{ '5', 0xbe, 0xdd, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 58: ㅙㅆ었겠 */

	{ 0xc0, 0xb8, 0xbc, 0xc5, 0 },	/* 59: 으셔 */
	{ 0xc0, 0xb8, 0xbc, 0xcc, 0 },	/* 60: 으셨 */
	{ 0xc0, 0xb8, 0xbc, 0xcc, 0xb0, 0xda, 0 },	/* 61: 으셨겠 */
	{ 0xc0, 0xb8, 0xbc, 0xcc, 0xbe, 0xfa, 0 },	/* 62: 으셨었 */
	{ 0xc0, 0xb8, 0xbc, 0xcc, 0xbe, 0xfa, 0xb0, 0xda, 0 },	/* 63: 으셨었겠 */

	{ 0xb7, 0xb6, 0 },	/* 64: 렀 */
	{ 0xb7, 0xb6, 0xb0, 0xda, 0 },	/* 65: 렀겠 */
	{ 0xb7, 0xb6, 0xbe, 0xfa, 0 },	/* 66: 렀었 */
	{ 0xb7, 0xb6, 0xbe, 0xfa, 0xb0, 0xda, 0 }	/* 67: 렀었겠 */
  }
};

