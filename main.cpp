#include <iostream>
#include <string>
#include "User.h"
#pragma comment(lib, "ws2_32.lib")
using namespace std;
int main() {
	string userName = "admin";
	string password = "admin";
	sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(0);
	addr.sin_addr.S_un.S_addr = INADDR_ANY;
	User user(userName, password, 1, addr, NULL, 0);
	cout << user.getUserName() << endl;
}