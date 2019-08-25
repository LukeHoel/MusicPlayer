#include "MusicPlayer.h"
namespace hoel {
MusicPlayer::MusicPlayer(ifstream file) {
  string noteName;
  while (file >> noteName) {
    // Allow for comments
    if (noteName.find("//") == string::npos) {
      notes.push_back(Note(noteName));
    }
  }
}
int MusicPlayer::noteLength = Note::sampleRate / 8;
int MusicPlayer::amplitude = 500;
void MusicPlayer::testOctave(char octave) {
  string noteNames[12] = {"C",  "C#", "D",  "Eb", "E",  "F",
                          "F#", "G",  "G#", "A",  "Bb", "B"};
  for (int i = 0; i < 12; i++) {
    notes.push_back(Note(noteNames[i] + octave));
  }
}
} // namespace hoel
