#ifndef _OV8858_CMK_GOLDEN_OTP_H_
#define _OV8858_CMK_GOLDEN_OTP_H_
#include "otp_common.h"

static awb_target_packet_t golden_awb[AWB_MAX_LIGHT] = {
    {
        // d65 light
        .R = 0x1ed,
        .G = 0x30f,
        .B = 0x1e7 //       .R = 0x01d2, .G = 0x02f8, .B = 0x01c0,
    },
};

static cmr_u16 golden_lsc[] = {
    0x9a42, 0x155a, 0xf125, 0x373d, 0xe9cd, 0xa872, 0x2754, 0xc984, 0x9262,
    0x489f, 0x0e2b, 0x718c, 0x0393, 0x4db1, 0x16dd, 0x86e7, 0x6967, 0xa14b,
    0x3a4f, 0xae13, 0x25ec, 0x4882, 0xd1fb, 0xe87a, 0x161e, 0x3188, 0x9da2,
    0x2dc0, 0x0d9c, 0x5428, 0x3142, 0xce5f, 0x2413, 0xd7e4, 0x2bb8, 0x4910,
    0xd1f3, 0xbc6e, 0x3019, 0x8f86, 0x68a1, 0x1ca0, 0x0825, 0x6262, 0xb0b8,
    0xa238, 0x5591, 0x21b5, 0x3b7d, 0x0be1, 0xb262, 0x907c, 0xdb1a, 0x5985,
    0x5251, 0x14b4, 0xc56f, 0x8181, 0xc46e, 0xfb20, 0x1e89, 0xfc23, 0x4dac,
    0xd0d9, 0x7368, 0x40ad, 0xfa22, 0x79c6, 0x5291, 0x12ec, 0x847f, 0xc124,
    0x284b, 0x1115, 0xd186, 0x8f51, 0x2d10, 0x8e57, 0x347e, 0x6500, 0x2733,
    0x020a, 0x67c2, 0x1614, 0x84c7, 0x6116, 0x9441, 0x5210, 0x35c4, 0x5971,
    0x1ad0, 0x4851, 0x12a3, 0xa8d8, 0xa643, 0x210f, 0x9dc3, 0x1f18, 0x8640,
    0xe154, 0xd049, 0x0010, 0x03c4, 0x42a1, 0x12a4, 0x455c, 0xd19c, 0xe880,
    0x1c28, 0x1f8d, 0xfa14, 0x3220, 0x49e6, 0x21f5, 0x2465, 0xa315, 0x0d04,
    0x4051, 0x1060, 0x8432, 0x512b, 0xe856, 0x1619, 0x8fc8, 0xd1f2, 0x41ec,
    0x5027, 0x0340, 0xc0a5, 0xad20, 0x6906, 0x4e41, 0x11dc, 0x4440, 0x5110,
    0xc047, 0xb113, 0xb505, 0x8751, 0x2ad0, 0x8d9e, 0x5443, 0xf513, 0x2937,
    0x39cb, 0x7582, 0x18fc, 0x8574, 0x113d, 0x244c, 0xfe13, 0x5e44, 0x6491,
    0x1e08, 0x093c, 0xf2e9, 0xc8e9, 0xaa48, 0xda92, 0xc703, 0x2830, 0x885d,
    0x21cb, 0x2c65, 0x8e17, 0x6345, 0x5c41, 0x1890, 0x073e, 0xf225, 0xc8a6,
    0x3333, 0xee10, 0x48a4, 0x4575, 0x0e41, 0x02e7, 0x309d, 0x9322, 0xbcc7,
    0x6ad1, 0x1ac0, 0x06f7, 0xa1d8, 0x4089, 0x1928, 0xb5cc, 0x24d3, 0x57a1,
    0x57a1, 0xa4e2, 0xd507, 0xb236, 0x94cb, 0x9432, 0x2238, 0x4840, 0x520f,
    0x2089, 0x7025, 0x038a, 0xe553, 0x4520, 0x94bb, 0xb641, 0x3daf, 0x6157,
    0xe8d2, 0xd743, 0x2f8c, 0xcab7, 0xa27d, 0x889a, 0x0626, 0xb00a, 0xc0c2,
    0x3738, 0xd063, 0xc4db, 0x9172, 0x0071, 0x5152, 0x63a4, 0x00ce, 0x032d,
    0x444a, 0x8782, 0x2014, 0x47d9, 0x31f7, 0x6482, 0x5222, 0x93c9, 0xb972,
    0x3508, 0x0ef7, 0x344b, 0xa4f3, 0x6134, 0x768b, 0x8a92, 0x1f50, 0x473a,
    0xe1b6, 0xe06a, 0xf31a, 0xd986, 0x80c1, 0x23cc, 0xca2c, 0x92f1, 0x74da,
    0xd33d, 0xfe0d, 0xa302, 0x22e0, 0x0791, 0x61b2, 0x7c63, 0xb317, 0x6e85,
    0x5f11, 0x197c, 0x06fe, 0x41f7, 0x1c90, 0x6e2a, 0x918c, 0xcf23, 0x2c24,
    0x894b, 0x91f8, 0x1c6c, 0x7918, 0x48c5, 0x4ef1, 0x13d0, 0x0524, 0x4166,
    0x3463, 0x2a1c, 0x6648, 0xb6d2, 0x3554, 0x0c3c, 0xe297, 0x388a, 0x3f1d,
    0x60c6, 0x4f41, 0x1278, 0x046a, 0xd11f, 0x3049, 0xa214, 0x9d45, 0x78c1,
    0x23cc, 0x8ab5, 0x5325, 0xc8bc, 0x5027, 0xbdc8, 0x5f41, 0x1504, 0xc4ac,
    0x2113, 0x8041, 0x4610, 0x2cc4, 0x5461, 0x1850, 0x472a, 0x4222, 0x88a4,
    0x9a30, 0x6f8b, 0x8242, 0x1b4c, 0x05c9, 0x9146, 0xc048, 0x0010, 0x0304,
    0x4231, 0x1238, 0xc520, 0x317a, 0x7c70, 0x1921, 0xfaca, 0xba52, 0x2734,
    0x8836, 0x81b7, 0x5c5d, 0x8f14, 0x0cc4, 0x4071, 0x1060, 0xc42e, 0xa125,
    0xd452, 0x0e17, 0x1ac7, 0xa252, 0x2fe4, 0x4bf4, 0x9286, 0x8487, 0x1a1c,
    0x56c6, 0x4c41, 0x11a0, 0x0438, 0x810f, 0x3c46, 0x6613, 0x8d45, 0x7511,
    0x22cc, 0x4a73, 0x7315, 0xb0c8, 0xfd2a, 0xe508, 0x68c1, 0x1720, 0x8531,
    0x4133, 0xa44a, 0xd612, 0x4e44, 0x5d81, 0x1acc, 0x47d4, 0xb252, 0xbcb0,
    0x5333, 0xe1cd, 0x9c12, 0x211c, 0xc736, 0x319c, 0xbc5d, 0x4515, 0x50c5,
    0x5701, 0x16e8, 0x4682, 0x01d9, 0x4c89, 0xe628, 0x75cb, 0xe733, 0x3268,
    0x0acb, 0x324f, 0x6482, 0xb61d, 0x9286, 0x6191, 0x1854, 0x464f, 0xa1a6,
    0x5c76, 0x9321, 0xca09, 0xd0a2, 0x3bb0, 0x1015, 0xf376, 0x04c1, 0x532a,
    0x1f89, 0x7cf2, 0x1d70, 0xc72a, 0xb1ca, 0x6c76, 0x941f, 0x6308, 0xadf2,
    0x3228, 0x0e61, 0x0424, 0x351f, 0x463c, 0xe94d, 0xa652, 0x260c, 0x08c7,
    0xc213, 0x6481, 0x5c20, 0x3388, 0x9982, 0x2a88, 0x8c0e, 0x236d, 0x28fa,
    0x0049, 0x5141, 0x73a2, 0xeccd, 0xee2c, 0x4349, 0x8682, 0x2014, 0x87d6,
    0xe1f6, 0x5c81, 0x4f22, 0x90c9, 0xb972, 0x3508, 0x4f07, 0xc45f, 0x9cf3,
    0x5e34, 0x730b, 0x8a12, 0x1f28, 0x8736, 0x51b7, 0xec6b, 0xf71a, 0xdb46,
    0x80e1, 0x23e8, 0xca32, 0x12f6, 0x5cdc, 0xce3e, 0xfa4d, 0xa2a2, 0x22a0,
    0x8785, 0x31b0, 0x7c63, 0xb517, 0x7045, 0x5f61, 0x1988, 0xc703, 0xa1f7,
    0x5890, 0x812a, 0x9c0c, 0xce93, 0x2bec, 0x4941, 0x01f5, 0x006c, 0x7518,
    0x4885, 0x4f11, 0x13e4, 0x052a, 0xa167, 0x4463, 0x2d1c, 0x6948, 0xb822,
    0x35f4, 0x0c38, 0x1295, 0x088a, 0x351d, 0x5ec6, 0x4f01, 0x1274, 0x846b,
    0x011f, 0x3c4a, 0xa514, 0x9e85, 0x7911, 0x23f8, 0xcaca, 0x632d, 0xa4bc,
    0x4227, 0xba48, 0x5e51, 0x14dc, 0x44a7, 0x1113, 0x8441, 0x4810, 0x2d04,
    0x54a1, 0x1860, 0x0730, 0x6225, 0x38a5, 0x8f31, 0x6b8b, 0x8122, 0x1b08,
    0x05bc, 0x2143, 0xb448, 0x0010, 0x02c4, 0x4241, 0x1240, 0x051e, 0x417b,
    0x9c70, 0x2421, 0x048a, 0xb9c3, 0x26e8, 0x8822, 0x81b3, 0x305c, 0x8814,
    0x0b84, 0x4051, 0x1058, 0x442f, 0x8126, 0xe052, 0x1117, 0x1c87, 0xa2d2,
    0x3084, 0x8be9, 0xc281, 0x4886, 0x0c1c, 0x5406, 0x4be1, 0x1190, 0x0437,
    0x910f, 0x4846, 0x6713, 0x8e85, 0x75d1, 0x2308, 0xca85, 0xd31f, 0x60c7,
    0xf12a, 0xe148, 0x67e1, 0x16f4, 0x052c, 0x4133, 0xb04a, 0xda12, 0x4fc4,
    0x5da1, 0x1adc, 0x87db, 0xe255, 0x98b1, 0x5c34, 0xe0cd, 0x9b92, 0x2100,
    0x8732, 0x019b, 0xc05d, 0x4715, 0x5245, 0x5781, 0x1704, 0x468c, 0x71dc,
    0xa48a, 0x1028, 0x82cc, 0xe703, 0x325c, 0xcad0, 0x324e, 0x6082, 0xb71d,
    0x9406, 0x61f1, 0x1884, 0x8658, 0x91a8, 0x9877, 0xab21, 0xd049, 0xd3d2,
    0x3c8c, 0x5017, 0x4374, 0x10c2, 0x522a, 0x1f89, 0x7d22, 0x1d8c, 0x4735,
    0x81ce, 0xb877, 0xa91f, 0x6888, 0xaf92, 0x32d4, 0xce89, 0xc42f, 0x251d,
    0x393c, 0xe94d, 0xa6b2, 0x260c, 0x08cd, 0xc216, 0xb882, 0x7020, 0x39c8,
    0x9a62, 0x2af4, 0x4c26, 0x8376, 0x18fd, 0x004a, 0x52ef, 0xe3e3, 0x94d8,
    0x2a2e, 0x4a0a, 0x8792, 0x2030, 0xc7da, 0x91f7, 0x5881, 0x5722, 0x9b09,
    0xbfa2, 0x378c, 0x0fe4, 0x34a9, 0x6904, 0xce37, 0x824b, 0x8b52, 0x1f14,
    0x0723, 0x01b2, 0x986a, 0xdc1a, 0xd286, 0x7f51, 0x23bc, 0x0a44, 0x130a,
    0x90e5, 0x9041, 0x198e, 0xa5f3, 0x22ec, 0x877c, 0x41a9, 0x0861, 0x9717,
    0x6785, 0x5cc1, 0x18cc, 0x86d4, 0x61ee, 0x988f, 0xc72a, 0xba8c, 0xd6e3,
    0x2d0c, 0x0958, 0xd1f4, 0x7c6a, 0x5417, 0x4085, 0x4d41, 0x136c, 0xc504,
    0x515b, 0x7460, 0x0a1b, 0x6748, 0xba22, 0x3758, 0xccbc, 0x42a3, 0xec8b,
    0x271c, 0x5846, 0x4d91, 0x1228, 0x845b, 0x411a, 0xb048, 0x7c13, 0x9345,
    0x76f1, 0x23c4, 0xcae0, 0x5343, 0x68c3, 0x5328, 0xb988, 0x5d91, 0x1490,
    0x849a, 0xc111, 0x6440, 0x3710, 0x2604, 0x52c1, 0x17d8, 0x0712, 0x7222,
    0xe8a6, 0xf731, 0x7b0b, 0x82d2, 0x1b10, 0x45b3, 0xd140, 0xb447, 0x0010,
    0x02c4, 0x41a1, 0x11ec, 0x8506, 0xd173, 0x906e, 0x3821, 0x0eca, 0xc0a3,
    0x27b8, 0xc837, 0x11b3, 0x185c, 0x8214, 0x0b84, 0x4041, 0x104c, 0xc424,
    0xe11f, 0x6050, 0xf817, 0x1bc6, 0xa462, 0x3148, 0xcc69, 0x3290, 0x4088,
    0xfd1c, 0x5005, 0x4b11, 0x117c, 0xc431, 0x810c, 0xdc45, 0x4912, 0x85c5,
    0x73d1, 0x22f4, 0x4a98, 0x232f, 0xbcd1, 0x162b, 0xe3c9, 0x6781, 0x16c0,
    0x051f, 0x8131, 0x8049, 0xc412, 0x4804, 0x5bc1, 0x1a64, 0xc7cd, 0xb258,
    0x10b4, 0x1b36, 0xfe0e, 0x9f52, 0x2170, 0x4733, 0x1197, 0x805c, 0x3c15,
    0x4e05, 0x5621, 0x16c8, 0xc66f, 0xe1d6, 0x1c89, 0x5829, 0xa30c, 0xf613,
    0x351c, 0x0b31, 0x925a, 0x4082, 0xad1d, 0x9106, 0x6151, 0x185c, 0xc645,
    0x41a5, 0x9076, 0xc621, 0xe389, 0xdb12, 0x3f7c, 0x5159, 0xa3ad, 0x24ca,
    0x722b, 0x1ec9, 0x7cd2, 0x1d74, 0xc72b, 0x41ca, 0x5076, 0xa11f, 0x6d08,
    0xb3f2, 0x345c, 0x0f40, 0x846e, 0x913d, 0xf440, 0x058d, 0xa9e3, 0x2658,
    0x08d4, 0xe215, 0x9c82, 0x6620, 0x3588, 0x9b32, 0x2b80, 0x8c80, 0x439f,
    0x110c, 0x0050, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000,

};

#endif