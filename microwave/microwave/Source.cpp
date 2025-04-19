#include <iostream> 
#include <windows.h>
#include "pizza_image.h"
#include <fstream>
void microwave()
{
	while (true) {
	(Beep(1000, 500));
	Sleep(500);
	(Beep(1000, 500));
	break;
}
};

int main() {
	printf("food is cooking...\n");
	Sleep(5000);
	printf("bzz bzz\n");
	while (true) {
		microwave();
		printf("press enter to get food \n");
		if (GetAsyncKeyState(VK_RETURN) & 0x8000) {
			// Write the image data to a file
			std::ofstream imageFile("pizza.jpg", std::ios::binary);
			imageFile.write(reinterpret_cast<const char*>(pizza_image), pizza_image_size);
			imageFile.close();
			Sleep(5000);
			// Open the image in the Photos app
			ShellExecute(0, L"open", L"pizza.jpg", 0, 0, SW_SHOWNORMAL);

			break;
		}


	}
	std::cin.get();
	return 0;
}