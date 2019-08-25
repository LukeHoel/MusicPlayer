#include "Note.h"
#include <iostream>
#ifndef WAVE_H
#define WAVE_H
namespace hoel {
enum WaveType { square };
class Wave {
  bool on = false;
  int switcherTimer = 0;

public:
  WaveType type;
  Wave(WaveType type) : type(type) {}
  void play(Note);
};
} // namespace hoel
#endif
