#include<stdio.h>
//十进制转为为六进制

int main()
{
	int n=0;
	int i=0;
	int j=0;
	int arr[10]={0};
	scanf("%d",&n);
	while(n)
{
		arr[i]=n%6;    //得出六进制的最后一位
		i++;           
		n=n/6;       //去除每次的最后一位

}

	for(j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);  //从后一位向前打印，要从
		//i-1处开始打印
	}
	return 0;
}




