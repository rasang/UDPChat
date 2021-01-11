#include "data.h"
// user.cpp
void loadData(User user[]);
void saveData(User user[], int size);
int login(User user[], int size, char userName[], char password[]);
int reg(User user[], int size, char userName[], char password[]);
int showFriends(User user[], int size, char userName[]);
int deleteFriend(User user[], int size, char userName[], char friendName[]);
int requestAddFriend(User user[], int size, char userName[], char friendName[]);
// process.cpp
int start(User user[], int port);