// ��Ҫ���ǵ����������
// ������������һ������, �����Կ��ǵ���������. һ���ܴ�������ַ���, ת�� int ���ܳ��� int �ı�ʾ��Χ
int MyAtoi(const char* str) {
	int flag = 1;   // ���������������
	int ret = 0;	 // �������ս��
	if (str == NULL || *str == '\0') {
		return 0;
	}
	// 1. ����հ��ַ�(�ո�, ����, �س�, �Ʊ��, ��ֱ�Ʊ��, ��ҳ��...)
	while (isspace(*str)) {
		str++;
	}
	// 2. ���� + - �ŵ����
	if (*str == '-') {
		flag = -1;
		str++;
	}
	if (*str == '+') {
		str++;
	}
	// 3. ���������ַ�
	while (*str != '\0') {
		if (isdigit(*str)) {
			// �ַ���ת���ֵĺ��Ĳ���
			ret = ret * 10 + (*str - '0');
		}
		else {
			return ret;
		}
		str++;
	}
	return ret * flag;
}