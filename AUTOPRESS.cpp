#include <iostream>
#include <windows.h>
using namespace std;

void down(int vk){
    keybd_event(vk,0,0,0);
}
void up(int vk){
    keybd_event(vk,0,2,0);
}

void press(int vk){
    down(vk);
    up(vk);
}
int main(){
	char c;
        cin >> c;
        int vk = VkKeyScan(c), t;
	cin >> t;
	while(1){
		press(vk);
		Sleep(t);
	}
}
