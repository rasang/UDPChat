#include<winsock2.h>

class User
{
	char name[15];// �û���
	int online; //�Ƿ�����
	char passwd[15]; // ����
	sockaddr_in addr; // �׽���
	Friends friends[50]; // ����
};

class Friends
{
	int name; // ������
	int available; // �Ƿ���ͨ���������룬1Ϊͨ����0Ϊ�Լ�������δȷ�ϣ�2Ϊ�������δͨ��
};