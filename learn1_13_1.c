//ʵ�ֺ��� ToLowerCase()���ú�������һ���ַ������� str��
//�������ַ����еĴ�д��ĸת����Сд��ĸ��֮�󷵻��µ��ַ�����

char * toLowerCase(char * str){
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A'&&str[i] <= 'Z')
			str[i] = str[i] + 'a' - 'A';
		i++;

	}
	return str;
}
