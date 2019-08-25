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
  // MusicPlayer player;
  // player.testOctave('0');
  // player.testOctave('1');
  // player.testOctave('2');
  // player.testOctave('3');
  // player.testOctave('4');
  // player.testOctave('5');
  // player.testOctave('6');
  // player.testOctave('7');
  // player.testOctave('8');

  // Utility variables
  bool switcher = false;
  int switcherTimer = 0;
  int noteTimer = 0;
  int currentNote = 0;

  while (true) {
    if (noteTimer++ >= MusicPlayer::noteLength) {
      currentNote++;
      if (currentNote > player.notes.size() - 1) {
        currentNote = 0;
      }
      noteTimer = 0;
    }
    // Switch between high and low
    if (switcherTimer++ >= player.notes[currentNote].frequency) {
      switcher = !switcher;
      switcherTimer = 0;
    }
    cout << (switcher ? 1 : -0);
  }
  return 0;
}