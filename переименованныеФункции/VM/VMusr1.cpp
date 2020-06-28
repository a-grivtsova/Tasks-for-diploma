#include "VMusr1.h"
#include "msg_queue.h"
QueueMsg last_msg_from_algorithm;
QueueMsg last_msg_from_dispatcher;

MsgQueue AlgorithmInputQueue;
MsgQueue DispatcherInputQueue;

MsgQueue MainGUIOutputQueue;
MsgQueue DispatcherOutputQueue;

int GetOutMsgNumber_GUI(void)
{
	return GetLenMsgQueue(&MainGUIOutputQueue);
}

int GetOutDispatcherMsgNumber_GUI(void)
{
	return GetLenMsgQueue(&DispatcherOutputQueue);
}

/************************/
/*Algorithm Input msg queue*/
/************************/
//������� ��� GetNextMsgGUI(�����);
int GetNextMsgFromAlgorithm(void)
{
	return GetHeadMsgQueue(&AlgorithmInputQueue, &last_msg_from_algorithm);
}

//������� ���  GetMsgCodeFromAlgorithm        (�����);  /*������ �� ������ ���� ������� */
int GetMsgCodeFromAlgorithm()
{
	return last_msg_from_algorithm.code;
}

//������� ���� GetFloatParamFromAlgorithm     (�����);  /*������ �� ������ ��������� ������� */
float GetFloatParamFromAlgorithm()
{
	return last_msg_from_algorithm.param.pr_float;

}
//������� ���� GetLongParamFromAlgorithm      (�����);
long GetLongParamFromAlgorithm()
{
	return last_msg_from_algorithm.param.pr_long;
}

/************************/
/*Dispatcher Input msg queue*/
/************************/
//������� ��� GetNextMsgGUI(�����);
int GetNextMsgFromDispatcher(void)
{
	return GetHeadMsgQueue(&DispatcherInputQueue, &last_msg_from_dispatcher);
}

//������� ���  GetMsgCodeFromDispatcher        (�����);  /*������ �� ������ ���� ������� */
int GetMsgCodeFromDispatcher()
{
	return last_msg_from_dispatcher.code;
}

//������� ���� GetFloatParamFromDispatcher     (�����);  /*������ �� ������ ��������� ������� */
float GetFloatParamFromDispatcher()
{
	return last_msg_from_dispatcher.param.pr_float;

}
//������� ���� GetLongParamFromDispatcher      (�����);
long GetLongParamFromDispatcher()
{
	return last_msg_from_dispatcher.param.pr_long;
}


/************************/
/*  Output GUI msg queue*/
/************************/
//������� ���  SendMsgGUICode       (���);
int SendMsgGUICode(int code)
{
	return PutTailMsgQueue(&MainGUIOutputQueue, code);
}

//������� ���  SendMsgFloatParamGUI (���, ����);
int SendMsgFloatParamGUI(int code, float param)
{
	return PutTailMsgQueueF(&MainGUIOutputQueue, code, param);

}

/* ������� ���  SendMsgShortParamGUI (���, ����); */
int SendMsgShortParamGUI(int code, short param)
{
	return PutTailMsgQueueS(&MainGUIOutputQueue, code, param);

}

/* ������� ���  SendMsgIntParamGUI   (���, ���); */
int SendMsgIntParamGUI(int code, int param)
{
	return PutTailMsgQueueI(&MainGUIOutputQueue, code, param);

}

//������� ���  SendMsgLongParamGUI  (���, ����);
int SendMsgLongParamGUI(int code, long param)
{
	return PutTailMsgQueueL(&MainGUIOutputQueue, code, param);
}



/********/
/*Dispatcher  Output msg queue*/
/********/

//������� ���  SendMsgToDispatcher       (���);
int SendMsgToDispatcher(int code)
{
	return PutTailMsgQueue(&DispatcherOutputQueue, code);
}

//������� ���  SendMsgFloatParamDispatcher (���, ����);
int SendMsgFloatParamDispatcher(int code, float param)
{
	return PutTailMsgQueueF(&DispatcherOutputQueue, code, param);

}

/* ������� ���  SendMsgShortParamDispatcher (���, ����); */
int SendMsgShortParamDispatcher(int code, short param)
{
	return PutTailMsgQueueS(&DispatcherOutputQueue, code, param);

}

/* ������� ���  SendMsgIntParamDispatcher   (���, ���); */
int SendMsgIntParamDispatcher(int code, int param)
{
	return PutTailMsgQueueI(&DispatcherOutputQueue, code, param);

}

//������� ���  SendMsgLongParamDispatcher  (���, ����);
int SendMsgLongParamDispatcher(int code, long param)
{
	return PutTailMsgQueueL(&DispatcherOutputQueue, code, param);
}

float PortsToFloat(int zero_bit, int first, int second, int third)
{
			int int_rez = ((zero_bit & 0xFF) << 24) 
				+ ( (first & 0xFF) << 16 ) 
				+ (( second& 0xFF) << 8 ) + (third & 0xFF);
				
	float rez = *(float *)(&int_rez);
	return rez;
}

float ABS(float f)
{
	if (f >= 0) return f;
	else return -f;
	
}









