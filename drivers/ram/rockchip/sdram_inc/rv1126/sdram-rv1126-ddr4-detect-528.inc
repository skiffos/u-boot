{
	{
		{
			.rank = 0x1,
			.col = 0xA,
			.bk = 0x2,
			.bw = 0x1,
			.dbw = 0x0,
			.row_3_4 = 0x0,
			.cs0_row = 0x11,
			.cs1_row = 0x0,
			.cs0_high16bit_row = 0x11,
			.cs1_high16bit_row = 0x0,
			.ddrconfig = 0
		},
		{
			{0x4d120a0d},
			{0x09020501},
			{0x00000002},
			{0x00001111},
			{0x0000000c},
			{0x00000232},
			0x000000ff
		}
	},
	{
		.ddr_freq = 528,	/* clock rate(MHz) */
		.dramtype = DDR4,
		.num_channels = 1,
		.stride = 0,
		.odt = 0
	},
	{
		{
			{0x00000000, 0x43049010},	/* MSTR */
			{0x00000064, 0x0040005d},	/* RFSHTMG */
			{0x000000d0, 0x00020082},	/* INIT0 */
			{0x000000d4, 0x00350000},	/* INIT1 */
			{0x000000d8, 0x00000100},	/* INIT2 */
			{0x000000dc, 0x00040000},	/* INIT3 */
			{0x000000e0, 0x00000000},	/* INIT4 */
			{0x000000e4, 0x00110000},	/* INIT5 */
			{0x000000e8, 0x00000420},	/* INIT6 */
			{0x000000ec, 0x00000400},	/* INIT7 */
			{0x000000f4, 0x000f011f},	/* RANKCTL */
			{0x00000100, 0x0a0a1209},	/* DRAMTMG0 */
			{0x00000104, 0x0002020e},	/* DRAMTMG1 */
			{0x00000108, 0x0505040a},	/* DRAMTMG2 */
			{0x0000010c, 0x0040400c},	/* DRAMTMG3 */
			{0x00000110, 0x05030206},	/* DRAMTMG4 */
			{0x00000114, 0x03030202},	/* DRAMTMG5 */
			{0x00000120, 0x04040b04},	/* DRAMTMG8 */
			{0x00000124, 0x00020208},	/* DRAMTMG9 */
			{0x00000180, 0x01000040},	/* ZQCTL0 */
			{0x00000184, 0x00000000},	/* ZQCTL1 */
			{0x00000190, 0x07030003},	/* DFITMG0 */
			{0x00000198, 0x07000101},	/* DFILPCFG0 */
			{0x000001a0, 0xc0400003},	/* DFIUPD0 */
			{0x00000240, 0x06000604},	/* ODTCFG */
			{0x00000244, 0x00000201},	/* ODTMAP */
			{0x00000250, 0x00001f00},	/* SCHED */
			{0x00000490, 0x00000001},	/* PCTRL_0 */
			{0xffffffff, 0xffffffff}
		}
	},
	{
		{
			{0x00000004, 0x0000008c},	/* PHYREG01 */
			{0x00000014, 0x0000000a},	/* PHYREG05 */
			{0x00000018, 0x00000000},	/* PHYREG06 */
			{0x0000001c, 0x00000009},	/* PHYREG07 */
			{0xffffffff, 0xffffffff}
		}
	}
},