#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include "types.h"

#include "sintab.h"

static inline u8 get_nco(u16 phase)
{
  phase >>= 7;
  return sintab[(phase & 0xff) ^ ((phase & 0x100) ? 0xff : 0x00)];
}


int main(void)
{
  DDRB = 7;

  u16 phase1 = 0;
  u16 phase2 = 0;
  u16 phase3 = 0;

  const int num_cycles = 4;
  const int denom = 4;

  for(;;) {
    u8 r = get_nco(phase1);
    u8 g = get_nco(phase2);
    u8 b = get_nco(phase3);
    phase1 += 20 * num_cycles / denom;
    phase2 += 21 * num_cycles / denom;
    phase3 += 22 * num_cycles / denom;
    
    // r = g = b = 255;

    for(u8 i = 0; i < num_cycles; i++)
    {
      for(u8 j = 0; j != 255; j++) {
        PORTB = ((r > j) ? 4 : 0) | ((g > j) ? 2 : 0) | ((b > j) ? 1 : 0);
        for(u8 k = 0; k < 16; k++) asm volatile("nop");
        PORTB = 0;
      }
    }
  }
  for(;;);
  return 0;
}
