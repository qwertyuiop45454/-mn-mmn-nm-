#include <stdio.h>

int main(){
	char arr[100];
	gets(arr);
	int i=0,j=0,k=0,l=0,p=0;
	while(arr[i]!='\0'){
		if(arr[i]>='a' && arr[i]<='z'){
			j++;
		}
		else if(arr[i]>='A' && arr[i]<='Z'){
			k++;
		}
		else if(arr[i]=' '){
			l++;
		}
		else {
			p++;
		}
		i++;
	}
	printf("Сд��%d",j);
	printf("��д��%d",k);
	printf("�ո�%d",l);
	printf("������%d",p);
	return 0;
} 
