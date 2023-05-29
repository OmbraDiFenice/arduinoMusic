#pragma once

#include <Arduino.h>

extern const unsigned int SPEAKER_PIN;
extern const unsigned int tempo;

template<unsigned int freq, unsigned long duration, unsigned int pitch = 0>
inline void play_note() {
    noTone(SPEAKER_PIN);
    constexpr float d = (duration / 100.f);
    tone(SPEAKER_PIN, freq << pitch, d * tempo);
    delay(d * tempo);
    noTone(SPEAKER_PIN);
}

template<unsigned long duration>
inline void pause() {
    delay((duration / 100.f) * tempo);
}

template<unsigned long duration, unsigned int pitch = 0> void C () { play_note<16, duration, pitch>(); } // C , C
template<unsigned long duration, unsigned int pitch = 0> void Cs() { play_note<17, duration, pitch>(); } // C#, C sharp
template<unsigned long duration, unsigned int pitch = 0> void Db() { play_note<17, duration, pitch>(); } // Db, D flat
template<unsigned long duration, unsigned int pitch = 0> void D () { play_note<18, duration, pitch>(); } // D , D
template<unsigned long duration, unsigned int pitch = 0> void Ds() { play_note<19, duration, pitch>(); } // D#, D sharp
template<unsigned long duration, unsigned int pitch = 0> void Eb() { play_note<19, duration, pitch>(); } // Eb, E flat
template<unsigned long duration, unsigned int pitch = 0> void E () { play_note<20, duration, pitch>(); } // E , E
template<unsigned long duration, unsigned int pitch = 0> void Fa() { play_note<21, duration, pitch>(); } // F , F
template<unsigned long duration, unsigned int pitch = 0> void Fs() { play_note<23, duration, pitch>(); } // F#, F sharp
template<unsigned long duration, unsigned int pitch = 0> void Gb() { play_note<23, duration, pitch>(); } // Gb, G flat
template<unsigned long duration, unsigned int pitch = 0> void G () { play_note<24, duration, pitch>(); } // G , G
template<unsigned long duration, unsigned int pitch = 0> void Gs() { play_note<25, duration, pitch>(); } // G#, G sharp
template<unsigned long duration, unsigned int pitch = 0> void Ab() { play_note<25, duration, pitch>(); } // Ab, A flat
template<unsigned long duration, unsigned int pitch = 0> void A () { play_note<27, duration, pitch>(); } // A , A
template<unsigned long duration, unsigned int pitch = 0> void As() { play_note<29, duration, pitch>(); } // A#, A sharp
template<unsigned long duration, unsigned int pitch = 0> void Bb() { play_note<29, duration, pitch>(); } // Bb, B flat
template<unsigned long duration, unsigned int pitch = 0> void B () { play_note<30, duration, pitch>(); } // B , B
template<unsigned long duration>                         void P () { pause<duration>(); }                // pause
