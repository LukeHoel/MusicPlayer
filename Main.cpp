#include "MusicPlayer.cpp"
#include "Note.cpp"
#include "Wave.cpp"
#include <chrono>
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using namespace chrono;
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
  bool on = false;
  int switcherTimer = 0;
  while (true) {
    player.step();
  }
  return 0;
}