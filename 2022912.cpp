#include<stdio.h>
//ʮ����תΪΪ������

int main()
{
	int n=0;
	int i=0;
	int j=0;
	int arr[10]={0};
	scanf("%d",&n);
	while(n)
{
		arr[i]=n%6;    //�ó������Ƶ����һλ
		i++;           
		n=n/6;       //ȥ��ÿ�ε����һλ

}

	for(j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);  //�Ӻ�һλ��ǰ��ӡ��Ҫ��
		//i-1����ʼ��ӡ
	}
	return 0;
}




