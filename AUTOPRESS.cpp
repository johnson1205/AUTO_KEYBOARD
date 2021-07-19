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
	int vk, t;
	cin >> vk >> t;
	while(1){
		press(vk);
		_sleep(t);
	}
}
