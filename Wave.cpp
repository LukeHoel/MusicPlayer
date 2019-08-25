#include "Wave.h"
namespace hoel {
void Wave::play(Note note) {
  switch (type) {
  case (square):
    if (switcherTimer++ >= note.frequency) {
      on = !on;
      switcherTimer = 0;
    }
    cout << on;
    break;
  }
}
} // namespace hoel
