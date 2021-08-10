#include<windows.h>
#include <iostream>
using namespace std;
int main(){
	cout << "t(ms)";
	int t;
	cin >> t;
	while(1){
        mouse_event (MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0 );
        Sleep(t);
    }
}


