/*
題目名稱:作業1
製作:呂家明
修改/完成日期:2019/4/7
*/

#include<stdio.h>     //導入標頭檔
#include<stdlib.h>

int main() 
{
	char az; //定義顯示的十進位數(字串) 
	for (az=65; az<=90; az++)  //依序顯示上表65-90 
	{
		printf("%c ",az);
	}
	
	printf("\n");  //換行 
	for (az=97; az<=122; az++) //依序顯示上表97-122  
	{
		printf("%c ",az);
	}
	printf("\n");//換行 
	system ("pause"); //暫停 
	return 0; //回傳值 0 
}

