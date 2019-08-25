#include "MusicPlayer.h"
namespace hoel {
int MusicPlayer::noteLength = Note::sampleRate / 2;

MusicPlayer::MusicPlayer(ifstream file) : wave(Wave(square)) {
  string noteName;
  while (file >> noteName) {
    // Allow for comments
    if (noteName.find("//") == string::npos) {
      notes.push_back(Note(noteName));
    }
  }
}
void MusicPlayer::testOctave(char octave, int startAt) {
  string noteNames[12] = {"C",  "C#", "D",  "Eb", "E",  "F",
                          "F#", "G",  "G#", "A",  "Bb", "B"};
  for (; startAt < 12; startAt++) {
    notes.push_back(Note(noteNames[startAt] + octave));
  }
}
void MusicPlayer::step() {
  if (noteTimer++ >= MusicPlayer::noteLength) {
    currentNoteIndex++;
    if (currentNoteIndex > notes.size() - 1) {
      currentNoteIndex = 0;
    }
    noteTimer = 0;
  }
  wave.play(currentNote());
}
Note MusicPlayer::currentNote() { return notes[currentNoteIndex]; }
} // namespace hoel
