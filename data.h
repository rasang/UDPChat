#include<winsock2.h>

class User
{
	char name[15];// 用户名
	int online; //是否在线
	char passwd[15]; // 密码
	sockaddr_in addr; // 套接字
	Friends friends[50]; // 好友
};

class Friends
{
	int name; // 好友名
	int available; // 是否已通过好友申请，1为通过，0为自己被请求未确认，2为请求别人未通过
};