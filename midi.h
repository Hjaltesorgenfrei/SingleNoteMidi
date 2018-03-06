#pragma once

#define CHANNELON    0b10000000
#define CHANNELOFF   0b10010000
#define CHANNELMASK  0b00001111

#define NOTE	     0
#define VELOCITY     1


int currentChannel;
int enabledChannels[16];
int channelData[16][2];
int lastBitWasOn;

void midiCommand(int commandByte);

void midiChannelData(int dataByte);