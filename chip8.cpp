//
// Created by aneesh on 5/3/22.
//

#include "chip8.h"
using namespace std;

chip8_fontset = [];

chip8::chip8()
{
    pc = 0x200;
    opcode = 0;
    I = 0;
    sp = 0;
    V0 = V1 = V2 = V3 = V4 = V5 = 0;


}

void chip8::initialize()
{
    pc = 0x200;
    opcode = 0;
    I = 0;
    sp = 0;

    //clear display
    //clear stack
    //clear regs V0-VF
    V0 = 0;


    //clear memory

    //load fontset
    for (int i = 0; i < 80; ++i) {
        memory[i] = chip8_fontset[i];
    }

    //reset timers
}

void chip8::emulateCycle()
{
    //Fetch, decode, execute, update timer
}

