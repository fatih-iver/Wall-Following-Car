#include "LPC407x_8x_177x_8x.h"
#include "Library/Mercedes.h"

int main() {
	Mercedes_Init();
	
	while(1) {
		Mercedes_Update();
	}
}

