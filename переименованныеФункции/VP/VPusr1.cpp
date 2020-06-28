#include "vpusr1.h"
#include "msg_queue.h"
QueueMsg last_msg;

MsgQueue MainInputQueue;
MsgQueue MainOutputQueue;


int GetOutMsgNumberFromDispatcher(void)
{
	return GetLenMsgQueue(&MainOutputQueue);
}
//������� ��� GetMessageFromDispatcher(�����);
int GetMessageFromDispatcher(void)
{
	return GetHeadMsgQueue(&MainInputQueue, &last_msg);
}

//������� ���  GetMessageCodeFromDispatcher        (�����);  /*������ �� ������ ���� ������� */
int GetMessageCodeFromDispatcher()
{
	return last_msg.code;
}

//������� ���� GetFloatParamFromDispatcher     (�����);  /*������ �� ������ ��������� ������� */
float GetFloatParamFromDispatcher()
{
	return last_msg.param.pr_float;
}

/* ������� ���� GetShortParamFromDispatcher     (�����); */
short GetShortParamFromDispatcher()
{
	return last_msg.param.pr_short[0];
}

//������� ���  GetIntParamFromDispatcher       (�����);
int GetIntParamFromDispatcher()
{
	return last_msg.param.pr_int;
}

//������� ���� GetLongParamFromDispatcher      (�����);
long GetLongParamFromDispatcher()
{
	return last_msg.param.pr_long;
}

//������� ���  SendMsgToGUICode       (���);
int SendMsgToGUICode(int code)
{
	return PutTailMsgQueue(&MainOutputQueue, code);
}

//������� ���  SendMsgFloatParamToGUI (���, ����);
int SendMsgFloatParamToGUI(int code, float param)
{
	return PutTailMsgQueueF(&MainOutputQueue, code, param);

}

/* ������� ���  SendMsgShortParamToGUI (���, ����); */
int SendMsgShortParamToGUI(int code, short param)
{
	return PutTailMsgQueueS(&MainOutputQueue, code, param);

}

/* ������� ���  SendMsgIntParamToGUI   (���, ���); */
int SendMsgIntParamToGUI(int code, int param)
{
	return PutTailMsgQueueI(&MainOutputQueue, code, param);

}

//������� ���  SendMsgLongParamToGUI  (���, ����);
int SendMsgLongParamToGUI(int code, long param)
{
	return PutTailMsgQueueL(&MainOutputQueue, code, param);
}

//������� ���  GetInpMsgNumber_FromDispatcher (�����);  /* ������ ����� �����. �� �����. ������ */
int GetInpMsgNumber_FromDispatcher()
{
	return GetLenMsgQueue(&MainInputQueue);
}

int GetBit(float val, int num)
{
	int int_val = *(int*)(&val);
	int local = (int_val >> ((3 - num) * 8)) & 0xFF; 
	return local; 
}


float PortsToFloat( int zero_bit,  int first,  int second, int third)
{
		int int_rez = ((zero_bit & 0xFF) << 24) 
				+ ( (first & 0xFF) << 16 ) 
				+ (( second& 0xFF) << 8 ) + (third & 0xFF);
				
	float rez = *(float *)(&int_rez);
	return rez;
}
#include <math.h>
float SQRT(float f)
{
	return sqrt(f);
	
}