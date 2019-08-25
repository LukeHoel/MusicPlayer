#include "Note.h"
#include <fstream>
#include <unordered_map>
#include <vector>

using namespace std;
#ifndef PLAYER_H
#define PLAYER_H
namespace hoel {
struct MusicPlayer {
  MusicPlayer() {}
  MusicPlayer(ifstream);
  vector<Note> notes;
  static int noteLength;
  void testOctave(char, int = 0);
};
} // namespace hoel
#endif
