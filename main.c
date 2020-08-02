#include <assert.h>

/* Finish initializing the flags */
const short FLAG_ON          = 1 << 0; // 1  (0x01)
const short FLAG_MOVEMENT    = 1 << 1; // 2  (0x02)
const short FLAG_TRANSPARENT = 1 << 2; // 4  (0x04)
const short FLAG_ALIVE       = 1 << 3;
const short FLAG_BROKEN      = 1 << 4;
const short FLAG_EDIBLE      = 1 << 5; // 32 (0x20)

int main() {
  short attributes = 0;

  /* If expression evaluates to FALSE, assert() displays an error message on stderr and aborts program execution. */
  attributes = FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN; /* Set the attributes ON, TRANSPARENT, and BROKEN */
  assert(attributes == FLAG_ON | FLAG_TRANSPARENT | FLAG_BROKEN);

  /* Modify (set/clear/toggle) so the only attributes are ON and ALIVE */
  attributes = FLAG_ON | FLAG_ALIVE;
  assert(attributes == FLAG_ON | FLAG_ALIVE);

  /* CHECK if the ALIVE flag is set - AND 1*/
  attributes = (1 << 3) & FLAG_ALIVE;
  #include <assert.h>
  assert(attributes == FLAG_ALIVE); // "prog: prog.cpp:23: int main(): Assertion `attributes == FLAG_ALIVE' failed."

  /* CHECK if the BROKEN flag is not set - AND 0 */
  attributes = FLAG_BROKEN & ~(1 << 4);
  assert(attributes == FLAG_BROKEN);

  /* MODIFY so only the EDIBLE attribute is set */
  attributes = FLAG_EDIBLE | (1 << 5);
  assert(attributes == FLAG_EDIBLE);
}