#include "gfx/legato/generated/le_gen_assets.h"

/*********************************
 * Legato Font Asset
 * Name:         Arial_30
 * Height:       31
 * Baseline:     23
 * Style:        Antialias
 * Glyph Count:  21
 * Range Count:  12
 * Glyph Ranges: 0x20
                 0x41-0x43
                 0x47-0x48
                 0x4C-0x4D
                 0x50
                 0x61
                 0x63
                 0x65
                 0x68-0x69
                 0x6D-0x70
                 0x72-0x73
                 0x79
 *********************************/
/*********************************
 * font glyph kerning table description
 *
 * unsigned int - number of glyphs
 * for each glyph:
 *     unsigned short - codepoint         * the glyph's codepoint
 *     short          - width             * the glyph's width in pixels
 *     short          - height            * the glyph's height in pixels
 *     short          - advance           * the glyph's advance value in pixels
 *     short          - bearingX          * the glyph's bearing value in pixels on the X axis
 *     short          - bearingY          * the glyph's bearing value in pixels on the Y axis
 *     unsigned short - flags             * status flags for this glyph
 *     unsigned short - data row width    * the size of a row of glyph data in bytes
 *     unsigned int   - data table offset * the offset into the corresponding font data table
 ********************************/
const uint8_t Arial_30_glyphs[424] =
{
    0x15,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x00,0x14,0x00,0x16,0x00,0x13,0x00,
    0x00,0x00,0x16,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x42,0x00,0x10,0x00,
    0x16,0x00,0x14,0x00,0x02,0x00,0x16,0x00,0x00,0x00,0x10,0x00,0xB8,0x01,0x00,0x00,
    0x43,0x00,0x12,0x00,0x16,0x00,0x13,0x00,0x01,0x00,0x16,0x00,0x00,0x00,0x12,0x00,
    0x18,0x03,0x00,0x00,0x47,0x00,0x13,0x00,0x16,0x00,0x16,0x00,0x01,0x00,0x16,0x00,
    0x00,0x00,0x13,0x00,0xA4,0x04,0x00,0x00,0x48,0x00,0x12,0x00,0x16,0x00,0x16,0x00,
    0x02,0x00,0x16,0x00,0x00,0x00,0x12,0x00,0x46,0x06,0x00,0x00,0x4C,0x00,0x0D,0x00,
    0x16,0x00,0x10,0x00,0x02,0x00,0x16,0x00,0x00,0x00,0x0D,0x00,0xD2,0x07,0x00,0x00,
    0x4D,0x00,0x17,0x00,0x16,0x00,0x1B,0x00,0x02,0x00,0x16,0x00,0x00,0x00,0x17,0x00,
    0xF0,0x08,0x00,0x00,0x50,0x00,0x0F,0x00,0x16,0x00,0x12,0x00,0x02,0x00,0x16,0x00,
    0x00,0x00,0x0F,0x00,0xEA,0x0A,0x00,0x00,0x61,0x00,0x0E,0x00,0x11,0x00,0x11,0x00,
    0x01,0x00,0x11,0x00,0x00,0x00,0x0E,0x00,0x34,0x0C,0x00,0x00,0x63,0x00,0x0D,0x00,
    0x11,0x00,0x0E,0x00,0x01,0x00,0x11,0x00,0x00,0x00,0x0D,0x00,0x22,0x0D,0x00,0x00,
    0x65,0x00,0x0F,0x00,0x11,0x00,0x11,0x00,0x01,0x00,0x11,0x00,0x00,0x00,0x0F,0x00,
    0xFF,0x0D,0x00,0x00,0x68,0x00,0x0F,0x00,0x17,0x00,0x13,0x00,0x02,0x00,0x17,0x00,
    0x00,0x00,0x0F,0x00,0xFE,0x0E,0x00,0x00,0x69,0x00,0x04,0x00,0x17,0x00,0x08,0x00,
    0x02,0x00,0x17,0x00,0x00,0x00,0x04,0x00,0x57,0x10,0x00,0x00,0x6D,0x00,0x18,0x00,
    0x11,0x00,0x1C,0x00,0x02,0x00,0x11,0x00,0x00,0x00,0x18,0x00,0xB3,0x10,0x00,0x00,
    0x6E,0x00,0x0F,0x00,0x11,0x00,0x13,0x00,0x02,0x00,0x11,0x00,0x00,0x00,0x0F,0x00,
    0x4B,0x12,0x00,0x00,0x6F,0x00,0x10,0x00,0x11,0x00,0x12,0x00,0x01,0x00,0x11,0x00,
    0x00,0x00,0x10,0x00,0x4A,0x13,0x00,0x00,0x70,0x00,0x0F,0x00,0x18,0x00,0x12,0x00,
    0x02,0x00,0x11,0x00,0x00,0x00,0x0F,0x00,0x5A,0x14,0x00,0x00,0x72,0x00,0x0A,0x00,
    0x11,0x00,0x0C,0x00,0x02,0x00,0x11,0x00,0x00,0x00,0x0A,0x00,0xC2,0x15,0x00,0x00,
    0x73,0x00,0x0D,0x00,0x11,0x00,0x0E,0x00,0x01,0x00,0x11,0x00,0x00,0x00,0x0D,0x00,
    0x6C,0x16,0x00,0x00,0x79,0x00,0x10,0x00,0x18,0x00,0x0F,0x00,0x00,0x00,0x11,0x00,
    0x00,0x00,0x10,0x00,0x49,0x17,0x00,0x00,
};

/*********************************
 * raw font glyph data
 ********************************/
const uint8_t Arial_30_data[6345] =
{
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD0,0xFF,0xF1,0x0A,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x32,0xFF,0xFF,0xFF,0x5D,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x94,
    0xFF,0xFF,0xFF,0xBE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x07,0xEE,0xFF,0xAB,0xFF,0xFE,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x57,0xFF,0xFF,0x24,0xF4,0xFF,0x80,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB8,0xFF,0xCE,0x00,0xA7,0xFF,
    0xDF,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0xFD,0xFF,
    0x74,0x00,0x49,0xFF,0xFF,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x7B,0xFF,0xFB,0x17,0x00,0x03,0xE6,0xFF,0xA3,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xDB,0xFF,0xB2,0x00,0x00,0x00,0x8A,0xFF,0xF5,0x0E,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0xFF,0xFF,0x51,0x00,0x00,0x00,0x2B,
    0xFF,0xFF,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9F,0xFF,0xEB,0x05,
    0x00,0x00,0x00,0x00,0xCB,0xFF,0xC7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,
    0xF4,0xFF,0x90,0x00,0x00,0x00,0x00,0x00,0x6C,0xFF,0xFF,0x28,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x62,0xFF,0xFF,0xA4,0x80,0x80,0x80,0x80,0x80,0x92,0xFF,0xFF,0x89,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC4,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xE6,0x03,0x00,0x00,0x00,0x00,0x00,0x25,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x4B,0x00,0x00,0x00,0x00,0x00,0x87,0xFF,
    0xFD,0x1B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0xF9,0xFF,0xAC,0x00,0x00,0x00,
    0x00,0x03,0xE5,0xFF,0xBB,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xAF,0xFF,
    0xF9,0x13,0x00,0x00,0x00,0x4A,0xFF,0xFF,0x5E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x51,0xFF,0xFF,0x6E,0x00,0x00,0x00,0xAB,0xFF,0xF5,0x0C,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x06,0xEC,0xFF,0xCF,0x00,0x00,0x13,0xF9,0xFF,0xA4,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x94,0xFF,0xFF,0x30,0x00,
    0x6E,0xFF,0xFF,0x47,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x36,
    0xFF,0xFF,0x91,0x00,0xCF,0xFF,0xE7,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xD7,0xFF,0xEC,0x06,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,
    0xF0,0xD7,0xB1,0x71,0x19,0x00,0x00,0x00,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xF9,0x7B,0x00,0x00,0x18,0xFF,0xFF,0xB6,0x44,0x44,0x44,0x47,
    0x55,0x79,0xC2,0xFF,0xFF,0xFF,0x69,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x5E,0xFF,0xFF,0xDF,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xC9,0xFF,0xFF,0x14,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xA6,0xFF,0xFF,0x21,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xBF,0xFF,0xF9,0x08,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x2E,0xFB,0xFF,0xA5,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x0A,0x29,0x6F,0xEB,0xFF,0xCE,0x16,0x00,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xD1,0x7A,0x09,0x00,0x00,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xC9,0x7A,0x14,0x00,0x00,0x18,0xFF,0xFF,0xB6,0x44,0x44,0x44,0x44,
    0x4E,0x69,0xA7,0xF9,0xFF,0xEE,0x47,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x2E,0xED,0xFF,0xF3,0x23,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x67,0xFF,0xFF,0x8C,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0xC5,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x05,0xFF,0xFF,0xD9,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x21,0xFF,0xFF,0xCB,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x9A,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x32,0xF2,0xFF,0xFF,0x3D,0x18,0xFF,0xFF,0xB6,0x44,0x44,0x44,0x44,
    0x4B,0x65,0xA4,0xF9,0xFF,0xFF,0x9C,0x00,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFE,0x90,0x03,0x00,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFD,0xEF,0xCD,0x8F,0x2C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x77,
    0xBA,0xE4,0xF6,0xFB,0xEE,0xCF,0xA1,0x5B,0x0A,0x00,0x00,0x00,0x00,0x00,0x0B,0x95,
    0xFA,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD2,0x00,0x00,0x00,0x00,0x1A,
    0xD5,0xFF,0xFF,0xFB,0xB4,0x6E,0x52,0x4B,0x63,0x9B,0xED,0xFF,0x6E,0x00,0x00,0x00,
    0x0A,0xD2,0xFF,0xFF,0xC7,0x2A,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x56,0x0A,0x00,
    0x00,0x00,0x8D,0xFF,0xFF,0xC2,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x19,0xF9,0xFF,0xF0,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x78,0xFF,0xFF,0x89,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC2,0xFF,0xFF,0x2A,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF5,0xFF,0xED,0x01,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0xC8,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0xFF,0xFF,0xB8,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0xFF,
    0xFF,0xB7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x1A,0xFF,0xFF,0xC6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x02,0xF9,0xFF,0xEA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xCD,0xFF,0xFF,0x23,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8C,0xFF,0xFF,0x7C,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x31,0xFF,0xFF,0xE7,0x10,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB7,0xFF,0xFF,0xA8,
    0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0xF2,
    0xFF,0xFF,0xAC,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x04,0x00,0x00,0x00,
    0x00,0x43,0xF6,0xFF,0xFF,0xF3,0xA7,0x68,0x4F,0x4D,0x64,0x7D,0xB2,0xEE,0x30,0x00,
    0x00,0x00,0x00,0x00,0x2D,0xCC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x46,0x99,0xD0,0xF0,0xFC,0xFA,0xEE,0xD4,
    0x9E,0x5F,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x4C,0x98,0xCA,0xEC,0xF9,
    0xF9,0xEB,0xCB,0x9F,0x61,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x5A,0xDF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFA,0x1F,0x00,0x00,0x00,0x07,0xA6,0xFF,
    0xFF,0xFF,0xD4,0x8A,0x5F,0x4B,0x50,0x68,0x99,0xDC,0xFF,0xBC,0x00,0x00,0x00,0x01,
    0xAD,0xFF,0xFF,0xE3,0x4F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2E,0x2C,0x00,
    0x00,0x00,0x6F,0xFF,0xFF,0xD8,0x1B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x0F,0xF1,0xFF,0xF7,0x2D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6E,0xFF,0xFF,0x95,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xBC,0xFF,0xFF,0x2D,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF2,0xFF,0xEB,
    0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,
    0xFF,0xFF,0xC2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x26,0xFF,0xFF,0xB0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xCC,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xA0,0x26,0xFF,0xFF,0xB2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xCC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xA0,0x19,0xFF,0xFF,0xC8,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x36,0x44,0x44,0x44,0x52,0xFF,0xFF,0xA0,0x01,0xF7,0xFF,0xE6,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x14,0xFF,0xFF,0xA0,0x00,0xC9,
    0xFF,0xFF,0x2B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x14,0xFF,0xFF,
    0xA0,0x00,0x82,0xFF,0xFF,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x14,0xFF,0xFF,0xA0,0x00,0x23,0xFD,0xFF,0xF1,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x14,0xFF,0xFF,0xA0,0x00,0x00,0x9F,0xFF,0xFF,0xBA,0x0B,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x14,0xFF,0xFF,0xA0,0x00,0x00,0x13,0xE0,0xFF,0xFF,
    0xCC,0x27,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x14,0xFF,0xFF,0xA0,0x00,0x00,0x00,
    0x27,0xE3,0xFF,0xFF,0xFC,0xBA,0x79,0x54,0x47,0x49,0x5A,0x82,0xBF,0xFF,0xFF,0xA0,
    0x00,0x00,0x00,0x00,0x15,0xA8,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0x9E,0x00,0x00,0x00,0x00,0x00,0x00,0x29,0x81,0xBF,0xE7,0xF8,0xFD,0xF6,
    0xE8,0xD0,0xAD,0x7D,0x41,0x06,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x68,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x68,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x9C,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x9C,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0xFF,0xFF,0x4C,0x18,0xFF,
    0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0xFF,0xFF,0x4C,
    0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0xFF,
    0xFF,0x4C,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x68,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x68,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x68,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0xB6,
    0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x90,0xFF,0xFF,0x4C,0x18,0xFF,
    0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0xFF,0xFF,0x4C,
    0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0xFF,
    0xFF,0x4C,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x68,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x68,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x68,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x68,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x9C,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x9C,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0xFF,0xFF,0x4C,0x18,0xFF,
    0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0xFF,0xFF,0x4C,
    0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x68,0xFF,
    0xFF,0x4C,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,
    0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,
    0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,
    0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,
    0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0xCC,0x7C,0x7C,0x7C,
    0x7C,0x7C,0x7C,0x7C,0x7C,0x78,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xF8,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,
    0x18,0xFF,0xFF,0xFF,0xFC,0x19,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xD7,0xFF,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0xFF,0xFF,0x74,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0xFF,0xFF,0xFF,0xFF,0x4C,0x18,0xFF,
    0xFF,0xF8,0xFF,0xD1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x96,
    0xFF,0xFA,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0xAD,0xFF,0xFF,0x2F,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x07,0xEE,0xFF,0xAB,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x63,
    0xFB,0xFF,0x8C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0xFF,0xFD,0x5C,
    0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x57,0xB4,0xFF,0xE6,0x03,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0xB4,0xFF,0xBA,0x4C,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x5C,0x56,0xFF,
    0xFF,0x47,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFB,0xFF,0x5A,0x53,0xFF,0xFF,
    0x4C,0x18,0xFF,0xFF,0x61,0x08,0xEF,0xFF,0xA5,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x73,0xFF,0xF1,0x09,0x5A,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x66,0x00,0x9A,0xFF,0xF5,
    0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0xD2,0xFF,0x9B,0x00,0x5F,0xFF,0xFF,0x4C,0x18,
    0xFF,0xFF,0x68,0x00,0x3C,0xFF,0xFF,0x60,0x00,0x00,0x00,0x00,0x00,0x32,0xFF,0xFF,
    0x3C,0x00,0x60,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x68,0x00,0x00,0xDD,0xFF,0xBD,0x00,
    0x00,0x00,0x00,0x00,0x91,0xFF,0xDC,0x00,0x00,0x60,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,
    0x68,0x00,0x00,0x80,0xFF,0xFD,0x1D,0x00,0x00,0x00,0x05,0xEB,0xFF,0x7D,0x00,0x00,
    0x60,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x68,0x00,0x00,0x22,0xFF,0xFF,0x78,0x00,0x00,
    0x00,0x4F,0xFF,0xFE,0x1F,0x00,0x00,0x60,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x68,0x00,
    0x00,0x00,0xC4,0xFF,0xD5,0x00,0x00,0x00,0xAF,0xFF,0xBE,0x00,0x00,0x00,0x60,0xFF,
    0xFF,0x4C,0x18,0xFF,0xFF,0x68,0x00,0x00,0x00,0x66,0xFF,0xFF,0x34,0x00,0x14,0xFA,
    0xFF,0x5F,0x00,0x00,0x00,0x60,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x68,0x00,0x00,0x00,
    0x10,0xF7,0xFF,0x91,0x00,0x6D,0xFF,0xF3,0x0B,0x00,0x00,0x00,0x60,0xFF,0xFF,0x4C,
    0x18,0xFF,0xFF,0x68,0x00,0x00,0x00,0x00,0xAA,0xFF,0xEA,0x04,0xCD,0xFF,0xA0,0x00,
    0x00,0x00,0x00,0x60,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x68,0x00,0x00,0x00,0x00,0x4C,
    0xFF,0xFF,0x78,0xFF,0xFF,0x41,0x00,0x00,0x00,0x00,0x60,0xFF,0xFF,0x4C,0x18,0xFF,
    0xFF,0x68,0x00,0x00,0x00,0x00,0x04,0xE9,0xFF,0xFE,0xFF,0xE0,0x01,0x00,0x00,0x00,
    0x00,0x60,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x68,0x00,0x00,0x00,0x00,0x00,0x90,0xFF,
    0xFF,0xFF,0x82,0x00,0x00,0x00,0x00,0x00,0x60,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x68,
    0x00,0x00,0x00,0x00,0x00,0x32,0xFF,0xFF,0xFF,0x23,0x00,0x00,0x00,0x00,0x00,0x60,
    0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0x68,0x00,0x00,0x00,0x00,0x00,0x00,0xD3,0xFF,0xC3,
    0x00,0x00,0x00,0x00,0x00,0x00,0x60,0xFF,0xFF,0x4C,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFE,0xF3,0xE1,0xB6,0x77,0x1A,0x00,0x00,0x00,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xF7,0x71,0x00,0x00,0x18,0xFF,0xFF,0xB6,0x44,0x44,0x46,0x55,
    0x7C,0xCB,0xFF,0xFF,0xFF,0x6D,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,
    0x00,0x64,0xFD,0xFF,0xF3,0x13,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x9D,0xFF,0xFF,0x5F,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x49,0xFF,0xFF,0x8C,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x31,
    0xFF,0xFF,0x98,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0xFF,
    0xFF,0x7F,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8A,0xFF,0xFF,
    0x49,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0xF6,0xFF,0xE5,0x03,
    0x18,0xFF,0xFF,0x9C,0x00,0x00,0x07,0x1C,0x49,0x9B,0xFA,0xFF,0xFE,0x53,0x00,0x18,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF6,0x60,0x00,0x00,0x18,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE2,0x91,0x1F,0x00,0x00,0x00,0x18,0xFF,0xFF,
    0xB6,0x44,0x44,0x3F,0x33,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x18,0xFF,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x81,0xC0,0xEA,0xFB,0xF2,0xCF,0x87,0x17,
    0x00,0x00,0x00,0x00,0x91,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE9,0x29,0x00,
    0x00,0x00,0x70,0xFF,0xDE,0x8B,0x59,0x4B,0x67,0xC9,0xFF,0xFF,0xC7,0x00,0x00,0x00,
    0x11,0x45,0x01,0x00,0x00,0x00,0x00,0x01,0xB7,0xFF,0xFF,0x24,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x52,0xFF,0xFF,0x53,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x34,0xFF,0xFF,0x64,0x00,0x00,0x00,0x00,0x00,0x0E,0x2F,0x3C,
    0x43,0x44,0x67,0xFF,0xFF,0x68,0x00,0x00,0x14,0x87,0xDB,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0x68,0x00,0x3A,0xED,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0x68,0x10,0xE8,0xFF,0xFF,0xB7,0x51,0x21,0x09,0x01,0x00,0x34,0xFF,0xFF,0x68,
    0x66,0xFF,0xFF,0xA2,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0xFF,0x68,0x93,0xFF,
    0xFF,0x32,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0xFF,0xFF,0x68,0x96,0xFF,0xFF,0x2C,
    0x00,0x00,0x00,0x00,0x00,0x00,0xAB,0xFF,0xFF,0x68,0x74,0xFF,0xFF,0x7C,0x00,0x00,
    0x00,0x00,0x00,0x70,0xFF,0xFF,0xFF,0x68,0x23,0xFB,0xFF,0xFC,0x9A,0x55,0x4B,0x71,
    0xC9,0xFF,0xAB,0xF9,0xFF,0x68,0x00,0x72,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xAF,
    0x06,0xCD,0xFF,0x68,0x00,0x00,0x40,0xB1,0xEB,0xFA,0xE8,0xBD,0x5D,0x00,0x00,0x9C,
    0xFF,0x68,0x00,0x00,0x00,0x00,0x2D,0x8B,0xD0,0xEC,0xF6,0xDB,0xBC,0x7A,0x16,0x00,
    0x00,0x04,0x94,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x2D,0x00,0x00,0x9B,0xFF,
    0xFF,0xEB,0x85,0x52,0x4C,0x74,0xC3,0xD1,0x00,0x00,0x43,0xFF,0xFF,0xD2,0x14,0x00,
    0x00,0x00,0x00,0x00,0x09,0x00,0x00,0xB7,0xFF,0xFE,0x2F,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x09,0xF9,0xFF,0xC7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x32,0xFF,0xFF,0x8C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4C,0xFF,0xFF,
    0x6D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0xFF,0xFF,0x63,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4E,0xFF,0xFF,0x6B,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x37,0xFF,0xFF,0x8A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x0D,0xFC,0xFF,0xC4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC1,
    0xFF,0xFE,0x2D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4C,0xFF,0xFF,0xCF,
    0x10,0x00,0x00,0x00,0x00,0x00,0x09,0x06,0x00,0x00,0x9F,0xFF,0xFF,0xE6,0x7E,0x4E,
    0x4B,0x63,0x9E,0xF1,0x24,0x00,0x00,0x07,0x99,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0x24,0x00,0x00,0x00,0x00,0x3B,0x9B,0xD7,0xF2,0xFB,0xE9,0xBB,0x65,0x07,0x00,
    0x00,0x00,0x00,0x38,0xA3,0xE1,0xFA,0xE8,0xC5,0x6A,0x0B,0x00,0x00,0x00,0x00,0x00,
    0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD8,0x25,0x00,0x00,0x00,0x00,0x80,
    0xFF,0xFF,0xD6,0x6F,0x4A,0x57,0xA2,0xFD,0xFF,0xE1,0x0D,0x00,0x00,0x2B,0xFA,0xFF,
    0xBD,0x07,0x00,0x00,0x00,0x00,0x6A,0xFF,0xFF,0x8D,0x00,0x00,0x9E,0xFF,0xF7,0x22,
    0x00,0x00,0x00,0x00,0x00,0x02,0xD7,0xFF,0xE9,0x03,0x03,0xEB,0xFF,0xB9,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x8D,0xFF,0xFF,0x33,0x28,0xFF,0xFF,0xA6,0x44,0x44,0x44,
    0x44,0x44,0x44,0x44,0x94,0xFF,0xFF,0x4E,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x62,0x51,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0x64,0x43,0xFF,0xFF,0x6A,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x2A,0xFF,0xFF,0x88,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x08,0xF2,0xFF,0xC9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xA3,0xFF,0xFF,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x34,0xFB,0xFF,0xE1,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x2E,
    0x00,0x00,0x00,0x7B,0xFF,0xFF,0xF8,0x9C,0x5B,0x48,0x50,0x6C,0xA2,0xEC,0xAC,0x00,
    0x00,0x00,0x00,0x6E,0xFA,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xAB,0x00,0x00,
    0x00,0x00,0x00,0x20,0x80,0xCA,0xE8,0xFC,0xF4,0xDB,0xAD,0x66,0x10,0x00,0x74,0xFF,
    0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,
    0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x2D,0x01,0x5E,0xBD,0xEA,
    0xF9,0xE6,0xB1,0x4E,0x00,0x00,0x00,0x74,0xFF,0xFF,0x2A,0xBF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0x9A,0x00,0x00,0x74,0xFF,0xFF,0xBF,0xFF,0xC1,0x6C,0x4C,0x5D,0x98,
    0xFC,0xFF,0xFF,0x5A,0x00,0x74,0xFF,0xFF,0xFF,0x81,0x00,0x00,0x00,0x00,0x00,0x50,
    0xFF,0xFF,0xC2,0x00,0x74,0xFF,0xFF,0xDA,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0xCA,
    0xFF,0xF7,0x02,0x74,0xFF,0xFF,0x84,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9A,0xFF,
    0xFF,0x12,0x74,0xFF,0xFF,0x52,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x81,0xFF,0xFF,
    0x1B,0x74,0xFF,0xFF,0x39,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,
    0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x74,
    0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x74,0xFF,
    0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x74,0xFF,0xFF,
    0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x74,0xFF,0xFF,0x30,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x74,0xFF,0xFF,0x30,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x74,0xFF,0xFF,0x30,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x33,0xE5,0xCC,0x0F,0x97,0xFF,0xFF,0x5E,0x97,
    0xFF,0xFF,0x5E,0x33,0xE5,0xCC,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x74,
    0xFF,0xFF,0x30,0x74,0xFF,0xFF,0x30,0x74,0xFF,0xFF,0x30,0x74,0xFF,0xFF,0x30,0x74,
    0xFF,0xFF,0x30,0x74,0xFF,0xFF,0x30,0x74,0xFF,0xFF,0x30,0x74,0xFF,0xFF,0x30,0x74,
    0xFF,0xFF,0x30,0x74,0xFF,0xFF,0x30,0x74,0xFF,0xFF,0x30,0x74,0xFF,0xFF,0x30,0x74,
    0xFF,0xFF,0x30,0x74,0xFF,0xFF,0x30,0x74,0xFF,0xFF,0x30,0x74,0xFF,0xFF,0x30,0x74,
    0xFF,0xFF,0x30,0x74,0xFF,0xC2,0x00,0x06,0x72,0xCB,0xF2,0xF1,0xD3,0x83,0x13,0x00,
    0x00,0x04,0x67,0xC2,0xEC,0xF8,0xE0,0xA0,0x2A,0x00,0x00,0x74,0xFF,0xE7,0x11,0xCE,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDE,0x1E,0x14,0xC9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xF6,0x45,0x00,0x74,0xFF,0xFF,0xBF,0xFF,0xA9,0x5D,0x4C,0x71,0xDF,0xFF,0xFF,0xB5,
    0xBB,0xFF,0xC3,0x69,0x4B,0x66,0xC1,0xFF,0xFF,0xE5,0x05,0x74,0xFF,0xFF,0xFF,0x64,
    0x00,0x00,0x00,0x00,0x0F,0xE4,0xFF,0xFF,0xFF,0x93,0x00,0x00,0x00,0x00,0x02,0xB4,
    0xFF,0xFF,0x4C,0x74,0xFF,0xFF,0xCD,0x00,0x00,0x00,0x00,0x00,0x00,0x79,0xFF,0xFF,
    0xEC,0x09,0x00,0x00,0x00,0x00,0x00,0x3D,0xFF,0xFF,0x80,0x74,0xFF,0xFF,0x7C,0x00,
    0x00,0x00,0x00,0x00,0x00,0x4F,0xFF,0xFF,0xA2,0x00,0x00,0x00,0x00,0x00,0x00,0x13,
    0xFF,0xFF,0x96,0x74,0xFF,0xFF,0x4E,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0xFF,
    0x77,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0x9F,0x74,0xFF,0xFF,0x38,0x00,
    0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0xFF,0x67,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xFC,0xFF,0xA0,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0xFF,
    0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0xA0,0x74,0xFF,0xFF,0x30,0x00,
    0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0xFF,0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xFC,0xFF,0xA0,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0xFF,
    0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0xA0,0x74,0xFF,0xFF,0x30,0x00,
    0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0xFF,0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xFC,0xFF,0xA0,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0xFF,
    0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0xA0,0x74,0xFF,0xFF,0x30,0x00,
    0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0xFF,0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xFC,0xFF,0xA0,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0xFF,
    0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0xA0,0x74,0xFF,0xFF,0x30,0x00,
    0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0xFF,0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xFC,0xFF,0xA0,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0xFF,0xFF,
    0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0xA0,0x74,0xFF,0xC2,0x00,0x02,
    0x60,0xBB,0xE9,0xFA,0xE7,0xB3,0x4F,0x00,0x00,0x00,0x74,0xFF,0xE7,0x0E,0xC4,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x9A,0x00,0x00,0x74,0xFF,0xFF,0xBD,0xFF,0xC2,0x6C,
    0x4C,0x5D,0x98,0xFC,0xFF,0xFF,0x59,0x00,0x74,0xFF,0xFF,0xFF,0x83,0x00,0x00,0x00,
    0x00,0x00,0x50,0xFF,0xFF,0xC1,0x00,0x74,0xFF,0xFF,0xDA,0x03,0x00,0x00,0x00,0x00,
    0x00,0x00,0xCA,0xFF,0xF6,0x02,0x74,0xFF,0xFF,0x84,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x9A,0xFF,0xFF,0x11,0x74,0xFF,0xFF,0x51,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x81,0xFF,0xFF,0x1B,0x74,0xFF,0xFF,0x39,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
    0xFF,0xFF,0x1C,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,
    0xFF,0x1C,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,
    0x1C,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,
    0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x74,
    0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x74,0xFF,
    0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x74,0xFF,0xFF,
    0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x74,0xFF,0xFF,0x30,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x74,0xFF,0xFF,0x30,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x1C,0x00,0x00,0x00,0x00,0x2E,0x96,
    0xD6,0xF2,0xF3,0xD4,0x9A,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x8A,0xFD,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8E,0x03,0x00,0x00,0x00,0x00,0x90,0xFF,0xFF,0xE5,
    0x80,0x51,0x4E,0x77,0xDA,0xFF,0xFF,0xA2,0x00,0x00,0x00,0x3E,0xFF,0xFF,0xCE,0x10,
    0x00,0x00,0x00,0x00,0x07,0xB5,0xFF,0xFF,0x52,0x00,0x00,0xB0,0xFF,0xFE,0x2E,0x00,
    0x00,0x00,0x00,0x00,0x00,0x15,0xF2,0xFF,0xCA,0x00,0x05,0xF7,0xFF,0xC6,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x9E,0xFF,0xFF,0x22,0x32,0xFF,0xFF,0x8A,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x61,0xFF,0xFF,0x57,0x49,0xFF,0xFF,0x6B,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x41,0xFF,0xFF,0x70,0x53,0xFF,0xFF,0x63,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x37,0xFF,0xFF,0x82,0x3F,0xFF,0xFF,0x6E,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x43,0xFF,0xFF,0x75,0x26,0xFF,0xFF,0x8F,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x65,0xFF,0xFF,0x5D,0x03,0xEB,0xFF,0xCD,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xA4,0xFF,0xFF,0x26,0x00,0x99,0xFF,0xFF,0x36,0x00,
    0x00,0x00,0x00,0x00,0x00,0x18,0xF5,0xFF,0xD5,0x00,0x00,0x28,0xF7,0xFF,0xD5,0x14,
    0x00,0x00,0x00,0x00,0x08,0xB9,0xFF,0xFF,0x5E,0x00,0x00,0x00,0x71,0xFF,0xFF,0xE9,
    0x83,0x51,0x4D,0x77,0xDB,0xFF,0xFF,0xAD,0x00,0x00,0x00,0x00,0x00,0x6A,0xFB,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xA1,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x8A,
    0xD0,0xF0,0xF6,0xDE,0xA0,0x3C,0x00,0x00,0x00,0x00,0x74,0xFF,0xC5,0x00,0x03,0x65,
    0xC7,0xEB,0xF7,0xDC,0x96,0x23,0x00,0x00,0x00,0x74,0xFF,0xE7,0x0B,0xBC,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xF8,0x5A,0x00,0x00,0x74,0xFF,0xFF,0xB4,0xFF,0xB5,0x65,0x4A,
    0x5A,0xA8,0xFF,0xFF,0xFD,0x3F,0x00,0x74,0xFF,0xFF,0xFF,0x6D,0x00,0x00,0x00,0x00,
    0x00,0x62,0xFF,0xFF,0xD6,0x00,0x74,0xFF,0xFF,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0xB8,0xFF,0xFF,0x3C,0x74,0xFF,0xFF,0x77,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x55,0xFF,0xFF,0x7D,0x74,0xFF,0xFF,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1B,
    0xFF,0xFF,0xAA,0x74,0xFF,0xFF,0x36,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFB,
    0xFF,0xBD,0x74,0xFF,0xFF,0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF4,0xFF,
    0xC8,0x74,0xFF,0xFF,0x3A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xFF,0xFF,0xBC,
    0x74,0xFF,0xFF,0x56,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x23,0xFF,0xFF,0xA8,0x74,
    0xFF,0xFF,0x88,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0xFF,0xFF,0x78,0x74,0xFF,
    0xFF,0xDC,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0xC6,0xFF,0xFF,0x34,0x74,0xFF,0xFF,
    0xFF,0x7E,0x00,0x00,0x00,0x00,0x00,0x73,0xFF,0xFF,0xCD,0x00,0x74,0xFF,0xFF,0xDA,
    0xFF,0xBC,0x67,0x4B,0x5F,0xB0,0xFF,0xFF,0xFB,0x35,0x00,0x74,0xFF,0xFF,0x30,0xD4,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF6,0x50,0x00,0x00,0x74,0xFF,0xFF,0x24,0x09,0x73,
    0xCB,0xEE,0xF7,0xDB,0x93,0x1F,0x00,0x00,0x00,0x74,0xFF,0xFF,0x2F,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x74,0xFF,0xBF,0x00,0x00,0x35,0xB4,0xE9,0xFF,0xE0,0x74,0xFF,0xD7,0x00,
    0x67,0xFE,0xFF,0xFF,0xFF,0xC1,0x74,0xFF,0xEF,0x49,0xFF,0xF2,0x8C,0x53,0x60,0x67,
    0x74,0xFF,0xFF,0xE9,0xD9,0x21,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0xF8,0x2B,0x00,
    0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0xA4,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,
    0xFF,0x59,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x3B,0x00,0x00,0x00,0x00,
    0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,
    0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,
    0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,
    0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,
    0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,
    0x00,0x00,0x74,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,0x81,
    0xC9,0xEF,0xFC,0xF1,0xD2,0x98,0x42,0x03,0x00,0x00,0x48,0xF2,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0x81,0x00,0x14,0xF1,0xFF,0xF5,0x92,0x59,0x49,0x5B,0x8D,0xDC,
    0xFD,0x22,0x00,0x5E,0xFF,0xFF,0x4F,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x00,0x00,
    0x6F,0xFF,0xFF,0x19,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x49,0xFF,0xFF,
    0x96,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xD0,0xFF,0xFF,0xD1,0x57,
    0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,0xBB,0xFF,0xFF,0xFF,0xE8,0x86,0x1F,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4A,0xBF,0xFF,0xFF,0xFF,0xFB,0x9C,0x12,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x2B,0x94,0xF5,0xFF,0xFF,0xE1,0x1A,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x15,0xA6,0xFF,0xFF,0xA7,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x01,0xC2,0xFF,0xEE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x97,0xFF,0xFA,0x00,0x34,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0xE1,0xFF,
    0xD4,0x00,0x70,0xFF,0xCC,0x88,0x5A,0x48,0x4F,0x79,0xDD,0xFF,0xFF,0x6B,0x00,0x6F,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x92,0x02,0x00,0x06,0x5B,0xAB,0xDB,
    0xF4,0xFD,0xF3,0xD5,0x9A,0x36,0x00,0x00,0x00,0xC6,0xFF,0xF7,0x0F,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xB8,0xFF,0xFE,0x1E,0x63,0xFF,0xFF,0x65,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x15,0xFB,0xFF,0xBF,0x00,0x0C,0xF3,0xFF,0xC3,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x6A,0xFF,0xFF,0x61,0x00,0x00,0x9C,0xFF,0xFE,0x21,0x00,0x00,
    0x00,0x00,0x00,0x00,0xC2,0xFF,0xF5,0x0D,0x00,0x00,0x38,0xFF,0xFF,0x7F,0x00,0x00,
    0x00,0x00,0x00,0x1C,0xFE,0xFF,0xA5,0x00,0x00,0x00,0x00,0xD4,0xFF,0xDD,0x00,0x00,
    0x00,0x00,0x00,0x73,0xFF,0xFF,0x47,0x00,0x00,0x00,0x00,0x71,0xFF,0xFF,0x3C,0x00,
    0x00,0x00,0x00,0xCC,0xFF,0xE6,0x03,0x00,0x00,0x00,0x00,0x13,0xF9,0xFF,0x9A,0x00,
    0x00,0x00,0x25,0xFF,0xFF,0x8B,0x00,0x00,0x00,0x00,0x00,0x00,0xA9,0xFF,0xEF,0x08,
    0x00,0x00,0x7D,0xFF,0xFF,0x2D,0x00,0x00,0x00,0x00,0x00,0x00,0x46,0xFF,0xFF,0x55,
    0x00,0x00,0xD4,0xFF,0xCF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xE0,0xFF,0xAD,
    0x00,0x27,0xFF,0xFF,0x71,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0xFF,0xF7,
    0x0D,0x79,0xFF,0xFB,0x17,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1D,0xFD,0xFF,
    0x4D,0xC9,0xFF,0xB5,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB7,0xFF,
    0xA2,0xFE,0xFF,0x57,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x53,0xFF,
    0xFF,0xFF,0xF0,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0xEA,
    0xFF,0xFF,0x9B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x97,
    0xFF,0xFF,0x3D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD0,
    0xFF,0xDE,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0xFF,
    0xFF,0x81,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xAB,0xFF,
    0xF9,0x1A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0xFE,0xFF,
    0x9B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x4D,0x54,0x96,0xFC,0xFF,0xE7,
    0x17,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xAC,0xFF,0xFF,0xFF,0xFF,0xF6,0x41,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8C,0xEF,0xFB,0xE9,0xA9,0x2D,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

leRasterFont Arial_30 =
{
    {
        {
            LE_STREAM_LOCATION_ID_INTERNAL, // data location id
            (void*)Arial_30_data, // data address pointer
            6345, // data size
        },
        LE_RASTER_FONT,
    },
    31,
    23,
    LE_FONT_BPP_8, // bits per pixel
    Arial_30_glyphs, // glyph table
};
