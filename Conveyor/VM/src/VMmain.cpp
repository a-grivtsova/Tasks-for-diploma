/* MAIN FILE OF THE PROJECT */
#include "VMext.h" /* Common files for all generated c-files */
#include "VMproc.h"  /* Process-functions desription */
#include "VMgvar.h"  /* Project variables images */
#include "VMio.h"    /* Scan-input/output functions */
void Control_Loop(void);  /* for r_main.h */
#include "r_main.h"  /* Codes of the main-function that calls Control_Loop */

void Control_Loop (void)    /* ����������� �������� */
{
	Input();
	P0();  /* Process Init */
	P1();  /* Process ReceiveCAOutputMsg */
	P2();  /* Process ReceiveSCMOutputMsg */
	P3();  /* Process Terminator */
	P4();  /* Process PresenceSensorControl */
	P5();  /* Process ColorSensorsControl */
	P6();  /* Process GreenBoxControl */
	P7();  /* Process RedBoxControl */
	P8();  /* Process BlueBoxControl */
	P9();  /* Process MainConveyorControl */
	Output();
	Prepare_PSW((INT16S)(PROCESS_N1), (INT16S)PROCESS_Nn);
}