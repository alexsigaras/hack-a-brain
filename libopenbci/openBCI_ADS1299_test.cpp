#include "openBCI_ADS1299.cpp"
#include <iostream>
#include "TimeoutSerial.h"
int main(int argc, char * argv[])
{
  std::cout << "Testing openBCI_ADS1299 driver \n";
  TimeoutSerial serial(argv[1], 115200);
  byteCount = 0;
  openBCI_ADS1299<TimeoutSerial> ads_driver(serial, 8);
  int curPacketInd = 0;
  while(1)
    {
      ads_driver.read(echoBytes);
      byteCount++;
      if (ads_driver.isNewDataPacketAvailable) {
	//Get New packet here
	//dataPacket_ADS1299 new_packet(8);
	//ads_driver.copyDataPacketTo(new_packet);
    }
  std::cout << "Finished Test \n";
}
