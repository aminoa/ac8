//
// Created by aneesh on 5/3/22.
//

#ifndef CHIP8_EMU_CHIP8_H
#define CHIP8_EMU_CHIP8_H

#include <array>
class chip8 {
public:
    chip8();

    void initialize();
    void emulateCycle();

private:
    int pc;
    int opcode;
    //16 bit type
    unsigned short memory[0xFFF]; //0 to 0xFFF bytes
    //regs - 8 bits (0 - FF)
    int V;
    //address reg - 16 bits (can only load 12 bit addrs)
    int I; //index pointer
    int sp; //stack pointer
};


#endif //CHIP8_EMU_CHIP8_H
