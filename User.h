#include"Friends.h"
#include<Winsock2.h>
class User
{
private:
	string userName;
	string password;
	int online;
	sockaddr_in addr;
	Friends* friends;
	int friendsSize;

public:
	User(string userName, string password, int online, sockaddr_in addr, Friends* friends, int friendsSize);
	string getUserName();
	string getPassword();
	int isOnline();
	sockaddr_in getAddr();
	Friends* getFriends(int * size);
};
