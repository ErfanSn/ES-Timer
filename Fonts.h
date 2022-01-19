#include <avr/pgmspace.h>

// For conver bitmap to code you can use this website -> https://javl.github.io/image2cpp/

const PROGMEM byte numbers[][105] = {
  {
    // 0
    0x00, 0x00, 0x00, 0xc0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0xf8, 0xf8, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c,
    0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 0xc0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0xc3,
    0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x1f,
    0x1f, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x1f, 0x1f,
    0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x03, 0x00, 0x00, 0x00,
  },
  {
    // 1
    0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c,
    0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e,
    0x7c, 0x7c, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  },
  {
    // 2
    0x00, 0x00, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x38, 0xf8, 0xf8, 0xf8, 0xf0,
    0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3f,
    0x7e, 0xfc, 0xfc, 0xf8, 0xf0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0xe0,
    0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f,
    0x0f, 0x0f, 0x07, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00,
  },
  {
    // 3
    0x00, 0x00, 0xc0, 0xf8, 0xfc, 0xfc, 0xfc, 0x3c, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x38, 0xf8, 0xf8, 0xf8, 0xf0,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xe0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x80, 0x80, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0xc0, 0xe0,
    0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x0f, 0x1f, 0x1f,
    0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x01, 0x01, 0x03, 0x07, 0x0f, 0x0f, 0x0f, 0x0f,
    0x0f, 0x0f, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00,
  },
  {
    // 4
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xfc, 0xfc,
    0x3c, 0x7c, 0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x80, 0x80, 0x81, 0x83, 0x87, 0x8f, 0x9f, 0xbf, 0xfe, 0xfc, 0xf8, 0xf0,
    0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x7f, 0x7f, 0x7f, 0x7f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00,
  },
  {
    // 5
    0x00, 0x00, 0xc0, 0xf8, 0xf8, 0xf8, 0xf8, 0x38, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x70, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xe1, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0x80, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xff,
    0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x0f, 0x1f, 0x1f,
    0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00,
  },
  {
    // 6
    0x00, 0x00, 0x00, 0x80, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0xf8, 0xfc, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c,
    0x7c, 0xfc, 0xfc, 0xfc, 0xfc, 0x7c, 0x78, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0xc7, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xc1, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f,
    0xff, 0xff, 0xfe, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0f, 0x1f, 0x1f, 0x1f, 0x3e,
    0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x06, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00,
  },
  {
    // 7
    0x00, 0x00, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xfc, 0xfc,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x3f, 0x3f,
    0x7e, 0x7e, 0xfc, 0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0xff,
    0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x0f,
    0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00,
  },
  {
    // 8
    0x00, 0x00, 0x00, 0xc0, 0xf0, 0xf0, 0xf8, 0xf8, 0xfc, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0xf8, 0xf8,
    0xf0, 0xe0, 0xc0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 0xc0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0x03, 0x01, 0x00, 0x00, 0x00, 0x81, 0xc3,
    0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0f, 0x1f, 0x1f, 0x3f, 0x3e,
    0x3e, 0x3e, 0x3e, 0x3f, 0x3f, 0x1f, 0x0f, 0x07, 0x03, 0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x1f, 0x1f,
    0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x03, 0x00, 0x00, 0x00,
  },
  {
    // 9
    0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xf0,
    0xf8, 0xf8, 0xf8, 0xfc, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0xf8, 0xf8, 0xf8, 0xf0, 0xe0, 0xc0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x7f, 0xff, 0xff, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00,
    0x7f, 0xff, 0xff, 0xff, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0xc3,
    0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x0f, 0x0f,
    0x1f, 0x1f, 0x1e, 0x3e, 0x3f, 0x3f, 0x3f, 0x3f, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3f, 0x1f,
    0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x03, 0x00, 0x00, 0x00
  }
};

const PROGMEM byte dots[][32] = {
  {
    // hollow
    0x00, 0xc0, 0x30, 0x08, 0x04, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x08, 0x30, 0xc0, 0x00,
    0x00, 0x03, 0x0c, 0x10, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x20, 0x20, 0x10, 0x0c, 0x03, 0x00,
  },
  {
    // fill
    0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf0, 0xc0, 0x00,
    0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x0f, 0x03, 0x00
  },
  {
    // left half fill
    0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf0, 0xc0, 0x00,
    0x00, 0x03, 0x0c, 0x10, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x20, 0x20, 0x10, 0x0c, 0x03, 0x00
  },
  {
    // right half fill
    0x00, 0xc0, 0x30, 0x08, 0x04, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x08, 0x30, 0xc0, 0x00,
    0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x0f, 0x03, 0x00
  },
};
