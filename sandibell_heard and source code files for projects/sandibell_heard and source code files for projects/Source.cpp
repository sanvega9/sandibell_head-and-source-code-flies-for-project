#include <iostream>
#include <string>
#include "Sent_Amber_Alert.h"
#include "Setup_Amber_Alert.h"

using namespace std;



int main()
{
	// Title 
	cout << "\n\n\t\t*** Amber Alert  *** ";

	 SetupSoundAlert();
	 SetupEmergency();
	 SetupBroadcast();
	 SetupSMSTextmessage();
	 Senttextmessage();
	 SentBoradcast();
	 SentRoadsign();

	return 0;
}