#include <string>
#include <unordered_map>
using namespace std;
#ifndef NOTE_H
#define NOTE_H
namespace hoel {
struct Note {
  static double sampleRate;
  static unordered_map<string, double> keyFrequencyMap;
  string noteName;
  int frequency;
  Note(string noteName)
      : noteName(noteName), frequency(sampleRate / keyFrequencyMap[noteName]) {}
};
} // namespace hoel
#endif
