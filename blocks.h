//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

	/*Icon*/	/*Command*/		                                            /*Update Interval*/	/*Update Signal*/
	{"",   "sh /home/dil/suckless/dwmblocks/cpu.sh", 	                	            5,     	0},
	{"", "free -h | awk '/^Mem/ { print $3}' | sed s/i//g",                            5,  	0},
	{"", "awk -F\"[][]\" '/Left:/ { print $2 }' <(amixer sget Master)",             	60,		0},
	{"", "light -G",                              	                                    60,		0},
	{"", "cat /sys/class/power_supply/BAT0/capacity",       	                        90,		0},
	{"", "date '+%b %d(%a)'",					                                        3600,  	0},
	{"", "date '+%I:%M%p'",				                                        	60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
