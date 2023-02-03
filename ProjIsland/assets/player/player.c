
//{{BLOCK(player)

//======================================================================
//
//	player, 16x16@4, 
//	+ palette 4 entries, not compressed
//	+ 4 tiles not compressed
//	Total size: 8 + 128 = 136
//
//	Time-stamp: 2023-01-28, 13:14:27
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short playerTiles[64] __attribute__((aligned(4)))=
{
	0x0000,0x1111,0x1000,0x2221,0x1000,0x3322,0x2100,0x2333,
	0x2100,0x2222,0x2100,0x1111,0x1000,0x3131,0x1000,0x3132,
	0x1111,0x0000,0x1222,0x0001,0x2323,0x0001,0x3312,0x0012,
	0x3211,0x0012,0x2133,0x0012,0x1313,0x0001,0x2313,0x0001,
	0x1000,0x3321,0x3100,0x1111,0x3100,0x2112,0x2100,0x1312,
	0x1000,0x3321,0x0000,0x2211,0x0000,0x1111,0x1000,0x1111,
	0x1233,0x0001,0x1111,0x0013,0x2112,0x0013,0x2131,0x0012,
	0x1233,0x0001,0x1122,0x0000,0x1111,0x0000,0x1111,0x0001,
};

const unsigned short playerPal[4] __attribute__((aligned(4)))=
{
	0x7C1F,0x0000,0x001F,0x63FF,
};

//}}BLOCK(player)
