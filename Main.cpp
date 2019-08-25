#include "MusicPlayer.cpp"
#include "Note.cpp"
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace hoel;

int main(int argc, char **argv) {

  if (argc < 2) {
    return 1;
  }

  MusicPlayer player = MusicPlayer(ifstream(argv[1]));

  // Utility variables
  bool switcher = false;
  int switcherTimer = 0;
  int noteTimer = 0;
  int currentNote = 0;

  short time = 0;
  while (true) {
    if (noteTimer++ >= MusicPlayer::noteLength) {
      currentNote++;
      if (currentNote > player.notes.size() - 1) {
        currentNote = 0;
      }
      noteTimer = 0;
    }
    // Switch between high and low
    if (switcherTimer++ >= 66) {
      switcher = !switcher;
      switcherTimer = 0;
    }
    cout << (switcher ? MusicPlayer::amplitude : -MusicPlayer::amplitude);
  }
  return 0;
}