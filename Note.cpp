#include "Note.h"
namespace hoel {
double Note::sampleRate = 44100;
unordered_map<string, double> Note::keyFrequencyMap = {
    // Octave 0 through 2 not done because of how low they are
    // Octave 3
    {"C3", 125},
    {"C#3", 142},
    {"D3", 150},
    {"Eb3", 155},
    {"E3", 167},
    {"F3", 176},
    {"F#3", 185},
    {"G3", 195},
    {"G#3", 210},
    {"A3", 220},
    {"Bb3", 237},
    {"B3", 250},
    // Octave 4
    {"C4", 262},
    {"C#4", 278},
    {"D4", 294},
    {"Eb4", 313},
    {"E4", 332},
    {"F4", 350},
    {"F#4", 372},
    {"G4", 393},
    {"G#4", 421},
    {"A4", 447},
    {"Bb4", 475},
    {"B4", 497},
    // Octave 5
    {"C5", 523},
    {"C#5", 562},
    {"D5", 590},
    {"Eb5", 624},
    {"E5", 661},
    {"F5", 710},
    {"F#5", 750},
    {"G5", 787},
    {"G#5", 835},
    {"A5", 882},
    {"Bb5", 940},
    {"B5", 997},

};
} // namespace hoel
