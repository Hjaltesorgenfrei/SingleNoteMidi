#include "midi.h"

void midiCommand(int commandByte)
{
	if (commandByte & CHANNELON) {
		enabledChannels[commandByte & CHANNELMASK] = 0x01;
	}
	else if (commandByte & CHANNELOFF) {
		enabledChannels[commandByte & CHANNELMASK] = 0x00;
	}
	currentChannel = commandByte & CHANNELMASK;
}

void midiChannelData(int dataByte)
{
	if (lastBitWasNote == 0x01){
		channelData[currentChannel][VELOCITY] = dataByte;
		lastBitWasNote = 0x00;
	}
	else if (lastBitWasNote == 0x00) {
		channelData[currentChannel][NOTE] = dataByte;
		lastBitWasNote = 0x01;
	}
}
