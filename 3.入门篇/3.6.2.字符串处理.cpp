//#include<cstdio>
//#include<cstring>
//int main() {
//	char str[90],ans[90][90];
//	gets_s(str);
//	int len = strlen(str),i = 0,j=0;
//	for (int k = 0; k < len; k++)
//	{
//		
//			if (str[k] != ' ') {
//				ans[i][j] = str[k];
//				j++;
//			}
//			else {
//				ans[i][j] = '\0';
//				i++;
//				j = 0;
//			}
//		
//	}
//	ans[i][j] = '\0';//Ï¸½Ú
//	for (; i >= 0; i--) {
//		printf("%s", ans[i]);
//		if (i > 0)printf(" ");
//
//	}
//	return 0;
//}