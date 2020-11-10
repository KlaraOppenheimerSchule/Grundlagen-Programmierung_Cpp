/*
	File Name: ihk.hpp
	Last edited: 10.11.2020
	Klara Oppenheimer Schule

	Author: Mustafa Kilic
*/

#pragma once

#define IHK_P0	6.0
#define IHK_P1	6.0
#define IHK_P2	6.0
#define IHK_P3	6.0
#define IHK_P4	6.0
#define IHK_P5	6.0
#define IHK_P6	5.9
#define IHK_P7	5.9
#define IHK_P8	5.9
#define IHK_P9	5.9
#define IHK_P10	5.9
#define IHK_P11	5.9
#define IHK_P12	5.8
#define IHK_P13	5.8
#define IHK_P14	5.8
#define IHK_P15	5.8
#define IHK_P16	5.8
#define IHK_P17	5.7
#define IHK_P18	5.7
#define IHK_P19	5.7
#define IHK_P20	5.7
#define IHK_P21	5.7
#define IHK_P22	5.7
#define IHK_P23	5.6
#define IHK_P24	5.6
#define IHK_P25	5.6
#define IHK_P26	5.6
#define IHK_P27	5.6
#define IHK_P28	5.6
#define IHK_P29	5.5
#define IHK_P30	5.4
#define IHK_P31	5.4
#define IHK_P32	5.3
#define IHK_P33	5.3
#define IHK_P34	5.2
#define IHK_P35	5.2
#define IHK_P36	5.1
#define IHK_P37	5.1
#define IHK_P38	5.0
#define IHK_P39	5.0
#define IHK_P40	5.0
#define IHK_P41	4.9
#define IHK_P42	4.9
#define IHK_P43	4.8
#define IHK_P44	4.8
#define IHK_P45	4.7
#define IHK_P46	4.7
#define IHK_P47	4.6
#define IHK_P48	4.6
#define IHK_P49	4.5
#define IHK_P50	4.4
#define IHK_P51	4.4
#define IHK_P52	4.3
#define IHK_P53	4.3
#define IHK_P54	4.2
#define IHK_P55	4.1
#define IHK_P56	4.1
#define IHK_P57	4.0
#define IHK_P58	4.0
#define IHK_P59	3.9
#define IHK_P60	3.9
#define IHK_P61	3.8
#define IHK_P62	3.7
#define IHK_P63	3.7
#define IHK_P64	3.6
#define IHK_P65	3.6
#define IHK_P66	3.5
#define IHK_P67	3.4
#define IHK_P68	3.3
#define IHK_P69	3.3
#define IHK_P70	3.2
#define IHK_P71	3.1
#define IHK_P72	3.1
#define IHK_P73	3.0
#define IHK_P74	2.9
#define IHK_P75	2.9
#define IHK_P76	2.8
#define IHK_P77	2.7
#define IHK_P78	2.7
#define IHK_P79	2.6
#define IHK_P80	2.5
#define IHK_P81	2.4
#define IHK_P82	2.3
#define IHK_P83	2.2
#define IHK_P84	2.1
#define IHK_P85	2.0
#define IHK_P86	2.0
#define IHK_P87	1.9
#define IHK_P88	1.8
#define IHK_P89	1.7
#define IHK_P90	1.5
#define IHK_P91	1.5
#define IHK_P92	1.4
#define IHK_P93	1.4
#define IHK_P94	1.3
#define IHK_P95	1.3
#define IHK_P96	1.2
#define IHK_P97	1.2
#define IHK_P98	1.1
#define IHK_P99	1.1
#define IHK_P100 1.0

namespace IHK
{
	float get_mark_with_points(uint32_t t_ihk_points)
	{
		switch (t_ihk_points)
		{
		case 0:	return IHK_P0;
		case 1:	return IHK_P1;
		case 2:	return IHK_P2;
		case 3:	return IHK_P3;
		case 4:	return IHK_P4;
		case 5:	return IHK_P5;
		case 6:	return IHK_P6;
		case 7:	return IHK_P7;
		case 8:	return IHK_P8;
		case 9:	return IHK_P9;
		case 10: return IHK_P10;
		case 11: return IHK_P11;
		case 12: return IHK_P12;
		case 13: return IHK_P13;
		case 14: return IHK_P14;
		case 15: return IHK_P15;
		case 16: return IHK_P16;
		case 17: return IHK_P17;
		case 18: return IHK_P18;
		case 19: return IHK_P19;
		case 20: return IHK_P20;
		case 21: return IHK_P21;
		case 22: return IHK_P22;
		case 23: return IHK_P23;
		case 24: return IHK_P24;
		case 25: return IHK_P25;
		case 26: return IHK_P26;
		case 27: return IHK_P27;
		case 28: return IHK_P28;
		case 29: return IHK_P29;
		case 30: return IHK_P30;
		case 31: return IHK_P31;
		case 32: return IHK_P32;
		case 33: return IHK_P33;
		case 34: return IHK_P34;
		case 35: return IHK_P35;
		case 36: return IHK_P36;
		case 37: return IHK_P37;
		case 38: return IHK_P38;
		case 39: return IHK_P39;
		case 40: return IHK_P40;
		case 41: return IHK_P41;
		case 42: return IHK_P42;
		case 43: return IHK_P43;
		case 44: return IHK_P44;
		case 45: return IHK_P45;
		case 46: return IHK_P46;
		case 47: return IHK_P47;
		case 48: return IHK_P48;
		case 49: return IHK_P49;
		case 50: return IHK_P50;
		case 51: return IHK_P51;
		case 52: return IHK_P52;
		case 53: return IHK_P53;
		case 54: return IHK_P54;
		case 55: return IHK_P55;
		case 56: return IHK_P56;
		case 57: return IHK_P57;
		case 58: return IHK_P58;
		case 59: return IHK_P59;
		case 60: return IHK_P60;
		case 61: return IHK_P61;
		case 62: return IHK_P62;
		case 63: return IHK_P63;
		case 64: return IHK_P64;
		case 65: return IHK_P65;
		case 66: return IHK_P66;
		case 67: return IHK_P67;
		case 68: return IHK_P68;
		case 69: return IHK_P69;
		case 70: return IHK_P70;
		case 71: return IHK_P71;
		case 72: return IHK_P72;
		case 73: return IHK_P73;
		case 74: return IHK_P74;
		case 75: return IHK_P75;
		case 76: return IHK_P76;
		case 77: return IHK_P77;
		case 78: return IHK_P78;
		case 79: return IHK_P79;
		case 80: return IHK_P80;
		case 81: return IHK_P81;
		case 82: return IHK_P82;
		case 83: return IHK_P83;
		case 84: return IHK_P84;
		case 85: return IHK_P85;
		case 86: return IHK_P86;
		case 87: return IHK_P87;
		case 88: return IHK_P88;
		case 89: return IHK_P89;
		case 90: return IHK_P90;
		case 91: return IHK_P91;
		case 92: return IHK_P92;
		case 93: return IHK_P93;
		case 94: return IHK_P94;
		case 95: return IHK_P95;
		case 96: return IHK_P96;
		case 97: return IHK_P97;
		case 98: return IHK_P98;
		case 99: return IHK_P99;
		case 100: return IHK_P100;

		default:
			return 1000;
		}
	}
}