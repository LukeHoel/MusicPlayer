#include "Note.h"
#include "Wave.h"
#include <fstream>
#include <unordered_map>
#include <vector>

using namespace std;
#ifndef PLAYER_H
#define PLAYER_H
namespace hoel {
class MusicPlayer {
  int noteTimer = 0;
  int currentNoteIndex = 0;

public:
  MusicPlayer() : wave(Wave(square)) {}
  MusicPlayer(ifstream);
  vector<Note> notes;
  Wave wave;
  static int noteLength;
  void testOctave(char, int = 0);
  void step();
  Note currentNote();
};
} // namespace hoel
#endif
