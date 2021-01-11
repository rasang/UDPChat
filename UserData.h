#include"User.h"
class UserData
{
private:
	User* user;
	int size;
public:
	void loadData();
	void saveData();
	int login(string userName, string passWord);
	int reg(string userName, string passWord);
	int deleteFriends(string userName, string FriendName);
	int requestAddFriend(string userName, string password);
	int confirmAddFriend(string userName, string friendName);
};
