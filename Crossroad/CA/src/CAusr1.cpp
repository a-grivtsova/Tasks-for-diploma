#include "CAusr1.h"
#include "msg_queue.h"

/*CA algoblock*/ 

QueueMsg last_msg;

MsgQueue MainInputQueue;
MsgQueue MainOutputQueue;


int GetOutMsgNumber_GUI(void)
{
	return GetLenMsgQueue(&MainOutputQueue);
}
//������� ��� GetNextMsgGUI(�����);
int GetNextMsgGUI(void)
{
	return GetHeadMsgQueue(&MainInputQueue, &last_msg);
}

//������� ���  GetMsgGUICode        (�����);  /*������ �� ������ ���� ������� */
int GetMsgGUICode()
{
	return last_msg.code;
}

//������� ���� GetFloatParamGUI     (�����);  /*������ �� ������ ��������� ������� */
float GetFloatParamGUI()
{
	return last_msg.param.pr_float;
}

/* ������� ���� GetShortParamGUI     (�����); */
short GetShortParamGUI()
{
	return last_msg.param.pr_short[0];
}

//������� ���  GetIntParamGUI       (�����);
int GetIntParamGUI()
{
	return last_msg.param.pr_int;
}

//������� ���� GetLongParamGUI      (�����);
long GetLongParamGUI()
{
	return last_msg.param.pr_long;
}

//������� ���  SendMsgGUICode       (���);
int SendMsgGUICode(int code)
{
	return PutTailMsgQueue(&MainOutputQueue, code);
}

//������� ���  SendMsgFloatParamGUI (���, ����);
int SendMsgFloatParamGUI(int code, float param)
{
	return PutTailMsgQueueF(&MainOutputQueue, code, param);

}

/* ������� ���  SendMsgShortParamGUI (���, ����); */
int SendMsgShortParamGUI(int code, short param)
{
	return PutTailMsgQueueS(&MainOutputQueue, code, param);

}

/* ������� ���  SendMsgIntParamGUI   (���, ���); */
int SendMsgIntParamGUI(int code, int param)
{
	return PutTailMsgQueueI(&MainOutputQueue, code, param);

}

//������� ���  SendMsgLongParamGUI  (���, ����);
int SendMsgLongParamGUI(int code, long param)
{
	return PutTailMsgQueueL(&MainOutputQueue, code, param);
}

//������� ���  GetInpMsgNumber_GUI (�����);  /* ������ ����� �����. �� �����. ������ */
int GetInpMsgNumber_GUI()
{
	return GetLenMsgQueue(&MainInputQueue);
}

int GetBit(float val, int num)
{
	int int_val = *(int*)(&val);
	int local = (int_val >> ((3 - num) * 8)) & 0xFF; 
	return local; 
}


float PortsToFloat( int zero_bit,  int first,  int second,  int third)
{
	int int_rez = ((zero_bit & 0xFF) << 24) 
				+ ( (first & 0xFF) << 16 ) 
				+ (( second& 0xFF) << 8 ) + (third & 0xFF);
				
	float rez = *(float *)(&int_rez);
	return rez;
}