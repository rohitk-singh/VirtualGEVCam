// -*- coding: gb2312-dos -*-
#ifndef __MV_GIGE_PIXELFORMAT_H__
#define __MV_GIGE_PIXELFORMAT_H__


// ===================================================
// PIXEL FORMATS
// ===================================================
// Indicate if pixel is monochrome or RGB
#define MV_GVSP_PIX_MONO                                0x01000000
#define MV_GVSP_PIX_RGB                                 0x02000000 // deprecated in version 1.1
#define MV_GVSP_PIX_COLOR                               0x02000000
#define MV_GVSP_PIX_CUSTOM                              0x80000000
#define MV_GVSP_PIX_COLOR_MASK                          0xFF000000

// Indicate effective number of bits occupied by the pixel (including padding).
// This can be used to compute amount of memory required to store an image.
#define MV_GVSP_PIX_OCCUPY1BIT                          0x00010000
#define MV_GVSP_PIX_OCCUPY2BIT                          0x00020000
#define MV_GVSP_PIX_OCCUPY4BIT                          0x00040000
#define MV_GVSP_PIX_OCCUPY8BIT                          0x00080000
#define MV_GVSP_PIX_OCCUPY12BIT                         0x000C0000
#define MV_GVSP_PIX_OCCUPY16BIT                         0x00100000
#define MV_GVSP_PIX_OCCUPY24BIT                         0x00180000
#define MV_GVSP_PIX_OCCUPY32BIT                         0x00200000
#define MV_GVSP_PIX_OCCUPY36BIT                         0x00240000
#define MV_GVSP_PIX_OCCUPY48BIT                         0x00300000
#define MV_GVSP_PIX_EFFECTIVE_PIXEL_SIZE_MASK           0x00FF0000
#define MV_GVSP_PIX_EFFECTIVE_PIXEL_SIZE_SHIFT          16

// Pixel ID: lower 16-bit of the pixel formats
#define MV_GVSP_PIX_ID_MASK                             0x0000FFFF
#define MV_GVSP_PIX_COUNT                               0x46 // next Pixel ID available

//Mono buffer format defines
#define MV_GVSP_PIX_MONO1P                      (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY1BIT | 0x0037)
#define MV_GVSP_PIX_MONO2P                      (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY2BIT | 0x0038)
#define MV_GVSP_PIX_MONO4P                      (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY4BIT | 0x0039)
#define MV_GVSP_PIX_MONO8                       (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY8BIT | 0x0001)
//#define MV_GVSP_PIX_MONO8                     (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY8BIT  | 0x0001)
#define MV_GVSP_PIX_MONO8_SIGNED                (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY8BIT  | 0x0002)
#define MV_GVSP_PIX_MONO10                      (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x0003)
#define MV_GVSP_PIX_MONO10_PACKED               (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY12BIT | 0x0004)
#define MV_GVSP_PIX_MONO12                      (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x0005)
#define MV_GVSP_PIX_MONO12_PACKED               (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY12BIT | 0x0006)
#define MV_GVSP_PIX_MONO14                      (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x0025)
#define MV_GVSP_PIX_MONO16                      (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x0007)

// Bayer buffer format defines
#define MV_GVSP_PIX_BAYGR8                      (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY8BIT | 0x0008)
#define MV_GVSP_PIX_BAYRG8                      (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY8BIT | 0x0009)
#define MV_GVSP_PIX_BAYGB8                      (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY8BIT | 0x000A)
#define MV_GVSP_PIX_BAYBG8                      (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY8BIT | 0x000B)
#define MV_GVSP_PIX_BAYGR10                     (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x000C)
#define MV_GVSP_PIX_BAYRG10                     (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x000D)
#define MV_GVSP_PIX_BAYGB10                     (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x000E)
#define MV_GVSP_PIX_BAYBG10                     (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x000F)
#define MV_GVSP_PIX_BAYGR12                     (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x0010)
#define MV_GVSP_PIX_BAYRG12                     (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x0011)
#define MV_GVSP_PIX_BAYGB12                     (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x0012)
#define MV_GVSP_PIX_BAYBG12                     (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x0013)
#define MV_GVSP_PIX_BAYGR10_PACKED              (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY12BIT | 0x0026)
#define MV_GVSP_PIX_BAYRG10_PACKED              (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY12BIT | 0x0027)
#define MV_GVSP_PIX_BAYGB10_PACKED              (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY12BIT | 0x0028)
#define MV_GVSP_PIX_BAYBG10_PACKED              (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY12BIT | 0x0029)
#define MV_GVSP_PIX_BAYGR12_PACKED              (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY12BIT | 0x002A)
#define MV_GVSP_PIX_BAYRG12_PACKED              (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY12BIT | 0x002B)
#define MV_GVSP_PIX_BAYGB12_PACKED              (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY12BIT | 0x002C)
#define MV_GVSP_PIX_BAYBG12_PACKED              (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY12BIT | 0x002D)
#define MV_GVSP_PIX_BAYGR16                     (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x002E)
#define MV_GVSP_PIX_BAYRG16                     (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x002F)
#define MV_GVSP_PIX_BAYGB16                     (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x0030)
#define MV_GVSP_PIX_BAYBG16                     (MV_GVSP_PIX_MONO | MV_GVSP_PIX_OCCUPY16BIT | 0x0031)

//RGB Packed buffer format defines
#define MV_GVSP_PIX_RGB8_PACKED                 (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY24BIT | 0x0014)
#define MV_GVSP_PIX_BGR8_PACKED                 (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY24BIT | 0x0015)
#define MV_GVSP_PIX_RGBA8_PACKED                (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY32BIT | 0x0016)
#define MV_GVSP_PIX_BGRA8_PACKED                (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY32BIT | 0x0017)
#define MV_GVSP_PIX_RGB10_PACKED                (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY48BIT | 0x0018)
#define MV_GVSP_PIX_BGR10_PACKED                (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY48BIT | 0x0019)
#define MV_GVSP_PIX_RGB12_PACKED                (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY48BIT | 0x001A)
#define MV_GVSP_PIX_BGR12_PACKED                (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY48BIT | 0x001B)
#define MV_GVSP_PIX_RGB16_PACKED                (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY48BIT | 0x0033)
#define MV_GVSP_PIX_RGB10V1_PACKED              (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY32BIT | 0x001C)
#define MV_GVSP_PIX_RGB10V2_PACKED              (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY32BIT | 0x001D)
#define MV_GVSP_PIX_RGB12V1_PACKED              (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY36BIT | 0X0034)
#define MV_GVSP_PIX_RGB565_PACKED               (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY16BIT | 0x0035)
#define MV_GVSP_PIX_BGR565_PACKED               (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY16BIT | 0X0036)

//YUV Packed buffer format defines
#define MV_GVSP_PIX_YUV411_PACKED               (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY12BIT | 0x001E)
#define MV_GVSP_PIX_YUV422_PACKED               (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY16BIT | 0x001F)
#define MV_GVSP_PIX_YUV422_YUYV_PACKED          (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY16BIT | 0x0032)
#define MV_GVSP_PIX_YUV444_PACKED               (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY24BIT | 0x0020)
#define MV_GVSP_PIX_YCBCR8_CBYCR                (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY24BIT | 0x003A)
#define MV_GVSP_PIX_YCBCR422_8                  (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY16BIT | 0x003B)
#define MV_GVSP_PIX_YCBCR422_8_CBYCRY           (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY16BIT | 0x0043)
#define MV_GVSP_PIX_YCBCR411_8_CBYYCRYY         (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY12BIT | 0x003C)
#define MV_GVSP_PIX_YCBCR601_8_CBYCR            (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY24BIT | 0x003D)
#define MV_GVSP_PIX_YCBCR601_422_8              (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY16BIT | 0x003E)
#define MV_GVSP_PIX_YCBCR601_422_8_CBYCRY       (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY16BIT | 0x0044)
#define MV_GVSP_PIX_YCBCR601_411_8_CBYYCRYY     (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY12BIT | 0x003F)
#define MV_GVSP_PIX_YCBCR709_8_CBYCR            (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY24BIT | 0x0040)
#define MV_GVSP_PIX_YCBCR709_422_8              (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY16BIT | 0x0041)
#define MV_GVSP_PIX_YCBCR709_422_8_CBYCRY       (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY16BIT | 0x0045)
#define MV_GVSP_PIX_YCBCR709_411_8_CBYYCRYY     (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY12BIT | 0x0042)

//RGB Planar buffer format defines
#define MV_GVSP_PIX_RGB8_PLANAR                 (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY24BIT | 0x0021)
#define MV_GVSP_PIX_RGB10_PLANAR                (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY48BIT | 0x0022)
#define MV_GVSP_PIX_RGB12_PLANAR                (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY48BIT | 0x0023)
#define MV_GVSP_PIX_RGB16_PLANAR                (MV_GVSP_PIX_COLOR | MV_GVSP_PIX_OCCUPY48BIT | 0x0024)


#define MV_GVCP_MAX_PIEXL_FORMAT_TYPE            69

#endif