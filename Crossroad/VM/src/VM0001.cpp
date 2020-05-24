/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "VMext.h" /* Common files for all generated c-files */
#include "VMxvar.h"  /* Var-images */

void P0 (void) /* �������: Init */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - ���������: Start */
	
			SendMsgSCMCode(C_10); 	
			Set_Start(1);
			Set_Stop(0);
			break;
		default:
			break;
	}
}

void P1 (void) /* �������: ReceiveSCMOutputMsg */
{
	switch (Check_State(1)) {

		case 0:    /*  P1S0() - ���������: Start */

			
			if(GetNextMsgFromSCM()) 
			{
				P1V0 = GetMsgCodeFromSCM();
				switch (P1V0) 				
				{						
					case C_6:
						SendMsgGUICode(C_12);
						Set_Start(3);
						Set_Start(4);						
						Set_Start(6);
						break;
						
					case C_5:
						SendMsgGUICode(C_11);
						Set_Start(5);
						Set_Start(7);
						break;
						
					case C_7:
						SendMsgGUICode(C_13);
						Set_Start(5);
						Set_Start(7);					
						break;
					
					case C_8:
						Set_Start(2); 
						break;

					case C_9:
						SendMsgGUICode(C_20);
						Set_Stop(4);	
						Set_Stop(6);
						Set_Stop(2); 
						Set_Stop(1);
						break;
				}
			}
			
			break;
		default:
			break;
	}
}

void P2 (void) /* �������: Terminator */
{
	switch (Check_State(2)) {

		case 0:    /*  P2S0() - ���������: Report */
			
			
			if((!(Check_State(5) & MASK_OF_INACTIVITY)))
			{
				SendMsgGUICode(C_15);
			}
			if((Check_State(5) == STATE_OF_ERROR))
			{
				SendMsgGUICode(C_18);
			}
			
			Set_Stop(5);
			
					
			if((!(Check_State(7) & MASK_OF_INACTIVITY)))
			{
				SendMsgGUICode(C_16);
			}

			if((Check_State(7) == STATE_OF_ERROR))
			{
				SendMsgGUICode(C_19);
			}
			
			Set_Stop(7);
			
					
			if((!(Check_State(3) & MASK_OF_INACTIVITY)))
			{
				SendMsgGUICode(C_14);
			}

			if((Check_State(3) == STATE_OF_ERROR)) 
			{
				SendMsgGUICode(C_17);
			}
			
			Set_Stop(3);
			Set_Stop(2);
			break;
		default:
			break;
	}
}

void P3 (void) /* �������: NoCarsControl */
{
	switch (Check_State(3)) {

		case 0:    /*  P3S0() - ���������: Start */

		if(!P0V0 && P0V1)
			Set_Error(3);
		
			break;
		default:
			break;
	}
}

void P4 (void) /* �������: OpenRoadDelayControl */
{
	switch (Check_State(4)) {

		case 0:    /*  P4S0() - ���������: Start */

			P4V2 = C_3;
			Set_State(4, 1);
			break;
		case 1:    /*  P4S1() - ���������: WaitingOfCar */

			if(P0V0 && !P0V1) 
				Set_State(4, 2);
			break;
		case 2:    /*  P4S2() - ���������: WaitingPCycles */

			if(P0V1) 
				P4V2 = C_4;
			if (Timeout(4, C_0))  Set_State(4, 3);
			break;
		case 3:    /*  P4S3() - ���������: PCyclesControl */

			if(P0V1) 
				Set_State(4, 0);
			if (Timeout(4, C_2)) 
			{
				P4V2 = C_4;
				Set_State(4, 0);
			}
			break;
		default:
			break;
	}
}

void P5 (void) /* �������: ErrorControlForOpenRoad */
{
	switch (Check_State(5)) {

		case 0:    /*  P5S0() - ���������: Start */

			if(P4V2 == C_4)
				Set_Error(5);
			
			break;
		default:
			break;
	}
}

void P6 (void) /* �������: CloseRoadDelayControl */
{
	switch (Check_State(6)) {

		case 0:    /*  P6S0() - ���������: Start */

			P6V2 = C_3;
			Set_State(6, 1);
			break;
		case 1:    /*  P6S1() - ���������: WaitingOfSwitching */

			if(P0V0 && P0V1) 
				Set_State(6, 2);
			break;
		case 2:    /*  P6S2() - ���������: WaitingKCycles */

			if(!P0V1) 
				P6V2 = C_4;
			if (Timeout(6, C_1))  Set_State(6, 3);
			break;
		case 3:    /*  P6S3() - ���������: KCyclesControl */

			if(!P0V1) 
				Set_State(6, 0);
			if (Timeout(6, C_2)) 
			{
				P6V2 = C_4;
				Set_State(6, 0);
			}
			break;
		default:
			break;
	}
}

void P7 (void) /* �������: ErrorControlForCloseRoad */
{
	switch (Check_State(7)) {

		case 0:    /*  P7S0() - ���������: Start */

			if(P6V2 == C_4)
				Set_Error(7);
			
			break;
		default:
			break;
	}
}
