#include <stdio.h>

int main(){
	printf("input a string\n");
	char i[50];
	char word;
	int pos = 1;
	while (pos <= 50)
		{scanf("%c",&word);
		if (word != 'b'){
			i[pos-1] = word;
			pos++;
		}
		else break;
	}
	printf("%s",i);
	return 0;
}
