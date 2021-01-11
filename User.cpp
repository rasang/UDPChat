#include "User.h"
User::User(string userName, string password, int online, sockaddr_in addr, Friends* friends, int friendsSize) {
	this->userName = userName;
	this->password = password;
	this->online = online;
	this->addr = addr;
	this->friends = friends;
	this->friendsSize = friendsSize;
}

string User::getUserName() {
	return this->userName;
}

string User::getPassword() {
	return this->password;
}

int User::isOnline() {
	return this->online;
}

sockaddr_in User::getAddr() {
	return this->addr;
}

Friends* User::getFriends(int * size) {
	*size = this->friendsSize;
	return this->friends;
}