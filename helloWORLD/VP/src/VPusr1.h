#ifndef _VPusr1_h
#define _VPusr1_h 1
/* VPUSR1.H file. Place your code here. */
/* It will be included at the top of all include-files in every generated file. */

int GetOutMsgNumberFromScenariousBlock(void);

//������� ��� GetMessageFromScenariousBlock(�����);
int GetMessageFromScenariousBlock(void);

//������� ���  GetMessageCodeFromScenariousBlock        (�����);  /*������ �� ������ ���� ������� */
int GetMessageCodeFromScenariousBlock();

//������� ���� GetFloatParamFromScenariousBlock     (�����);  /*������ �� ������ ��������� ������� */
float GetFloatParamFromScenariousBlock();

/* ������� ���� GetShortParamFromScenariousBlock     (�����); */
short GetShortParamFromScenariousBlock();

//������� ���  GetIntParamFromScenariousBlock       (�����);
int GetIntParamFromScenariousBlock();

//������� ���� GetLongParamFromScenariousBlock      (�����);
long GetLongParamFromScenariousBlock();

//������� ���  SendMsgToGUICode       (���);
int SendMsgToGUICode(int code);

//������� ���  SendMsgFloatParamToGUI (���, ����);
int SendMsgFloatParamToGUI(int code, float param);

/* ������� ���  SendMsgShortParamToGUI (���, ����); */
int SendMsgShortParamToGUI(int code, short param);

/* ������� ���  SendMsgIntParamToGUI   (���, ���); */
int SendMsgIntParamToGUI(int code, int param);

//������� ���  SendMsgLongParamToGUI  (���, ����);
int SendMsgLongParamToGUI(int code, long param);

//������� ���  GetInpMsgNumber_FromScenariousBlock (�����);  /* ������ ����� �����. �� �����. ������ */
int GetInpMsgNumber_FromScenariousBlock();

//������� ���  GetOutMsgNumber_FromScenariousBlock (�����); /* ������ ����� �����. � ������. ������ */*/
int GetOutMsgNumber_FromScenariousBlock();

/*float - source, int - desired bit*/
int GetBit(float,int);

float PortsToFloat( int zero_bit, int first, int second, int third);

float SQRT(float); 
#endif